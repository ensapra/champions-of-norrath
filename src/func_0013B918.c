extern s32 (*D_010CE5B0[])(void);

s32 func_0013B918(void) {
    if (D_010CE5B0[0] != NULL) {
        return D_010CE5B0[0]();
    }
    return 0;
}
