extern char D_004C3EF8[];
extern void *D_004C3FBC;
extern char D_0110B3E8[];
extern s32 func_001A2418(void *, void *, s32);
s32 func_001B1870(void) {
    char *a = D_004C3EF8;
    char *b = D_0110B3E8;
    s32 r = 0;
    if (func_001A2418(b, a, 4) && func_001A2418(b, *(void **)D_004C3FBC, 4))
        r = func_001A2418(a, *(void **)D_004C3FBC, 4) != 0;
    return r;
}
