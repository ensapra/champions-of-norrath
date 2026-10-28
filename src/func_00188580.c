u8 *func_001884C8(u8 *, s32);
u8 *func_00188580(u8 *a) {
    u8 *p = func_001884C8(a, 0);
    if (p == 0) return 0;
    if (*(s32 *)p != 0x745865) return 0;
    s32 off = *(s32 *)(p + 8);
    if (*(s32 *)(p + 4) == off + 0x10) return 0;
    return p + off + 0x10;
}
