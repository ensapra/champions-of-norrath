extern s32 func_00142888(void); extern s32 func_0011C6C8(void); extern s32 func_0011C6F0(void); extern void func_00149AE4(s32,s32); extern void func_00142678(void);
extern s32 D_010D444C[4],D_010D4468[4],D_010D446C[4],D_010D4478[4];
extern s32 D_001C6870[4], D_001C6874[4];
#define CE8 D_001C6870[0]
#define CEC D_001C6874[0]
void func_00141090(void){
 s32 w, m, z;
 if (!func_00142888()) return;
 if (func_0011C6C8() & 0x4000) {
  CEC = 0;
  if (func_0011C6F0() & 0x4000) {
   if (++CE8 < 8) return;
  }
  z = D_010D4478[0] + 1;
  m = D_010D446C[0] - D_010D4468[0];
  if (z < 0) z = 0;
  CE8 = 0;
  D_010D4478[0] = z;
  w = z;
  if (m < w) { D_010D4478[0] = m; w = m; }
  func_00149AE4(D_010D444C[0], w);
 }
 if (func_0011C6C8() & 0x1000) {
  CE8 = 0;
  if (func_0011C6F0() & 0x1000) {
   if (++CEC < 8) return;
  }
  z = D_010D4478[0] - 1;
  m = D_010D446C[0] - D_010D4468[0];
  if (z < 0) z = 0;
  CEC = 0;
  D_010D4478[0] = z;
  w = z;
  if (m < w) { D_010D4478[0] = m; w = m; }
  func_00149AE4(D_010D444C[0], w);
 }
 func_00142678();
}
