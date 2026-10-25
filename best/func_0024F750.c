typedef struct { u16 a; u16 b; s32 v; } Ev;
extern s8 D_0042DDB8[];
extern s32 D_00485954;
extern s32 *D_007D8F20[5];
extern Ev D_007DC280[];
void func_0024F750(s32 a, f32 x) {
 if (a != -1) {
  s32 *rec = D_007D8F20[a * 5];
  s32 n = D_00485954;
  s32 tag = D_0042DDB8[a * 2] | (D_0042DDB8[a * 2 + 1] << 1);
  s32 v = (s32)((f32)rec[8] * x);
  if (n < 0x200) {
   s32 *cnt = &D_00485954;
   D_007DC280[n].b = tag | 0x200;
   D_007DC280[n].a = 1;
   *cnt = *cnt + 1;
   D_007DC280[n].v = v;
  }
 }
}
