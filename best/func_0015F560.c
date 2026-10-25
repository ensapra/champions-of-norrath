typedef struct { unsigned char pad[0x5A0]; s32 x5a0,x5a4; unsigned char q[0x370]; s32 state,x91c,x920; } Obj;
typedef struct { unsigned char p[0x14]; s32 x14,x18; } Arg;
typedef struct { unsigned char pad[0xBC]; s32 (*fn)(void*,void*,s32); } Callback;
typedef struct { unsigned char p[0x4C]; void *vt; } Inner;
typedef struct { unsigned char p[0xD8]; s32 (*run)(void*,s32,s32,s32,s32); } Vtable;
extern char func_001C8098[];
extern s32 func_0014C900(void*); extern s32 func_00151FA4(void*); extern s32 func_0014D4EC(void*,void*,s32,s32,s32);
extern s32 func_00152424(void*); extern s32 func_0014B460(void*); extern s32 func_00152520(void*); extern s32 func_0014CE60(void*,s32,s32);
extern s32 func_00152254(void*); extern s32 func_00152320(void*);
s32 func_0015F560(void *a0,void *a1,s32 a2,s32 a3){
 Obj *o=a0; Arg *a=a1; s32 ret,i; s32 (*fn)(void*,void*,s32); Inner *in; Vtable *vt;
 fn=((Callback*)(func_001C8098+0x4f8))->fn; ret=fn(a0,a1,a2); if(ret)return 1;
 func_0014C900(a0); if(!func_00151FA4(a1))return 0;
 if(!o->state) {
   for(i=0;i<2;i++) if(func_0014D4EC(a0,a1,a3,a2,*(s32*)((char*)o+0x8A4+i*4)))return 1;
   in=*(Inner**)((char*)o+0x8A0); vt=*(Vtable**)in->vt;
   if(vt->run(in,a3,a2,a->x14,a->x18)) goto dispatch;
   fn=((Callback*)(func_001C8098+0x4f8))->fn; fn(a0,a1,a2);
   return 1;
 }
 dispatch:
 switch(*(u16*)a1) {
 case 1: if(!func_00152424(a0))return 0; func_0014B460(a0); o->state=1; o->x91c=a->x14-o->x5a0; o->x920=a->x18-o->x5a4; break;
 case 2: o->state=0; if(!func_00152520(a0))return 0; break;
 case 3: func_0014CE60(a0,a->x14-o->x91c,a->x18-o->x920); break;
 }
 if(func_00152254(a0))return 1;
 return !func_00152320(a0);
}
