extern s32 (*D_010E456C[])(void);

s32 func_00152DA0(void) {
    if (D_010E456C[0] != NULL) {
        return D_010E456C[0]();
    }
    return -1;
}

extern s32 (*D_010E4564[])(void);

s32 func_00152D74(void) {
    if (D_010E4564[0] != NULL) {
        return D_010E4564[0]();
    }
    return 0;
}
