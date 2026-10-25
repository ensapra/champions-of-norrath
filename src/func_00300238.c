s32 func_00300238(s32 *err, char *mode, s32 *out) {
    s32 acc, r, f;
    switch (mode[0]) {
    case 'r': r = 4; acc = 0; f = 0; break;
    case 'w': r = 8; acc = 1; f = 0x600; break;
    case 'a': r = 0x108; acc = 1; f = 0x208; break;
    default: *err = 0x16; return 0;
    }
    if (mode[1] != 0) {
        if (mode[1] == '+' || mode[2] == '+') {
            r = 0x10;
            acc = 2;
        }
    }
    *out = acc | f;
    return r;
}
