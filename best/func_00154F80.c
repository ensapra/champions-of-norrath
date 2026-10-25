typedef struct { u8 pad0[0xC]; s32 flags; u8 pad10[0xC]; f32 value1c,value20; u8 pad24[4]; s8 byte28,byte29; u8 pad2A[0xE]; s16 value38; u8 pad3A[0xE]; void *table48; s32 arg4c,arg50; u32 arg54,arg58; s32 arg5c,arg60; u8 pad64[0x2c]; s32 arg90,arg94; } Obj;
typedef struct __attribute__((packed)) { u64 first; s32 third __attribute__((aligned(4))); } Input;
extern u8 D_0044CB08[];
extern void func_001411F0(void*,void*,s32,s32,s32,s32);
extern void func_001438A0(void*);
extern void func_00163830(void*,s32,s32);
extern void func_00163BA0(void*);
extern s32 func_00165DC0(s32,s32);
void func_00154F80(Obj *p,Input *in,s16 val,s32 mask,s8 v1,s8 v2,s32 x,s32 y,s32 q0,s32 q8,s32 q10,s32 q18) {
 Input tmp=*in; u8 *sub=(u8*)p+0x64;
 func_001411F0(p,&tmp,0,0,mask,q0);
 p->table48=D_0044CB08; sub[5]=1;
 p->arg90=q18;p->arg94=q10;p->arg54=q0;p->value20=(f32)v1;p->arg58=q8;p->value1c=(f32)v2;p->value38=val;
 p->flags |= (mask|8); p->byte28=v2;p->byte29=v1;p->arg4c=x;p->arg50=y;
 p->arg5c=func_00165DC0(x,y);p->arg60=func_00165DC0(p->arg4c,p->arg54);
 func_00163830(sub,func_00165DC0(p->arg4c,p->arg58),(p->arg94&2)?4:1);
 if(p->arg94&1) func_00163BA0(sub);
 func_001438A0(p);
}
