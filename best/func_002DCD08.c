s32 func_002D8270(void *, s32, s32, s32 *, s32, s32 *, s32, s32, s32);
s32 func_002DC600(void);
s32 func_002DC700(void);
extern s32 D_008E1E80[];
extern s32 D_008E2080[];

s32 func_002DCD08(s32 arg0) {
    if (func_002DC600() < 0) {
        return 0xFFFF0000;
    }
    if (func_002DC700() != 0) {
        return 0xFFFEFFFC;
    }
    D_008E1E80[0] = arg0;
    if (func_002D8270(D_008E2080, 0xA, 0, D_008E1E80, 4, D_008E1E80, 4, 0, 0) < 0) {
        return 0xFFFEFFFF;
    }
    return D_008E1E80[0];
}
