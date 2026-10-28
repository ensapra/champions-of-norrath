extern s32 func_00180D78(void *, s32,s32,s32,s32,s32,s32,s32, f32,f32,f32, s32,s32,s32,s32,s32);
extern f32 D_00482C00; extern f32 D_00482C04;
extern u8 D_008D75E0[]; extern u8 D_008D7630[]; extern u8 D_008D7680[];
void func_002ACD38(s32 arg0, s32 arg1) {
 s32 m = arg0, n = arg0;
 if (arg1 == 0xFFFF) {
  if (arg0 == 1) func_00180D78(D_008D75E0,2,0x55,2,0x72,0,0x50,0,12.0f,11.0f,-1.6f,0x63,3,2,2,0);
  if (m == 1) func_00180D78(D_008D7630,0x2A,0x34,0xD9,0x32,0xFF,0x11D,0,28.0f,0.0f,24.0f,0x2B,arg0,m,8,0);
  if (n == 1) func_00180D78(D_008D7680,0x69,0x64,2,0x8B,0x79,0x17,0,12.0f,12.0f,D_00482C04,0,arg0,2,8,0);
 }}
