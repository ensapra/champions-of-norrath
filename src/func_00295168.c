extern s32 func_00180D78(void *, s32,s32,s32,s32,s32,s32,s32, f32,f32,f32, s32,s32,s32,s32,s32);
extern u8 D_008D68C0[];
extern u8 D_008D6910[];
extern u8 D_008D6960[];
void func_00295168(s32 arg0, s32 arg1) {
 s32 m = arg0, n = arg0;
 if (arg1 == 0xFFFF) {
  if (arg0 == 1) func_00180D78(D_008D68C0,0x6E,0x64,0x17,0x64,0x4E,0x42,0x1E,35.0f,45.0f,0.0f,5,2,0,2,0);
  if (m == 1) func_00180D78(D_008D6910,0xC,0xC,0,0x4E,8,0x28,0x10,20.0f,15.0f,0.0f,5,3,0,8,0);
  if (n == 1) func_00180D78(D_008D6960,0,0,0,0xFE,0x19,0x19,0x19,5.0f,5.0f,0.0f,0,2,0,9,0);
 }
}
