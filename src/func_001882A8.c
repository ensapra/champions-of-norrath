extern char jtbl_004C006C[];
s32 func_001A2850(void *, ...);

s32 func_001882A8(u8 *p) {
    s32 type;
    u8 *q = p;
    if (q[0] == 'T' || q[1] == 'I' || q[2] == 'M' || q[3] == '2') {
        type = 1;
    } else if (q[0] == 'C' || q[1] == 'L' || q[2] == 'T') {
        type = 2;
    } else {
        func_001A2850(jtbl_004C006C + 0xE0E4, q[0], q[1], q[2], q[3]);
        return 0;
    }
    if (q[4] != 3) {
        if (q[4] != 4 || q[5] >= 2) {
            func_001A2850(jtbl_004C006C + 0xE11C);
            return 0;
        }
    }
    return type;
}
