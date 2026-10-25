typedef struct __attribute__((packed, aligned(4))) { u32 w[3]; } V12;
s32 func_0016CD50(s32, s32);
void func_0016C238(s32, s32, V12 *, s16, s32, void *, void *, s32, f32);
void func_001D5630(s32, void *);
void func_001E5F98(s32 a, s32 b, V12 *p, s16 ang, f32 f) {
    V12 v = *p;
    V12 *vp = &v;
    char s10[16];
    char s20[16];
    s32 n, i = 0;
    n = func_0016CD50(a, b);
    for (i = 0; i < n; ) {
        func_0016C238(a, b, vp, ang, i++, s10, s20, 0, f);
        func_001D5630(2, s10);
    }
}
