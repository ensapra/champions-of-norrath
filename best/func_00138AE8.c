typedef struct { u64 a, b; } Pair138;
typedef struct { s32 cmd; long val; } Msg138;
extern Pair138 D_001BB6E0[];
extern s32 D_001BD8B0[];
extern s32 D_001BD8B4[];
extern s32 D_001C54B4[];
extern u32 D_001C54C0[];
extern s32 D_001C54C4[];
extern s32 D_001C54C8[];
extern s32 D_001C54CC[];
extern s32 D_001C54D0[];
extern s32 D_001C54D4[];
extern s32 D_001C54D8[];
extern s32 D_001C54DC[];
extern s32 D_001C54E0[];
extern s32 D_001C54E4[];
extern s32 D_001C54E8[];
extern u32 D_001C54EC[];
extern s32 D_010CE570[];
void func_0014F544(s32, s32 *);
s32 func_001169E8(void);
void *func_00107A68(void);
void func_0014CF78(void *, s32 *, s32 *);
void ovl_ntgui2_func_00108E58(Pair138 *, Pair138 *, Pair138 *, s32, s32);
s32 func_001A32C8(void);
void func_0014CBF4(s32, Msg138 *, s32);
s64 func_00171000(f32);
s32 func_001799B0(s64, s64);
s64 func_00179A00(s32);
s64 func_0019CE28(s64);
s32 func_00179618(s64);
f32 func_00179530(s32);
int abs(int);

#define PX D_001C54C4[0]
#define PY D_001C54C8[0]
#define PW D_001C54CC[0]
#define PH D_001C54D0[0]
#define TX D_001C54D4[0]
#define TY D_001C54D8[0]
#define VX D_001C54DC[0]
#define VY D_001C54E0[0]
#define AX D_001C54E4[0]
#define AY D_001C54E8[0]
#define CNT D_001C54EC[0]
#define HALF 0x3FE0000000000000LL

