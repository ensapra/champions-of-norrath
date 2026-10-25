typedef struct { u8 pad[0x10]; s16 x, y; u8 pad2[0xC]; } V;
extern f32 func_0014C97C(s32);
extern f32 func_0014CA18(s32);
extern s32 func_00171000(f32);
extern s32 func_0019CE10(s32, s32);
extern s32 func_00171040(s32, s64);
extern s32 func_001712C8(s32, s64);
extern s32 func_00171408(s32);
extern s64 D_004CBA48[];

#define I(p, o) (*(s32 *)((u8 *)(p) + (o)))
#define U(p, o) (*(u16 *)((u8 *)(p) + (o)))

void func_0016670C(u8 *o) {
    s32 s[5];
    s32 cx, cy;
    s32 t, ang;
    V *p1, *p2, *p3, *p4;
    u8 *base;

    s[4] = 0;
    s[0] = I(o, 0x2870);
    s[1] = I(o, 0x2878);
    cx = I(o, 0x2874);
    cy = I(o, 0x287C);
    s[2] = I(o, 0x920) / 4;
    s[3] = I(o, 0x920) / 2;

    base = o + I(o, 0x4EC) * 0xF80;
    t = func_00171000((f32)(s[0] - s[1]));
    p1 = (V *)(base + 0xAF0);
    p2 = (V *)(base + 0x11F0);
    p3 = (V *)(base + 0xD60);
    p4 = (V *)(base + 0x1460);
    t = func_00171408(func_001712C8(func_00171040(func_0019CE10(t, func_00171000((f32)(cy - cx))), (s64)0x81C0 << 47), D_004CBA48[0]));
    p1->x = U(o, 0x4DC) + s[0];
    p1->y = U(o, 0x4E0) + cx;
    p2->y = U(o, 0x4E0) + cy;
    p2->x = U(o, 0x4DC) + s[1];
    p1 = (V *)(base + 0xB10);
    p2 = (V *)(base + 0x1210);
    do {
        s32 A, B, C, D, X, Y, xa, xb, ya, yb;
        f32 sn, cs;
        ang = t + (s[4] << 15) / 17;
        s[4]++;
        sn = func_0014C97C(ang);
        cs = func_0014CA18(ang);
        A = (s32)(s[2] * sn);
        B = (s32)(s[2] * cs);
        C = (s32)(s[3] * sn);
        D = (s32)(s[3] * cs);
        X = U(o, 0x4DC);
        Y = U(o, 0x4E0);
        xa = X + s[1] + B;
        xb = X + s[0] - B;
        ya = Y + (cx - A);
        yb = Y + (cy + A);
        p1->x = xb; p1->y = ya; p1++;
        p2->x = xa; p2->y = yb; p2++;
        p3->x = xb; p3->y = ya; p3++;
        p4->x = xa; p4->y = yb; p4++;
        p3->x = X + s[0] - D; p3->y = Y + (cx - C); p3++;
        p4->x = X + s[1] + D; p4->y = Y + (cy + C); p4++;
    } while (s[4] < 18);
}
