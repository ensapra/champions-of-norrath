extern s32 func_00180D78(void *, s32,s32,s32,s32,s32,s32,s32, f32,f32,f32, s32,s32,s32,s32,s32);
extern f32 D_00482CB0;
extern f32 D_00482CB4;
extern f32 D_00482CB8;
extern u8 D_008D77C0[];
extern u8 D_008D7810[];
extern u8 D_008D7860[];
void func_002AFB58(s32 arg0, s32 arg1) {
 s32 m = arg0, n = arg0;
 if (arg1 == 0xFFFF) {
  if (arg0 == 1) func_00180D78(D_008D77C0,0x24,0x1E,0x96,0x33,0x67,0x7B,0x8F,33.0f,25.0f,D_00482CB0,0,arg0,m,5,0);
  if (m == 1) func_00180D78(D_008D7810,0x6E,0x6C,0x69,0x7B,0x3F,0x38,0x8D,54.0f,70.0f,D_00482CB4,0,arg0,0,6,0);
  if (n == 1) func_00180D78(D_008D7860,0x64,0x9A,0xEE,0x67,0x78,0x75,0x72,8.0f,8.0f,D_00482CB8,4,2,0,8,0);
 }
}
