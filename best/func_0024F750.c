typedef struct { u16 a; u16 b; s32 v; } Ev;
extern s8 D_0042DDB8[];
extern s32 D_00485954;
extern s32 *D_007D8F20[5];
extern Ev D_007DC280[];
void func_0024F750(s32 a, f32 x) {
 s32 k = a * 2;
 if (a != -1) {
  s32 *rec = D_007D8F20[a * 5];
  s32 n = D_00485954;
  s32 tag = D_0042DDB8[k] | (D_0042DDB8[k + 1] << 1);
  s32 v = (s32)((f32)rec[8] * x);
  if (n < 0x200) {
   Ev *e = &D_007DC280[n];
   s32 *cnt = &D_00485954;
   s32 c = *cnt + 1;
   e->b = tag | 0x200;
   e->a = 1;
   *cnt = c;
   e->v = v;
  }
 }
}
