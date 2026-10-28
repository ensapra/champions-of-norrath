extern s32 func_002FFDE8(void *);
extern s32 func_0030C828(void *, s32, s32, u16, s32, s32, s32, s32);

s32 func_0030C770(void *arg0) {
    char *p = (char *)arg0;
    u16 spC = *(u16 *)(p + 0xC);
    u16 spE = *(u16 *)(p + 0xE);
    s32 sp8 = *(s32 *)(p + 0x54);
    s32 sp3 = *(s32 *)(p + 0x1C);
    s32 sp7 = *(s32 *)(p + 0x24);

    // store to stack slots as in original
    // We'll just use local variables; compiler will assign stack offsets.
    s32 sp0 = 0;
    s32 sp10 = 0x400;
    // store
    // (compiler will map to sp+0x0 etc)

    // call func_0030C828
    s32 var_17 = func_0030C828(p, sp8, sp3, spC, sp0, sp10, sp7, spE); // arg guess

    if (var_17 >= 0) {
        s32 r = func_002FFDE8(p);
        var_17 = (r != 0) ? -1 : var_17;
    }

    if (spC & 0x40) {
        *(u16 *)(p + 0xC) = (u16)(spC | 0x40);
    }

    return var_17;
}
