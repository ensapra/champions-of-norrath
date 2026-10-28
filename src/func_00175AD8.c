extern u8 jtbl_004C006C[];
s32 func_00175AD8(u32 x) {
    static void *const tbl[] = { &&r0, &&r2, &&r1 };
    if (x >= 45)
        goto def;
    goto *((void **)(jtbl_004C006C + 0xC1D4))[x];
r0:
    return 0;
r2:
    return 2;
r1:
    return 1;
def:
    return 0;
}
