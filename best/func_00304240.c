extern char *func_00304640(char *, const char *);
char *func_00304240(char *dst, const char *src) {
 char *p = dst;
 if (!((u32)p & 7)) {
  u64 one = 0x0101010101010101ULL, high = 0x8080808080808080ULL;
  u64 v = *(u64 *)p;
  if (!((v - one) & ~v & high)) {
   do { p += 8; v = *(u64 *)p; } while (!((v - one) & ~v & high));
  }
 }
 while (*p) p++;
 func_00304640(p, src);
 return dst;
}
