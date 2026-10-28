extern f32 D_00482F84;
extern f32 D_00482F88;
extern u8 D_008D80A0[];
extern u8 D_008D80F0[];
extern u8 D_008D8140[];
extern s32 func_00180D78(void *, s32,s32,s32,s32,s32,s32,s32, f32,f32,f32, s32,s32,s32,s32,s32);
void func_002BDC70(s32 arg0, s32 arg1) {
 s32 m = arg0, n = arg0;
 if (arg1 == 0xFFFF) {
  if (arg0 == 1) func_00180D78(D_008D80A0,0x64,0xD2,0xEB,0x8C,0xC6,0xC7,0xF4,4.0f,0.0f,-2.0f,0x8C,arg0,arg0,5,0);
  if (m == 1) func_00180D78(D_008D80F0,0x64,0x8B,0xFF,0xFF,0xC6,0xC7,0xF4,7.0f,5.0f,D_00482F84,0,arg0,0,5,0);
  if (n == 1) func_00180D78(D_008D8140,0xFF,0xFF,0xFF,0xFF,0x96,0x96,0x96,7.0f,5.0f,D_00482F88,0,arg0,arg0,5,0);
 }
}
