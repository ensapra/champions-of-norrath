extern char D_0042DC40[],D_0044AF90[],D_00474540[],D_00474550[],D_00474560[],D_00474570[]; extern f32 D_00481F58,D_00481F5C,D_00481F60,D_00481F64,D_00481F68,D_00481F6C,D_00481F70; s32 D_004844A4; u32 func_00153FA8(void*); s32 ovl_ntgui2_func_00108E58(void*,void*,s16,void*,s32,s32,f32); void func_001092F0(); void func_001128A8(); void func_00143830(void*); void func_001438A0(void*); s32 func_00155AB8(void*,void*); void func_001637A8(void*); s64 func_0016C970(s32,s32); void func_00248690(void*,s32); void func_00249C28(void*); void func_001091B0(void*);
void func_00247400(void *a, void *b, s16 c, s32 d, void *e) {
 u8 tmp[12]; u32 r; s32 x,kind,v; r=func_00153FA8(b); x=(r%14)+4; kind=0; v=0;
 ovl_ntgui2_func_00108E58(a,tmp,c,D_0042DC40,d,x,(f32)x);
 *(u8*)((char*)a+0x28)=0x28; *(u64*)((char*)a+0xa0)|=0x000800040000ULL; *(u32*)((char*)a+0xc)|=0x01000000; *(void**)((char*)a+0x48)=D_0044AF90;
 *(f32*)((char*)a+0xb0)=100.f; *(f32*)((char*)a+0xa8)=D_00481F58; *(f32*)((char*)a+0x1c)=20.f; *(s32*)((char*)a+0xf8)=D_004844A4; *(s32*)((char*)a+0x3c0)=0; *(s32*)((char*)a+0xec)=0; *(s16*)((char*)a+0x23c)=0; *(s32*)((char*)a+0x3dc)=0;
 func_001092F0(a,1,D_0044AF90,0,0,0,2.f,2.f,D_00481F5C,D_00481F5C,1.f);
 *(s16*)((char*)a+0x318)=-1; *(s32*)((char*)a+0x3c8)=0; r=func_00153FA8(a)%3; *(u32*)((char*)a+0x3c4)=r&65535; if(r && func_00153FA8(a)%3) *(u32*)((char*)a+0x3c4)=0;
 if(func_00155AB8(e,D_00474540)){if(func_00155AB8(e,D_00474550)){if(func_00155AB8(e,D_00474560)){if(func_00155AB8(e,D_00474570))kind=3;}else kind=2;}else kind=1;} *(s32*)((char*)a+0x3c4)=kind;
 func_00249C28(a); v=*(s32*)((char*)a+0x24); *(s64*)((char*)a+0x228)=func_0016C970(*(s32*)((char*)v+0xc),*(s32*)((char*)a+0xf4)); func_001637A8((char*)a+0x120); func_00248690(a,0); *(s32*)((char*)a+0x100)=0;
 if(kind==3){*(s32*)((char*)a+0xec)=1;func_00143830(a);}else func_001438A0(a);
 func_001128A8(a,0x11,1,0,0,0,D_00481F60,0.f,0,0); func_001128A8(a,0x18,1,2,0,0,D_00481F64,D_00481F68,0,0); func_001128A8(a,0x19,1,2,0,0,D_00481F6C,D_00481F70,0,0); func_001128A8(a,0x22,1,2,0,0,D_00481F60,1.5f,0,0); func_001128A8(a,0x1b,1,0,0,0,D_00481F60,0.f,0,0);func_001128A8(a,0x23,1,0,0,0,D_00481F60,0.f,0,0);func_001128A8(a,0x26,0x10,0,0,0,0.5f,0.f,0,0);func_001091B0(a);
}
