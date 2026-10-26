extern s32 func_002FD2E0(void *, void *, s32);
s32 func_002FE0D0(void *a, void *b, s32 c, s32 *out) {
    *out = c;
    if (func_002FD2E0(a,b,0)) return 1;
    return 0;
}
