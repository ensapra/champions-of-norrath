extern s32 func_00180D78(void *, s32,s32,s32,s32,s32,s32,s32, f32,f32,f32, s32,s32,s32,s32,s32);
extern u8 D_008D5FF0[];
extern u8 D_008D6040[];
extern u8 D_008D6090[];
void func_002842F8(s32 arg0, s32 arg1) {
 s32 m = arg0, n = arg0;
 if (arg1 == 0xFFFF) {
  if (arg0 == 1) func_00180D78(D_008D5FF0,0x97,0x11,0x2F,0x7C,0x37,0x81,0x63,18.0f,0.0f,-1.0f,0xA6,2,arg0,8,0);
  if (m == 1) func_00180D78(D_008D6040,0x34,0x4A,0x103,0x84,0x22,0x57,0x28,8.0f,14.0f,1.0f,0,3,arg0,m,0);
  if (n == 1) func_00180D78(D_008D6090,0x97,0x11,0x2F,0x7C,0x37,0x81,0x63,18.0f,0.0f,2.0f,0xA6,2,m,8,0);
 }
}
