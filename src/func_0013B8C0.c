extern s32 (*D_010CE5A8[])(void);

s32 func_0013B8C0(void) {
    if (D_010CE5A8[0] != NULL) {
        return D_010CE5A8[0]();
    }
    return 0;
}
