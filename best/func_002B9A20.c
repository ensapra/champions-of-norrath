s32 D_004844A4; extern const f32 D_00482ED8;
s32 func_0015E948(void *);
void func_001CE218(void *, s32, s32, s32, s32, s32, void *, s32, f32, f32);
typedef struct { unsigned char b[0x240]; } ObjB;
typedef struct { s32 a,b,c; } VecArg;
void func_002B9A20(ObjB *p, VecArg arg) {
 s32 frame[20], result, i, n; f32 f; char *obj,*v,*t; s16 *ids; unsigned char *q;
 if (D_004844A4 < *(s32 *)(p->b+0x18)) {
   if (*(f32 *)(*(char **)(p->b+0xC)+0x230) > 0.0f && D_004844A4 % 30 == 0) {
     obj=*(char **)(p->b+8);
     t=*(char **)(obj+0x60)+0x58;
     result=(*(s32 (**)(void *,s32,s32))(t+4))(obj+*(s16 *)t,1,*(s8 *)p->b);
     ids=(s16 *)((char *)frame+0x3c); for(i=3;i>=0;i--){*ids=-1;ids-=4;}
     q=(unsigned char *)frame; q[0x20]=-1; q[0x21]=-1;
     for(i=3;i>=0;i--){*(s16 *)(q+0x10+(3-i)*2)=0; *(s16 *)(q+0x18+(3-i)*2)=0;}
     f=(f32)result; n=func_0015E948(p);
     func_001CE218(*(void **)(p->b+0xC),*(s32 *)(p->b+0x1c),100000,0,0,64,q,0,(f32)(result/2),(f + f*(n*(1.0f/65536.0f))*D_00482ED8)*0.5f);
   }
 } else if(p) { v=*(char **)(p->b+0x14)+8; ((void (*)(void *,s32,s32))(*(void **)(v+4)))((char *)p+*(s16 *)v,3,arg.c); }
}
