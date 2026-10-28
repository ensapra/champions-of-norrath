extern char D_010CE038[];
extern char D_004CAD20[];
extern s32 D_001BD764[];
void func_0010A5E8(s32, void *, s32);
s32 func_00134020(void);
void func_00134238(s32, s32, s32);
void func_00158DC0(s32, void *, s32);
s32 func_001A1640(void *);
void func_001A3D78(void *, void *, s32);

s64 func_00134518(s32 a0, s32 a1, s32 *msg) {
    s32 n;
    u8 c;
    switch (msg[0]) {
    case 0x13:
        c = *(u8 *)msg[2];
        if ((u8)(c - '0') >= 10) {
            if (c == 9) func_00134238(a0, a1, 0x258);
            msg[1] = 0;
        }
        break;
    case 0x12:
        func_0010A5E8(a0, D_010CE038, 0x258);
        n = func_001A1640(D_010CE038);
        if (n > 90) n = 90;
        else if (n < 0) n = 0;
        func_001A3D78(D_010CE038, D_004CAD20, n);
        func_00158DC0(a0, D_010CE038, 0);
        D_001BD764[0] = func_001A1640(D_010CE038) * 60;
        return func_00134020();
    }
}
