extern char D_0046A700[];
extern char D_0046A710[];
s32 D_00483F30;
s32 D_00484CA4;
s32 func_00165DC0(char *, char *);
void func_00172728(s32, s32, s32, s32, s32, s32, char *, s32, s32);
void func_00172BC8(s32, s32, s32, s32);
void func_00172DC0(s32, s32, s32);
void func_00172F88(void);
s32 func_00173E80(s32, s32, char *, s32, s32, s32, s32);
void func_00174548(s32, s32, char *, s32);

void func_001C6788(char *s0, char *s1, char *s2, s32 alpha, s32 width, s32 h) {
    s32 w, a, b, tot, t17, t23, half, y2, y;
    s32 col;
    s32 r;
    w = width ? width : 0x208;
    if (D_00483F30)
        r = func_00165DC0(D_0046A700, D_0046A710);
    else
        r = D_00484CA4;
    col = alpha << 24;
    func_00172BC8(r, 6, col | 0x323C3C, -1);
    a = 0;
    if (s0 && !h)
        a = func_00173E80(0x140, 0xD4, s0, w - 0x32, 0x64, 0x64, 0x11);
    if (s1)
        b = func_00173E80(0x140, 0xD4, s1, w - 0x32, 0x64, 0x64, 0x11);
    else
        b = 0;
    if (s1 && !h)
        tot = b;
    else
        tot = h;
    tot = a + tot;
    t17 = s2 ? tot + 0x55 : tot + 0x44;
    half = t17 / 2;
    t23 = 0xE1 - half;
    y2 = half + 0xBB;
    if (s0) {
        func_00172DC0(col | 0x1E6464, -1, 0);
        func_00173E80(0x140, t23, s0, w - 0x32, -0x64, 0x244, 0x11);
    }
    if (s1) {
        func_00172DC0(col | 0x323C3C, -1, 0);
        if (!h)
            func_00173E80(0x140, t23 + a + 0x11, s1, w - 0x32, -0x64, 0x244, 0x11);
        else
            func_00173E80(0x140, 0xD4 - b / 2, s1, w - 0x32, -0x64, 0x244, 0x11);
    }
    if (s2) {
        func_00172DC0(col | 0x3C4646, -1, 0);
        func_00174548(0x140, y2, s2, 0xF4240);
    }
    func_00172F88();
    y = 0xDC - t17 / 2;
    func_00172728(0x140 - w / 2, y, w, t17, 6, col | 0x808080, D_0046A700, 0, 0);
}
