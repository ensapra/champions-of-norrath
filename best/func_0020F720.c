extern s32 func_00180D78(void*,s32,s32,s32,s32,s32,s32,s32,f32,f32,f32,s32,s32,s32,s32,s32);
extern f32 D_004814D4,D_004814D8,D_004814DC,D_004814E0;
extern u8 D_007D7210[],D_007D7260[];
void func_0020F720(s32 arg0,s32 arg1) {
 volatile s32 hold=arg0;
 if(arg1==0xffff) {
  if(hold!=1) return;
  func_00180D78(D_007D7210,0x32,0x32,0x14,0x96,0x28,0x28,0xa,D_004814D4,D_004814D8,D_004814DC,0,2,0,4,0);
  if(hold==1) func_00180D78(D_007D7260,0xa,0x41,0xa,0x35,0xa,0x41,0xa,20.5f,1.0f,D_004814E0,0,0,0,6,0);
 }
}
