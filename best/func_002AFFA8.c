typedef struct __attribute__((packed,aligned(4))){u32 a,b,c;} V;
extern u8 D_0044E670[],D_00452690[],D_00479018[],D_00486448[]; f32 D_00482CD0; u32 D_00483E5C; s32 D_004844A4;
void ovl_ntgui2_func_0013D230(void *); s32 func_00180260(s32); s32 func_00165DC0(void *,void *); s32 func_0024D4F8(s32,V *,f32); void func_0024C5F8(s32);
typedef struct {s8 flag; s32 zero; char *obj; char *in; u32 rand; void *vt; s32 ptr,field; char body[0x30]; V pos; s32 a,b;} Obj;
void func_002AFFA8(Obj *o,s32 flag,char *in,char *obj) { V v; struct {char pad[0x10]; V w;} s; char *p=(char *)o+0x20; s32 n; f32 z=0.0f, inf=1.0f/z; u32 r;
o->flag=flag; o->vt=D_0044E670; o->obj=obj; o->in=in;
r=D_00483E5C*0x19660D+0x3c6ef35f; o->zero=0; D_00483E5C=r; o->rand=r>>16; o->vt=D_00452690;
v=*(V*)(in+0x10); o->pos=v;
p[9]=0; *(s16*)(p+0x14)=*(s16*)(p+0xc)=200; *(f32*)(p+0x28)=inf; *(f32*)(p+0x2c)=D_00482CD0; *(s16*)(p+0x12)=*(s16*)(p+0xa)=250; *(f32*)(p+0x1c)=*(f32*)(p+0x24)=z; *(f32*)(p+0x20)=inf; *(s16*)(p+0x16)=*(s16*)(p+0xe)=100; *(s16*)(p+0x18)=*(s16*)(p+0x10)=150; p[8]=0;
ovl_ntgui2_func_0013D230(p);
n=((s32 (*)(void *,s32,s32))(*(void **)(*(char **)(o->obj+0x60)+0x5c)))(o->obj,1,o->flag);
o->ptr=D_004844A4+n*60; o->field=0x55; o->a=func_00180260(o->ptr);
n=func_00165DC0(D_00486448,D_00479018); s.w=*(V*)(o->in+0x10); o->b=func_0024D4F8(n,&s.w,1.0f); func_0024C5F8(o->b);
}
