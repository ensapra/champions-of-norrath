extern s32 D_001C4D78[], D_001C4D7C[], D_001C4D84[], D_001C4D88[], D_010CB078[], D_010CB0B8[];
extern s32 D_001BB6C4[];
extern char D_001C6840[];
extern char func_00128FA0[], func_00129460[], func_001292B0[], func_0013CBA0[], func_0013CC88[], func_0013CEF0[];
s32 func_0011BA18(s32);
void func_00114948(s32, s32, s32, s32, void *, s32);
void func_00118140(void *, s32, void *, void *, void *);
void func_00118160(void *);
void func_0013CB70(void);
void func_0013CB90(s32);

s32 func_00129630(void) {
    struct { s32 a; s32 b; void *cb; s32 pad[5]; } buf;
    s32 r;
    s32 ret = 0;
    if (D_001C4D88[0] == 0) return ret;
    switch (D_001C4D84[0]) {
    case 0:
        if (D_010CB0B8[0] < 0 || D_010CB078[0] < 0 || !(D_010CB078[0] & 0x20)) {
            r = func_0011BA18(D_001C4D78[0] + 0x85);
            func_00114948(2, 0x1F4, 0xFA, r, func_00128FA0, D_001BB6C4[0]);
            return 1;
        }
        D_001C4D84[0] = 1;
        break;
    case 1:
        if (*(s32 *)(D_001C6840 + D_001C4D7C[0] * 12) == 2) {
            r = func_0011BA18(D_001C4D7C[0] + 0x3D);
            func_00114948(1, 0x1F4, 0xFA, r, func_00129460, D_001BB6C4[0]);
            return 1;
        }
        D_001C4D84[0] = 2;
        break;
    case 2:
        func_0013CB70();
        func_0013CB90(D_001C4D7C[0]);
        func_00118140(&buf, 1, func_0013CBA0, func_0013CC88, func_0013CEF0);
        buf.cb = func_001292B0;
        func_00118160(&buf);
        return 1;
    }
    return 0;
}
