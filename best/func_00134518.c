extern char D_010CE038[];
extern char D_004CAD20[];
extern s32 D_001BD764[];
s32 func_0010A5E8(s32, void *, s32);
s32 func_00134020();
s32 func_00134238(s32, s32, s32);
s32 func_00158DC0(s32, void *, s32);
s32 func_001A1640(void *);
s32 func_001A3D78(void *, void *, s32);

s64 func_00134518(s32 a0, s32 a1, s32 *msg) {
    char *p;
    s32 n, t;
    u8 c;
    switch (msg[0]) {
    case 0x13:
        c = *(u8 *)msg[2];
        if ((u8)(c + 0xD0) >= 10) {
            if (c == 9) func_00134238(a0, a1, 0x258);
            msg[1] = 0;
        }
        break;
    case 0x12:
        p = D_010CE038;
        func_0010A5E8(a0, p, 0x258);
        n = func_001A1640(p);
        t = n < 0x5B;
        if (n < 0) n = 0;
        if (!t) n = 0x5A;
        func_001A3D78(p, D_004CAD20, n);
        func_00158DC0(a0, p, 0);
        n = func_001A1640(p);
        D_001BD764[0] = n * 0x3C;
        return func_00134020();
    }
}
