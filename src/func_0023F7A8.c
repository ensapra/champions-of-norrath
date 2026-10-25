extern s32 func_00180D78(void *, s32,s32,s32,s32,s32,s32,s32, f32,f32,f32, s32,s32,s32,s32,s32);
extern u8 D_007D7E30[];
extern u8 D_007D7E80[];
extern u8 D_007D7ED0[];
void func_0023F7A8(s32 arg0, s32 arg1) {
 s32 m = arg0, n = arg0;
 if (arg1 == 0xFFFF) {
  if (arg0 == 1) func_00180D78(D_007D7E30,0x33,0x2E,0x19,0x32,0x63,0x1F,0x10,5.0f,5.0f,0.0f,0xA7,2,0,9,0);
  if (m == 1) func_00180D78(D_007D7E80,0x33,0x2E,0x19,0x32,0x63,0x1F,0x10,10.0f,6.0f,0.0f,0xA7,0,m,9,0);
  if (n == 1) func_00180D78(D_007D7ED0,0x33,0x2E,0x19,0x32,0x63,0x1F,0x10,5.0f,5.0f,0.0f,0x32,3,0,9,0);
 }
}
