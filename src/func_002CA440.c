s32 func_002CB4A0(void *, u8 *);
extern u8 D_008D86A0[];
s32 D_004844A8;
s32 D_004865C8;
s32 D_004865CC;
s32 D_004865D0;

s32 func_002CA440(void) {
    u8 sp[4];
    s32 c;
    if (D_004865C8 != 0)
        D_004865CC += 1;
    while (1) {
        if (func_002CB4A0(D_008D86A0, sp) == 0) {
            if (D_004865CC >= 0x1F && D_004865C8 != 0) {
                s32 t = D_004844A8;
                if (D_004865D0 != t) {
                    D_004865D0 = t;
                    return D_004865C8;
                }
            }
            return -1;
        }
        c = sp[0];
        switch (c) {
        case 0x7B: c = 0x5B; break;
        case 0x7D: c = 0x5D; break;
        case 0x5B: c = 0x8A; break;
        case 0x5D: c = 0x8B; break;
        case 0x7E: c = 0x60; break;
        case 0x60: c = 0x27; break;
        case 0x7C: c = 0x8C; break;
        case 0x13: c = -1; break;
        case 0x14: c = -1; break;
        case 0x15: c = -1; break;
        case 0x16: c = -1; break;
        case 0x17: c = -1; break;
        case 0x18: c = -1; break;
        case 0x19: c = -1; break;
        }
        if (sp[1] == 0) {
            if (c == D_004865C8)
                D_004865C8 = 0;
            continue;
        }
        D_004865CC = 0;
        D_004865C8 = c;
        return c;
    }
}
