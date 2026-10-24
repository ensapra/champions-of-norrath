u32 func_00172118(u32 w, u32 psm, u32 h) {
    u32 d;
    switch (psm) {
    case 0: case 1: case 0x30: case 0x31:
        d = 1; break;
    case 2: case 0xA: case 0x32: case 0x3A:
        d = 2; break;
    case 0x13: case 0x1B:
        d = 4; break;
    case 0x14: case 0x24: case 0x2C:
        d = 8; break;
    default:
        d = 0; break;
    }
    return ((w * h) / d + 31) >> 5 << 5;
}
