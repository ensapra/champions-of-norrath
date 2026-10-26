typedef struct { char pad0[0x10]; f32 x,y; s32 z; char pad1[0x1c]; s16 angle; char pad2[6]; s32 count; s32 limit; s32 tick; char pad3[4]; void *cb; s32 delay; char pad4[0x14]; s16 speed; s16 wave; s32 unk68; void *target; } Obj;
extern f32 D_00481588;
extern char D_00449670[];
s32 D_004844A4;
f32 func_0015A070(s32);
f32 func_0015A100(s32);
s32 func_0015A198(f32,f32);
void func_00194300(void*,s32);
void *func_001441B8(s32);
void func_001411F0(void*,void*,s32,s32,s32,s32,s32);
void func_00194390(void*,void*,void*);
void func_00143630(void*);
void func_00143830(void*);
void func_002146E8(Obj *p) {
 void *q=p->cb, *r=p->target, *t;
 s32 a, n=6, temp;
 s16 d;
 if(q) {
   d=(s16)(func_0015A198(((Obj*)((char*)q+12))->y-p->y,((Obj*)((char*)q+12))->x-p->x)-p->angle);
   a=d<0?-d:d;
   if(a>=273) p->angle=(u16)(p->angle+(d>=0?273:-273)); else p->angle+=d;
 } else p->angle+=*(u16*)((char*)p+0x64);
 p->count++;
 if(r) r=*(void**)((char*)r+12);
 func_0015A070(*(s16*)((char*)p+0x66)+p->count*(*(s16*)((char*)p+0x60)));
 d=*(s16*)((char*)p+0x62);
 a=(s16)p->angle+d;
 p->x+=func_0015A070(a)*300.0f*D_00481588;
 p->y+=func_0015A100(a)*300.0f*D_00481588;
 if(p->target){ void *v=*(void**)((char*)p->target+12); *(u64*)((char*)v+0x4c)=*(u64*)((char*)p+0x10); *(s32*)((char*)v+0x54)=p->z; }
 if(r && (*(u32*)((char*)r+12)&0x40)) n=3;
 temp=p->delay++; if(n<temp){p->delay=0; func_00194300(&p->target,n); t=func_001441B8(100); if(t){func_001411F0(t,p,0,0,0,0,0);}}
 if(D_004844A4>=p->limit && p){ void *v=*(void**)((char*)p+0x48); ((void(*)(void*,s32))*(void**)((char*)v+12))((char*)p+*(s16*)((char*)v+8),3);}
}
