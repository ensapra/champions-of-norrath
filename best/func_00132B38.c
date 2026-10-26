extern s32 D_010CD880[];
extern s32 D_010CD888[];
extern s32 D_010CD890[];
extern s32 D_010CD898[];
extern s32 D_010CD8A0[];
extern s32 D_010CD8A8[];
extern s32 D_010CDB18[];
extern s32 func_001C5078[];
extern s32 func_001B9FD8[];
extern s32 func_001BCB38[];
extern s32 jtbl_004C006C[];
#define G3C (func_001C5078[15])
extern char func_00132F20[], func_00132F60[], func_00132FE0[], func_00133368[];
s32 func_0011BA18(s32);
s32 func_0010F6B0(s32, void *, s32);
s32 func_0010F7B8(s32, void *, s32);
s32 func_0010F8E8(s32, void *, s32);
s32 func_001105B0(s32, void *, s32, s32);
void func_00152CB8(s32, s32, void *, f32);
void func_0014CD0C(s32, s32, void *, s32);
void func_001581B0(s32, s32);
void func_00158DC0(s32, void *, s32);
void func_0010DE10(s32, s32);
void func_00106C78(s32, s32, s32);
void func_0010B378(s32, void *);
void func_0010C7E8(s32, s32, s32, s32);
void func_001331B8(void);
void func_00138990(s32);
s32 func_001A444C(void *);

s32 func_00132B38(s32 *arg0) {
    s32 i, j;
    s32 v;
    f32 f[4];
    switch (arg0[4]) {
    case 1: {
        s32 *r = D_010CDB18;
        G3C = 0;
        r[0] = 0x78;
        r[2] = 0x1A4;
        r[3] = 0x16;
        for (i = 0; i < 2; i++) {
            r[1] = 0x2D + i * 0x16;
            D_010CD888[i] = func_0010F6B0(D_010CD880[0], r, func_0011BA18(0x119 + i));
        }
        return 0;
    }
    case 2: {
        s32 *g = &G3C;
        f32 *fp = (f32 *)((char *)func_001B9FD8 + 0x1918);
        v = func_0011BA18(0x11B);
        func_00152CB8(0, v, f, *fp);
        v = (s32)(f[3] - f[2]) >> 4;
        if (*g < v) *g = v;
        *g = *g + 0x34;
        return 0;
    }
    case 3: {
        s32 *r = D_010CDB18;
        s32 *g = &G3C;
        r[3] = 0x1C;
        for (i = 0, j = 0; i <= 0; i++, j++) {
            r[1] = 0x6A + i * 0x24;
            r[0] = 0x60;
            r[2] = 0x19E;
            D_010CD890[i] = func_001105B0(D_010CD880[0], r, 0, 0);
            r[0] = 0;
            r[2] = *g;
            r[1] = 0;
            D_010CD898[i] = func_0010F7B8(D_010CD890[i], r, func_0011BA18(0x11B + i));
            r[0] = *g;
            r[2] = 0x19E - *g;
            D_010CD8A8[i] = func_001105B0(D_010CD890[i], r, 0, 0);
            D_010CD8A0[i] = func_0010F8E8(D_010CD890[i], r, 0xFF);
            func_001581B0(D_010CD8A0[i], 1);
            func_0014CD0C(D_010CD8A0[i], 0x58, func_00132F20, j);
            func_0014CD0C(D_010CD8A0[i], 6, func_00132FE0, j);
            func_0014CD0C(D_010CD8A0[i], 7, func_00132F60, j);
            func_0010DE10(D_010CD8A0[i], func_0011BA18(0x11C + i));
            func_00106C78(0, D_010CD8A0[i], 0);
        }
        func_0014CD0C(D_010CD8A0[0], 0xF6, func_00133368, 0);
        func_0014CD0C(D_010CD8A0[0], 0xF5, func_00133368, 0);
        func_001B9FD8[0x16EC / 4] = D_010CD8A0[0];
        func_00138990(D_010CD8A0[0]);
        return 0;
    }
    case 4:
        func_0010B378(D_010CD8A8[0], (char *)jtbl_004C006C + 0xA944);
        if (func_001A444C((char *)func_001BCB38 + 0xC30) == 0)
            func_00158DC0(D_010CD8A0[0], (char *)jtbl_004C006C + 0xA954, 0);
        else
            func_00158DC0(D_010CD8A0[0], (char *)func_001BCB38 + 0xC30, 0);
        v = func_0011BA18(2);
        func_0010C7E8(0, v, func_0011BA18(3), 0);
        func_001331B8();
        return 1;
    }
    return 0;
}
