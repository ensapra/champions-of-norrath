typedef struct { u8 p0[16]; f32 pos[3]; f32 extent; u8 p1[48]; f32 scale; u8 p2[4]; s32 state; s16 frame; u8 p3[2]; f32 vel[3]; s32 count; } Obj;
f32 D_004828C4,D_004828CC,D_004828D0,D_004828D4,D_004828D8,D_004828DC,D_004828E0,D_004828E4; s32 D_004844A4,D_004844A0;
u32 func_00153FA8(void *); f32 func_0015A070(u32); f32 func_0015A100(u32);
f32 func_00176378(s32, void *, s32, f32, f32); void *func_00165DC0(char *, char *); void func_0024D308(void *, void *, f32);
extern char D_00486248[], D_00478080[];
void func_00191EF8(void *, s16, s32, s32, f32, f32);
void func_00180DA0(void *, void *, void *, f32);
typedef struct { s16 off; s16 pad; void *fn; } VSlot;
void func_0029B238(Obj *o) {
 f32 a[3], b[3]; s32 i=0; u8 scratch[0x94];
 s32 count=o->count;
 if(o->state==0 && D_004844A4<count) {
  f32 *pos=&o->pos[0]; f32 *vel=&o->vel[0];
  o->vel[2]+=D_004828C4; pos[0]+=vel[0];pos[1]+=vel[1];pos[2]+=vel[2];
  if(o->scale*30.0f>0) do {
   do {a[0]=(f32)(s32)func_00153FA8(o)*(1.0f/65536)*2-1;a[1]=(f32)(s32)func_00153FA8(o)*(1.0f/65536)*2-1;a[2]=(f32)(s32)func_00153FA8(o)*(1.0f/65536)*2-1;} while(a[0]*a[0]+a[1]*a[1]+a[2]*a[2]>1);
   do {b[0]=(f32)(s32)func_00153FA8(o)*(1.0f/65536)*2-1;b[1]=(f32)(s32)func_00153FA8(o)*(1.0f/65536)*2-1;b[2]=(f32)(s32)func_00153FA8(o)*(1.0f/65536)*2-1;} while(b[0]*b[0]+b[1]*b[1]+b[2]*b[2]>1);
   a[0]=a[0]*o->scale*D_004828CC+pos[0];a[1]=a[1]*o->scale*D_004828CC+pos[1];a[2]=a[2]*o->scale*D_004828CC+pos[2];func_00180DA0((void*)0x008D6D70,a,b,0);i++;
  } while((f32)i<o->scale*30);
  i=0;
  if(o->scale*18>0) do {
   do {a[0]=(f32)(s32)func_00153FA8(o)*(1.0f/65536)*2-1;a[1]=(f32)(s32)func_00153FA8(o)*(1.0f/65536)*2-1;a[2]=(f32)(s32)func_00153FA8(o)*(1.0f/65536)*2-1;} while(a[0]*a[0]+a[1]*a[1]+a[2]*a[2]>1);
   do {b[0]=(f32)(s32)func_00153FA8(o)*(1.0f/65536)*2-1;b[1]=(f32)(s32)func_00153FA8(o)*(1.0f/65536)*2-1;b[2]=(f32)(s32)func_00153FA8(o)*(1.0f/65536)*2-1;} while(b[0]*b[0]+b[1]*b[1]+b[2]*b[2]>1);
   a[0]=a[0]*o->scale*D_004828D8+pos[0];a[1]=a[1]*o->scale*D_004828D8+pos[1];a[2]=a[2]*o->scale*D_004828D8+pos[2];func_00180DA0((void*)0x008D6DC0,a,b,0);i++;
  } while((f32)i<o->scale*18);
  i=0;
  if(o->scale*4>0) do {
   do {a[0]=(f32)(s32)func_00153FA8(o)*(1.0f/65536)*2-1;a[1]=(f32)(s32)func_00153FA8(o)*(1.0f/65536)*2-1;a[2]=(f32)(s32)func_00153FA8(o)*(1.0f/65536)*2-1;} while(a[0]*a[0]+a[1]*a[1]+a[2]*a[2]>1);
   func_00180DA0((void*)0x008D6E10,a,b,0);i++;
  } while((f32)i<o->scale*4);
  {
   f32 d=func_00176378(D_004844A0, o->pos, 0, o->extent, o->scale);
   if (o->pos[2]-d < 16.0f) { o->state=1; func_0024D308(func_00165DC0(D_00486248,D_00478080),o,1.0f); }
  }
 } else if ((f32)o->frame<o->extent*3.0f*o->scale) {
  o->frame+=7;i=0;
  do { u32 r=func_00153FA8(o); a[0]=func_0015A070(r)*(f32)o->frame;a[1]=func_0015A100(r)*(f32)o->frame;b[0]=b[1]=b[2]=0;
   do {b[0]=(f32)(s32)func_00153FA8(o)*(1.0f/65536)*2-1;b[1]=(f32)(s32)func_00153FA8(o)*(1.0f/65536)*2-1;b[2]=(f32)(s32)func_00153FA8(o)*(1.0f/65536)*2-1;} while(b[0]*b[0]+b[1]*b[1]+b[2]*b[2]>1);
   func_00180DA0((void*)0x008D6D70,a,b,0);func_00180DA0((void*)0x008D6DC0,a,b,0);i++;
  } while(i<0x55);
 } else {
   u32 r=func_00153FA8(o);
   if (r%100U < 0x21U) {
     o->extent -= 6.0f;
     r=func_00153FA8(o);
     func_00191EF8(&o->pos[0], (s16)r, 9, 0, o->extent, o->scale);
   }
 }
 if (o != NULL) {
  VSlot *slot=(VSlot *)(*(u32 *)((u8 *)o+0x48)+8);
  ((void (*)(void *,s32))slot->fn)((u8 *)o+slot->off,3);
 }
}
