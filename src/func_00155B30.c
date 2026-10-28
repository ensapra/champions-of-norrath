s32 func_00304168(s32, s32);
extern s32 D_00333D98[];
s32 func_00155B30(s32 arg0) {
    s32 i;
    if (arg0 != 0) {
        for (i = 0; D_00333D98[i] != 0; i++) {
            if (func_00304168(arg0, D_00333D98[i]) == 0)
                return 1;
        }
    }
    return 0;
}
