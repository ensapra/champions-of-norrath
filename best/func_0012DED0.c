extern s32 D_010CD3D8[];
extern s32 D_010CD3DC[];
extern s32 D_010CD3E8[];
extern s32 D_010CD3F0[];
extern s32 D_010CD3F8[];
extern s32 D_010CD410[];
extern s32 D_001C4E64[];
extern u8 D_001C6815[];
extern s32 D_001BB720[];
extern s32 D_004CA4C0[];
s32 func_00106C78(s32, s32, s32);
s32 func_0010B378(s32, void *);
s32 func_0010C7E8(s32, s32, s32, s32);
s32 func_0010DE10(s32, s32);
s32 func_0010F6B0(s32, void *, s32);
s32 func_0010FB78(s32, void *, s32);
s32 func_001104A8(s32, s32, s32);
s32 func_001105B0(s32, void *);
s32 func_0011BA18(s32);
s32 func_0014CD0C(s32, s32, void *, s64);
void func_0012E200(void);
void func_0012E2B8(void);
void func_0012E308(void);
void func_0012E520(void);

s32 func_0012DED0(s32 *arg) {
    s32 i, a, b;
    s64 j;
    s32 x;
    s32 *p;
    switch (arg[4]) {
    case 1:
        D_010CD3DC[0] = func_001104A8(D_010CD3D8[0], 0x6A, 3);
        return 0;
    case 2:
        D_010CD410[0] = 0x78;
        D_010CD410[2] = 0x1A4;
        D_010CD410[3] = 0x16;
        p = D_010CD3E8;
        for (i = 0, x = 0x2D; i < 2; ) {
            D_010CD410[1] = x;
            x += 0x16;
            a = func_0011BA18(0x103 + i);
            i++;
            *p++ = func_0010F6B0(D_010CD3D8[0], D_010CD410, a);
        }
        return 0;
    case 3:
        D_010CD410[2] = 0x17C;
        D_010CD410[3] = 0x19;
        D_010CD410[0] = 0;
        j = 0;
        x = 0;
        for (i = 0; i < 2; i++) {
            D_010CD410[1] = x;
            D_010CD3F0[i] = func_001105B0(D_010CD3DC[0], D_010CD410);
            x += 0x19;
            D_010CD410[1] = 0;
            a = func_0011BA18(0x105 + i);
            D_010CD3F8[i] = func_0010FB78(D_010CD3F0[i], D_010CD410, a);
            func_0014CD0C(D_010CD3F8[i], 0x58, (void *)func_0012E200, j);
            func_0014CD0C(D_010CD3F8[i], 6, (void *)func_0012E308, j);
            func_0014CD0C(D_010CD3F8[i], 7, (void *)func_0012E2B8, j);
            j++;
            func_0010DE10(D_010CD3F8[i], func_0011BA18(0x107 + i));
        }
        func_0012E520();
        return 0;
    case 4:
        for (i = 0; i < 2; i++) {
            func_0010B378(D_010CD3F0[i], D_004CA4C0);
        }
        return 0;
    case 5:
        D_001C4E64[0] = (D_001C6815[0] == 1) ? 0 : 1;
        func_0010B378(D_010CD3F0[D_001C4E64[0]], D_001BB720);
        return 0;
    case 6:
        a = func_0011BA18(2);
        b = func_0011BA18(3);
        func_0010C7E8(0, a, b, 0);
        return 0;
    case 7:
        i = 1;
        p = D_010CD3F8;
        do {
            func_00106C78(0, *p++, 0);
        } while (--i >= 0);
        return 1;
    default:
        return 0;
    }
}
