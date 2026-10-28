s32 D_004840D0;
s32 * volatile D_0048410C;
s32 D_004844A8 = 0x400;
s32 D_00486968;
s32 WakeupThread_2(s32);
s32 func_00172838(void) {
    s32 t = *(volatile s32 *)0x10000000;
    s32 r;
    if (D_0048410C != 0)
        D_0048410C[7] = D_004844A8;
    r = WakeupThread_2(D_00486968);
    D_004840D0 = *(volatile s32 *)0x10000000 - t;
    return r;
}
