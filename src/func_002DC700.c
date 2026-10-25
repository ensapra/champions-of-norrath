/* identical to func_002D9230 (matched), with its names changed by decompdecomp */
extern char D_0044494C[];
extern char D_00444A14[];
extern char D_008E20A8[];
extern s32 func_00301F68(void *, void *, s32);
s32 func_002DC700(void) {
    char *a = D_0044494C;
    char *b = D_008E20A8;
    s32 r = 0;
    if (func_00301F68(b, a, 4) && func_00301F68(b, *(void **)D_00444A14, 4))
        r = func_00301F68(a, *(void **)D_00444A14, 4) != 0;
    return r;
}
