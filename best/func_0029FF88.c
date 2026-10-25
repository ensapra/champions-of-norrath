typedef struct { f32 x,y,z; } Vec3; typedef struct { u8 pad[0x70]; } Obj; typedef struct { u8 pad[0x60]; } Owner;
s32 func_00153FD0(Obj *,Vec3,s32,s32); f32 func_0015A070(s16); f32 func_0015A100(s16); s32 func_00165DC0(void*,void*); void func_00143830(void*); void func_0024D308(s32,void*,f32); void ovl_ntgui2_func_0013D230(void*,void*,s32,s32,s32,s32,s32);
extern char D_004515B0[],D_00478328[],D_00486280[]; extern f32 D_0048299C;
void func_0029FF88(Obj *p, Vec3 q, s16 angle,s32 a3,s32 a4,Owner *a5) {
 Vec3 tmp; f32 zero=0.0f; f32 scale; s32 n;
 func_00153FD0(p,q,a3,0);
 tmp=q;
 *(void**)((char*)p+0x48)=D_004515B0;
 *(u8*)((char*)p+0x79)=0; *(u8*)((char*)p+0x78)=0;
 *(f32*)((char*)p+0x94)=120.0f; *(f32*)((char*)p+0x8c)=120.0f;
 *(s16*)((char*)p+0x84)=0x84; *(s16*)((char*)p+0x86)=0x44; *(s16*)((char*)p+0x7c)=0x84; *(s16*)((char*)p+0x7e)=0x44;
 *(f32*)((char*)p+0x98)=D_0048299C; *(f32*)((char*)p+0x90)=D_0048299C;
 *(s16*)((char*)p+0x82)=0x3c; *(s16*)((char*)p+0x7a)=0x3c; *(s16*)((char*)p+0x80)=0; *(s16*)((char*)p+0x88)=0;
 *(f32*)((char*)p+0x9c)=zero;
 ovl_ntgui2_func_0013D230((char*)p+0x70,0,0,0,0,0,0);
 *(Owner**)((char*)p+0xac)=a5; *(s16*)((char*)p+0x64)=angle; *(f32*)((char*)p+0x1c)=5.0f; *(s32*)((char*)p+0x68)=a4;
 n=(*(s32 (**)(void*,s32))((char*)a5+0x64))((char*)a5+*(s32*)((char*)a5+0x60),1);
 scale=(f32)n;
 *(f32*)((char*)p+0x54)=func_0015A070(angle)*scale;
 *(f32*)((char*)p+0x5c)=zero;
 *(f32*)((char*)p+0x58)=func_0015A100(angle)*scale;
 *(s32*)((char*)p+0x6c)=0; *(s32*)((char*)p+0x60)=0;
 func_00143830(p);
 n=func_00165DC0(D_00486280,D_00478328);
 func_0024D308(n,p,1.0f);
 (void)tmp;(void)a3;
}
