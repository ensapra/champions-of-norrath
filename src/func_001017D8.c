s8 D_004844B4;
extern s32 func_00191998();
s32 func_001017D8(u16 *s) {
    s32 n = func_00191998();
    u16 c1;
    if (D_004844B4 == 4) {
        if (s[n - 2] != 0x5F)
            return 0;
        c1 = s[n - 1];
        if (c1 == 0x6D || c1 == 0x4D) {
            s[n - 2] = 0;
            return 1;
        }
        if (c1 == 0x66 || c1 == 0x46) {
            s[n - 2] = 0;
            return 2;
        }
        if (c1 == 0x6E || c1 == 0x4E) {
            s[n - 2] = 0;
            return 3;
        }
        if (c1 == 0x70 || c1 == 0x50) {
            s[n - 2] = 0;
            return 4;
        }
        s[n - 2] = 0;
        return 0;
    }
    if (D_004844B4 == 3) {
        if (s[n - 3] != 0x5F)
            return -1;
        if ((s[n - 2] == 0x6D || s[n - 2] == 0x4D) && (s[n - 1] == 0x73 || s[n - 1] == 0x53)) {
            s[n - 3] = 0;
            return 1;
        }
        if ((s[n - 2] == 0x66 || s[n - 2] == 0x46) && (s[n - 1] == 0x73 || s[n - 1] == 0x53)) {
            s[n - 3] = 0;
            return 2;
        }
        if ((s[n - 2] == 0x6D || s[n - 2] == 0x4D) && (s[n - 1] == 0x70 || s[n - 1] == 0x50)) {
            s[n - 3] = 0;
            return 3;
        }
        if ((s[n - 2] == 0x66 || s[n - 2] == 0x46) && (s[n - 1] == 0x70 || s[n - 1] == 0x50)) {
            s[n - 3] = 0;
            return 4;
        }
        s[n - 3] = 0;
        return 0;
    }
    return 0;
}
