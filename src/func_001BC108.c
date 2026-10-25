s32 func_001B46A0();
extern s32 D_004844A8;

s64 func_001BC108(s32 *arg0) {
    s32 t = D_004844A8;
    if (t - arg0[0x13] >= 0x79) {
        arg0[0x13] = t;
        return func_001B46A0();
    }
}
