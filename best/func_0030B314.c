void *func_0030B314(const void *p, int c, u32 n) { const u8 *s=p; c &= 255; while(n--) { if(*s == c) return (void *)s; s++; } return 0; }
