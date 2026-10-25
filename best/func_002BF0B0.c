extern s32 func_00180D78(void *, s32,s32,s32,s32,s32,s32,s32,f32,f32,f32,s32,s32,s32,s32,s32);
extern f32 D_00482FF4;
extern char D_008D8190[80]; extern char D_008D81E0[80];
void func_002BF0B0(s32 a,s32 b) {
 if(b!=0xFFFF)return;
 if(a!=1)return;
 func_00180D78(D_008D8190,0x14,0x50,0x14,0,0x14,0x50,0x14,D_00482FF4,0,0,0xAF,a,2,4,0);
 if(a==1) func_00180D78(D_008D81E0,0x32,0xC8,0x32,0x64,0x64,0xFA,0x64,1.0f,10.0f,0,0,a,a,7,0);
}
