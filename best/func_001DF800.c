typedef struct { unsigned char pad0[0x5c]; } Ctx;
typedef struct { unsigned char pad[0x12]; signed char count; } Info;
extern char D_0046D070[],D_0044CDD8[],D_007D67E0[];
f32 D_00480918;
s32 func_001D39C0(char *); void *func_00165DC0(s32,s32); void *func_001441B8(s32);
void func_00149068(void*,void*,s32,s32,s32,s32,s32,s32,s32,f32);
s32 func_00153FA8(void*); void func_00148738(void*,s32); void func_00180DA0(void*,void*,void*);
void func_001DF800(Ctx *o) {
 s32 i,j,k; f32 v[3], t[3], scale; void *p; Info *q;
 if (!func_001D39C0(D_0046D070)) return;
 i=0; q=func_00165DC0(*(s32*)((char*)o+0x4c),*(s32*)((char*)o+0x58));
 if (q->count <= 0) goto done;
 for (; i<q->count; i+=2) {
  p=func_001441B8(0x250);
  if (p) {
   j=1<<i;
   *(u64*)t=*(u64*)((char*)o+0x10); t[2]=*(f32*)((char*)o+0x18);
   func_00149068(p,t,*(s32*)((char*)o+0x4c),*(s32*)((char*)o+0x58),*(s32*)((char*)o+0x5c),j,0x614,0,0,1.0f);
   *(void**)((char*)p+0x48)=D_0044CDD8;
   *(s32*)((char*)p+0x248)=0; *(s32*)((char*)p+0x24c)=0;
  }
  if (p) {
   *(s32*)((char*)p+0x234)=0x14;
   func_00153FA8(o); func_00153FA8(o); func_00153FA8(o);
   func_00148738(p,0x614);
  }
  for (k=0;k>=0;k--) {
   do { v[0]=(f32)func_00153FA8(o)*0.000030517578125f*2.0f-1.0f;
        v[1]=(f32)func_00153FA8(o)*0.000030517578125f*2.0f-1.0f;
        v[2]=(f32)func_00153FA8(o)*0.000030517578125f*2.0f-1.0f;
   } while (v[0]*v[0]+v[1]*v[1]+v[2]*v[2]>1.0f);
   scale=1.0f/(v[0]*v[0]+v[1]*v[1]+v[2]*v[2]);
   t[0]=v[0]*scale; t[1]=v[1]*scale; t[2]=v[2]*scale;
   func_00153FA8(o);
   func_00180DA0(D_007D67E0,(char*)p+0x10,t);
  }
 }
 done: if (o) { s16 off=*(s16*)((char*)*(void**)((char*)o+0x48)+8); void (*fn)(void*,s32)=*(void (**)(void*,s32))((char*)*(void**)((char*)o+0x48)+12); fn((char*)o+off,3); }
}
