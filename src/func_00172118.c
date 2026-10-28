extern u8 jtbl_004C006C[];
u32 func_00172118(u32 w, u32 psm, u32 h) {
    static void *const tbl[] = {&&d1, &&d2, &&d4, &&d8, &&def};
    u32 d;
    if (psm >= 0x3B) goto def;
    goto *((void **)(jtbl_004C006C + 0xBFD4))[psm];
d1: d = 1; goto done;
d2: d = 2; goto done;
d4: d = 4; goto done;
d8: d = 8; goto done;
def: d = 0;
done:
    return ((w * h) / d + 31) >> 5 << 5;
}
