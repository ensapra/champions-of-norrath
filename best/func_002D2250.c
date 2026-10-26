typedef unsigned long long u64;
typedef long long s64;
typedef short s16;
typedef int u128 __attribute__((mode(TI)));
extern s64 *func_002D1878(void);
extern void func_002D19A0(void *, s16, s16, s16, int, int);
extern int func_002D1DD8(s16, s16, s16, s64);
extern void func_002D2598(void *, s16, s16, s16, s16, s16);
extern void func_002D2780(void *, s16, int, int, s16, s16, int, int, int, int, int);
extern void func_002D2970(void *, s16, s16, s16, s16, s16);

#define F(o) (*(u64 *)((char *)a + (o)))
void func_002D2250(char *a, s16 w, s16 x, s16 y, s16 b, s16 c, s16 f) {
    s64 *p;
    int t, t2, u;
    p = func_002D1878();
    func_002D19A0(a, w, x, y, 0, 0);
    func_002D19A0(a + 0x28, w, x, y, 0, 0);
    func_002D2598(a + 0x60, w, x, y, b, c);
    func_002D2970(a + 0xE0, w, x, y, b, c);
    func_002D2598(a + 0x1D0, w, x, y, b, c);
    func_002D2970(a + 0x250, w, x, y, b, c);
    if (f) {
        u = 0x800 - (y >> 1);
        t = 0x800 - (x >> 1);
        func_002D2780(a + 0x160, b, t, u, x, y, 0, 0, 0, 0, 0);
        func_002D2780(a + 0x2D0, b, t, u, x, y, 0, 0, 0, 0, 0);
    }
    *(u128 *)(a + 0x50) = 0;
    *(u128 *)(a + 0x1C0) = 0;
    F(0x50) = ((((F(0x50) & ~0x7FFFULL) | (f ? 0x16 : 0x10)) | 0x8000) & (-1ULL >> 4)) | (0x8000ULL << 45);
    F(0x58) = (F(0x58) & ~0xFULL) | 0xE;
    F(0x1C0) = ((((F(0x1C0) & ~0x7FFFULL) | (f ? 0x16 : 0x10)) | 0x8000) & (-1ULL >> 4)) | (0x8000ULL << 45);
    F(0x1C8) = (F(0x1C8) & ~0xFULL) | 0xE;
    t = func_002D1DD8(w, y, x, 0);
    if ((*p & 0xFFFF0000FFFFULL) == 0x100000001ULL || (s16)*p == 0) {
        t2 = t >> 1;
        F(0xE0) = (F(0xE0) & ~0x1FFULL) | (t2 & 0x1FF);
        F(0x38) = (F(0x38) & ~0x1FFULL) | ((s16)t2 & 0x1FF);
        F(0x60) = (F(0x60) & ~0x1FFULL) | (t2 & 0x1FF);
    }
}
