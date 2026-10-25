extern s32 func_00180D78(void *,s32,s32,s32,s32,s32,s32,s32,f32,f32,f32,s32,s32,s32,s32,s32);
extern u8 D_008D6A50[],D_008D6AA0[],D_008D6AF0[];
void func_00297370(s32 arg0,s32 arg1) {
 s32 m=arg0,n=arg0;
 if(arg1==0xFFFF) {
  if(arg0==1) func_00180D78(D_008D6A50,0x62,0x79,0x42,0x32,0x3f,0x55,0x1e,15.0f,20.0f,-2.0f,0,2,0,2,0);
  if(m==1) func_00180D78(D_008D6AA0,0x7d,0xb3,0x0f,0x32,0x41,0x74,0,15.0f,20.0f,-2.0f,0,2,0,2,0);
  if(n==1) func_00180D78(D_008D6AF0,0,0,0,0x36,0x19,0x19,0x19,10.0f,10.0f,0.0f,0,2,0,9,0);
 }
}
