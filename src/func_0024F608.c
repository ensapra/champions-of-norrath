extern s32 D_0048594C;
extern s32 D_007D9280[];
s32 func_00304168(s32, s32);
s32 func_0024F608(s32 a) {
 s32 i = 0;
 s32 *p;
 if (D_0048594C > 0) {
  p = D_007D9280;
  do {
   if (func_00304168(p[0], a) == 0) return p[1];
   i++;
   p += 4;
  } while (i < D_0048594C);
 }
 return 0;
}
