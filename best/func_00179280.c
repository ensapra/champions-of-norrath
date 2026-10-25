s32 func_00179048(s32);
void func_00179158(s32);
void func_00179520(s32 *, s32, s32);

u32 func_00179280(u32 a0, s32 a1) {
    u32 v = func_00179048(a1 + a0 + 1);
    u32 r;
    u32 n;
    u32 end;
    u32 len;
    if (a0 & 3)
        return 0;
    if (v == 0)
        return v;
    r = a0 - (v % a0);
    n = r >> 2;
    end = v + r;
    len = n - 1;
    if (r != 0) {
        func_00179520((s32 *)(end - 4), (*(s32 *)(v - 4) & 0x7FFFFFFF) - n, 1);
        func_00179520((s32 *)(v - 4), len, 0);
        func_00179158(v);
        v = end;
    }
    return v;
}
