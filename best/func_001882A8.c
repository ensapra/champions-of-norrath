extern char jtbl_004C006C[];
s32 func_001A2850(void *, ...);

s32 func_001882A8(u8 *p) {
    s32 type;
    if (p[0] == 'T' || p[1] == 'I' || p[2] == 'M' || p[3] == '2') {
        type = 1;
    } else if (p[0] == 'C' || p[1] == 'L' || p[2] == 'T') {
        type = 2;
    } else {
        func_001A2850(jtbl_004C006C + 0xE0E4, p[0], p[1], p[2], p[3]);
        return 0;
    }
    if (p[4] == 3) return type;
    if (p[4] == 4 && p[5] < 2) return type;
    func_001A2850(jtbl_004C006C + 0xE11C);
    return 0;
}
