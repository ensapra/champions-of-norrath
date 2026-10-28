extern s32 func_00180D78(void *,s32,s32,s32,s32,s32,s32,s32,f32,f32,f32,s32,s32,s32,s32,s32);
extern u8 D_008D7A40[],D_008D7A90[],D_008D7AE0[];
extern f32 D_00482E0C,D_00482E10,D_00482E14,D_00482E18;
void func_002B54D0(s32 a0,s32 a1) {
 s32 m=a0,n=a0;
 if(a1==0xFFFF) {
 if(a0==1) func_00180D78(D_008D7A40,0x72,0x7f,0x8b,0x4b,0x1f,0x2b,0x42,D_00482E0C,8.0f,D_00482E10,0,a0,a0,6,0);
 if(m==1) func_00180D78(D_008D7A90,0xff,0xc8,0xaa,0x80,0xfa,0xe1,0x87,38.0f,20.0f,D_00482E14,0,m,2,15,0);
 if(n==1) func_00180D78(D_008D7AE0,0x56,0x7e,0xfa,0x86,4,0x3f,0x69,20.0f,0.0f,D_00482E18,0,2,2,15,0);
 }
}
