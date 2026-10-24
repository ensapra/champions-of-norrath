void *func_00175850(s32 *arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 d = 0x388 - arg3;
    s32 *a = arg1 + 4;
    s32 *b = arg1 + 8;
    arg1[0] = 0x50000000;
    arg1[1] = arg2;
    arg1[2] = 0;
    arg1[3] = 0;
    a[3] = 0x6C340010;
    a[0] = 0x30000034;
    a[1] = arg4 & 0x7FFFFFFF;
    a[2] = 0x01000101;
    b[3] = (d / 2) | 0x02000000;
    arg0[3] = (s32)arg1;
    b[0] = 0x60000000;
    b[2] = 0x03000078;
    arg0[0] = (s32)arg1;
    arg0[1] = arg2;
    b[1] = 0;
    return arg1 + 12;
}

s32 func_00175AD8(u32 x) {
    switch (x) {
    case 0: return 0;
    case 1: return 2;
    case 2: return 1;
    default: return 0;
    }
}

u32 func_00175B20(u32 a, u32 b, u32 c) {
    u32 d;
    switch (b) {
    case 0: d = 1; break;
    case 1: d = 2; break;
    case 2: d = 4; break;
    case 3: d = 8; break;
    default: d = 0; break;
    }
    return ((a * c / d) + 31 >> 5) << 5;
}
