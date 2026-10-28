s32 func_003044FC(s8*,s8*); s32 func_00304640(s8*,s8*); s32 func_00304CFC(s8*); extern s8 *D_0048689C; extern s8 *D_004868A0;
s32 func_00143C38(s8 *str) {
 s8 *p = D_0048689C;
 s32 n;
 if (p == 0 || str == 0) return 0;
 while (p != D_004868A0) {
   n = *p + 1;
   p++;
   if (*p == *str && func_003044FC(p, str) == 0) return p - D_0048689C;
   p += n;
 }
 n = func_00304CFC(str);
 *p = n;
 p++;
 func_00304640(p, str);
 D_004868A0 += n + 2;
 return p - D_0048689C;
}