void func_00138AE8(s32 a, long b) {
    Pair138 col[2];
    Msg138 m[64];
    s32 buf[4];
    s32 w, h;
    s32 r;
    void *p;

    D_001C54C0[0]++;
    func_0014F544(b, buf);
    D_001BD8B0[0] = buf[1];
    D_001BD8B4[0] = buf[2];
    if ((D_001C54B4[0] & 2) && func_001169E8()) {
        p = func_00107A68();
        if (p != NULL) {
            s32 dx, dy, w0, h0;
            func_0014CF78(p, &w, &h);
            w0 = PW;
            h0 = PH;
            dx = D_001BD8B0[0] - (PX + (w0 >> 1));
            dy = D_001BD8B4[0] - (PY + (h0 >> 1));
            if (dx * dx + dy * dy < 0x1000) {
                if (CNT >= 8) {
                    PX = D_001BD8B0[0] - (w >> 1);
                    PW = w;
                    PY = D_001BD8B4[0] - (h >> 1);
                    PH = h;
                    col[0] = D_001BB6E0[2];
                } else {
                    if (PW < w) {
                        PW = PW + w / 8;
                    }
                    PX = D_001BD8B0[0] - (PW >> 1);
                    if (PH < h) {
                        PH = PH + h / 8;
                    }
                    PY = D_001BD8B4[0] - (PH >> 1);
                    ovl_ntgui2_func_00108E58(&col[0], &D_001BB6E0[1], &D_001BB6E0[2], CNT, 8);
                    CNT++;
                }
            } else {
                dx >>= 1;
                dy >>= 1;
                PH = h0 >> 1;
                PX = PX + (dx + (w0 >> 2));
                PY = PY + (dy + (h0 >> 2));
                CNT = 0;
                PW = w0 >> 1;
                VX = dx;
                VY = dy;
                if ((w0 >> 1) != 0) {
                    col[0] = D_001BB6E0[2];
                } else {
                    col[0] = D_001BB6E0[1];
                }
            }
        } else {
            s32 d;
            if (VX > 0) {
                if (PX > 0x2680) {
                    if (AX > 0) AX--;
                }
            } else if (VX < 0) {
                if (PX < 0x180) {
                    if (AX < 0) AX++;
                }
            } else if (AX == 0) {
                if (PX > 0x1400) AX = -2;
                else AX = 2;
            }
            if (VY > 0) {
                if (PY > 0x1A80) {
                    if (AY > 0) AY--;
                }
            } else if (VY < 0) {
                if (PY < 0x180) {
                    if (AY < 0) AY++;
                }
            } else if (AY == 0) {
                if (PY > 0xE00) AY = -2;
                else AY = 2;
            }
            if (D_001C54C0[0] % 180 == 0) {
                s32 *tx = D_001C54D4;
                s32 *ty = D_001C54D8;
                *tx = func_001A32C8() % 320 + 160;
                *ty = func_001A32C8() % 112 + 168;
            }
            if (D_001C54C0[0] % 120 == 0) {
                s32 ex = TX * 16 - PX;
                s32 ey = TY * 16 - PY;
                if (VX * ex + VY * ey <= 0) {
                    s32 sa = 1, sb = 1;
                    s32 t;
                    f32 f;
                    if (ey != 0) {
                        f = (f32)(abs(ex) / abs(ey));
                    } else {
                        f = 3.0f;
                    }
                    if (f > 2.0f) {
                        sa = 6; sb = 0;
                    } else if (f > 1.0f && f <= 2.0f) {
                        sa = 4; sb = 2;
                    } else if (f == 1.0f) {
                        sb = 3; sa = 3;
                    } else if (func_001799B0(func_00171000(f), HALF) >= 0 && f < 1.0f) {
                        sa = 2; sb = 4;
                    } else if (func_001799B0(func_00171000(f), HALF) < 0) {
                        sa = 0; sb = 6;
                    }
                    t = AX;
                    if (ex != 0) t += ex / abs(ex) * sa;
                    AX = t;
                    t = AY;
                    if (ey != 0) t += ey / abs(ey) * sb;
                    AY = t;
                }
            }
            if (AX > 12) AX = 12;
            else if (AX < -12) AX = -12;
            if (AY > 12) AY = 12;
            else if (AY < -12) AY = -12;
            VX += AX;
            VY += AY;
            d = func_00179618(func_0019CE28(func_00179A00(VX * VX + VY * VY)));
            if (d > 0x40) {
                f32 fx = VX * 64;
                f32 fy;
                f32 fd = func_00179530(d);
                fy = VY * 64;
                VX = fx / fd;
                VY = fy / fd;
            }
            PX += VX;
            PY += VY;
            PW = PW >> 1;
            PH = PH >> 1;
            col[0] = D_001BB6E0[1];
        }
    } else {
        PX = D_001BD8B0[0];
        PW = 0;
        PY = D_001BD8B4[0];
        PH = 0;
        col[0] = D_001BB6E0[1];
    }
    r = abs((s32)((D_001C54C0[0] << 1) & 0x7F) - 0x40);
    m[0].cmd = 9;
    m[0].val = PX - (r >> 1);
    m[1].cmd = 0xB;
    m[1].val = PY - (r >> 1);
    m[2].cmd = 0xE;
    m[2].val = PW + r + 1;
    m[3].cmd = 0x10;
    m[3].val = PH + r + 1;
    m[4].cmd = 0x48;
    m[4].val = r * 16 + 0x140;
    m[5].cmd = 0x64;
    m[5].val = r * 16 + 0x140;
    m[6].cmd = 0x5F;
    m[6].val = r * 16 + 0x140;
    m[7].cmd = 0x61;
    m[7].val = (s32)col;
    m[8].cmd = 0x5C;
    m[8].val = (s32)col;
    func_0014CBF4(D_010CE570[0], m, 9);
}
