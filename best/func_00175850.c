void *func_00175850(s32 *arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 d = 0x388 - arg3;
    s32 *q;
    arg1[0] = 0x50000000;
    arg1[1] = arg2;
    arg1[2] = 0;
    arg1[3] = 0;
    q = arg1 + 4;
    q[3] = 0x6C340010;
    q[1] = arg4 & 0x7FFFFFFF;
    q[2] = 0x01000101;
    q[0] = 0x30000034;
    q = arg1 + 8;
    q[3] = (d / 2) | 0x02000000;
    arg0[3] = arg1;
    q[0] = 0x60000000;
    arg0[0] = arg1;
    arg0[1] = arg2;
    q[2] = 0x03000078;
    q[1] = 0;
    return arg1 + 12;
}
