extern u32 *D_010EB624[];
extern u32 *D_010EB628[];

s32 func_00179440(s32 *out) {
    u32 *p = D_010EB624[0];
    s32 total = 0;
    while (p < D_010EB628[0]) {
        u32 used = *p & 0x80000000;
        u32 sz = *p & 0x7FFFFFFF;
        if (used) total += sz;
        p += sz + 1;
    }
    *out = total * 4;
    return 0;
}

void *func_00179048(s32);
void func_001A2660(void *, s32, s32);
void *func_001793F0(s32 n, s32 size) {
    void *p;
    p = func_00179048(n * size);
    if (p != NULL) {
        func_001A2660(p, 0, n * size);
    }
    return p;
}
