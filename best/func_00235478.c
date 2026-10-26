extern char D_0042D200[],D_0044F6A8[]; extern f32 D_00481AB4,D_00481AB8,D_00481ABC,D_00481AC0,D_00481AC4,D_00481AC8; s32 D_004844A4; void ovl_ntgui2_func_00108E58(); void func_001092F0(); void func_001128A8(); void func_001438A0(void*); u32 func_00153FA8(void*); void func_001637A8(void*); void func_00163830(void*,s32,s32);
void func_00235478(void*a,void*b,s16 c,s32 d){u8 x[12]; f32 z=0; s32 r;
 ovl_ntgui2_func_00108E58(a,x,c,D_0042D200,d,10.f,*(s32*)((char*)b+8));
 *(u8*)((char*)a+0x28)=0x55;*(u8*)((char*)a+0x29)=0x50;*(f32*)((char*)a+0x1c)=50.f;*(f32*)((char*)a+0x68)=D_00481AB8;*(f32*)((char*)a+0x60)=D_00481ABC;*(f32*)((char*)a+0xe0)=1.f;*(s32*)((char*)a+0xf8)=D_004844A4;*(void**)((char*)a+0x48)=D_0044F6A8;*(u64*)((char*)a+0xa0)|=0x220040000ULL;*(f32*)((char*)a+0xa8)=D_00481AB4;
 *(s32*)((char*)a+0xb0)=0;*(s32*)((char*)a+0xc0)=0;*(s32*)((char*)a+0xec)=0;*(s16*)((char*)a+0x23c)=0;*(s32*)((char*)a+0x100)=0;*(s32*)((char*)a+0xe4)=0;
 func_001092F0(a,1,D_0044F6A8,0x220040000ULL,50.f,D_00481AC0,2.f,D_00481AC4,10.5f);
 func_001637A8((char*)a+0x120); func_00163830((char*)a+0x120,*(s32*)((char*)a+0xb0),1); func_001438A0(a);
 func_001128A8(a,5,1,0,0,0,D_00481AB4,z,z,z);func_001128A8(a,6,1,0,0,0,D_00481AB4,z,z,z);func_001128A8(a,7,1,0,0,0,D_00481AB4,z,z,z);func_001128A8(a,8,1,0,0,0,D_00481AB4,z,z,z);func_001128A8(a,10,1,0,0,0,.5f,z,z,z);func_001128A8(a,11,1,0,0,0,D_00481AC8,z,z,z);func_001128A8(a,12,1,0,0,0,.5f,z,z,z);func_001128A8(a,9,17,0,0,0,D_00481AB4,z,z,z);func_001128A8(a,3,16,0,0,0,D_00481AB4,z,z,z);func_001128A8(a,4,16,0,0,0,D_00481AB4,z,z,z);func_001128A8(a,13,16,0,0,0,2.f,z,z,z);
 r=func_00153FA8(a)%300+*(s32*)((char*)a+0x328)+300; *(s32*)((char*)a+0x3c4)=r;func_001091B0(a);
}
