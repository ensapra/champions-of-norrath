typedef struct { s32 a, b, c, d; } T;
extern s32 D_010CD348[];
extern s32 D_010CD34C[];
extern s32 D_010CD358[];
extern s32 D_010CD360[];
extern s32 D_010CD368[];
extern s32 D_001C4DF4[];
extern u32 D_001C6810[];
extern s32 D_001BB6C4[];
extern s32 D_001BB720[];
extern s32 D_004CA320[];
s32 func_00106C78(s32, s32, s32);
s32 func_0010B378(s32, void *);
s32 func_0010C7E8(s32, s32, s32, s32);
s32 func_0010DE10(s32, s32);
s32 func_0010F6B0(s32, void *, s32);
s32 func_0010FB78(s32, void *, s32);
s32 func_001104A8(s32, s32, s32);
s32 func_001105B0(s32, void *);
s32 func_0011BA18(s32);
s32 func_0014CD0C(s32, s32, void *, s32);
void func_00138990(s32);
void func_0012BBC0(void);
void func_0012BC88(void);
void func_0012BCD8(void);
void func_0012BEE0(void);

s32 func_0012B888(s32 *arg) {
    s32 i, a, b, x;
    s32 *p;
    T t;
    switch (arg[4]) {
    case 1:
        D_010CD34C[0] = func_001104A8(D_010CD348[0], 0x6A, 3);
        return 0;
    case 2:
        t.a = 0x78;
        t.c = 0x1A4;
        t.d = 0x16;
        p = D_010CD358;
        for (i = 0, x = 0x2D; i < 2; ) {
            t.b = x;
            a = func_0011BA18(0xEC + i);
            i++;
            *p++ = func_0010F6B0(D_010CD348[0], &t, a);
            x += 0x16;
        }
        return 0;
    case 3:
        t.c = 0x17C;
        t.d = 0x19;
        t.a = 0;
        x = 0;
        for (i = 0; i < 2; i++) {
            t.b = x;
            D_010CD360[i] = func_001105B0(D_010CD34C[0], &t);
            x += 0x19;
            t.b = 0;
            a = func_0011BA18(0xEE + i);
            D_010CD368[i] = func_0010FB78(D_010CD360[i], &t, a);
            func_0014CD0C(D_010CD368[i], 0x58, (void *)func_0012BBC0, i);
            func_0014CD0C(D_010CD368[i], 6, (void *)func_0012BCD8, i);
            func_0014CD0C(D_010CD368[i], 7, (void *)func_0012BC88, i);
            func_0010DE10(D_010CD368[i], func_0011BA18(0xF0 + i));
        }
        return 0;
    case 4:
        func_0012BEE0();
        return 0;
    case 5:
        p = D_010CD360;
        i = 1;
        do {
            func_0010B378(*p++, D_004CA320);
        } while (--i >= 0);
        D_001C4DF4[0] = ((D_001C6810[0] & 0xFFFF00) == 0x10100) ? 0 : 1;
        func_0010B378(D_010CD360[D_001C4DF4[0]], D_001BB720);
        a = func_0011BA18(2);
        b = func_0011BA18(3);
        func_0010C7E8(0, a, b, 0);
        func_0012BEE0();
        p = D_010CD368;
        i = 1;
        do {
            func_00106C78(0, *p++, 0);
        } while (--i >= 0);
        x = D_010CD368[D_001C4DF4[0]];
        D_001BB6C4[0] = x;
        func_00138990(x);
        return 1;
    default:
        return 0;
    }
}
