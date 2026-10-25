typedef struct Ops {
    u8 p0[0x98];
    s32 *(*f98)(void);
    void (*f9C)(s32, s32 *, s32 *, s32 *);
    u8 pA0[8];
    s32 (*fA8)(void);
    s32 (*fAC)(s32 *);
    u8 pB0[0x34];
    s32 (*fE4)(s32);
    s32 (*fE8)(s32);
    s32 (*fEC)(s32);
    s32 (*fF0)(s32);
} Ops;
extern Ops *D_010F4530[];
extern void func_001A24AC(s32 *, s32 *, s32);
extern void func_00187B70(s32, s32 *, s32, s32);

void func_00187858(s32 arg0, s32 *a1)
{
    s32 box1[4], box2[4], dst[1024], buf[1024];
    s32 x0, y0, w0, h0, sx, sy, sw, sh;
    s32 n, r, t;
    s32 *str, *p;
    s32 a, b, c, d;

    x0 = a1[4] + D_010F4530[0]->fE8(16);
    sx = x0 >> 4;
    t = D_010F4530[0]->fE4(16);
    y0 = a1[5] + t;
    sy = y0 >> 4;
    w0 = a1[6] - D_010F4530[0]->fE8(32);
    sw = w0 >> 4;
    h0 = a1[7] - D_010F4530[0]->fE4(32);
    sh = (h0 >> 4) + 10;
    n = D_010F4530[0]->fA8();
    str = D_010F4530[0]->f98();
    box2[1] = sy; box2[2] = sw; box2[3] = sh;
    box1[0] = x0; box1[1] = y0; box1[2] = w0; box1[3] = h0;
    box2[0] = sx;
    r = D_010F4530[0]->fF0(x0);
    a = D_010F4530[0]->fEC(y0);
    b = D_010F4530[0]->fF0(w0);
    c = D_010F4530[0]->fEC(h0);
    if (a1[0xAB] < x0 + 0x200) {
        a1[0xAA] -= 0x7D0;
        if (a1[0xAA] < 0)
            a1[0xAA] = 0;
    } else if (x0 + w0 - 0x200 < a1[0xAC]) {
        if (!(a1[0xAB] - 0x7D0 < x0))
            a1[0xAA] += 0x7D0;
    }
    d = D_010F4530[0]->fF0(a1[0xAA]);
    box1[1] = a; box1[2] = b; box1[0] = r - d; box1[3] = c;
    if (a1[0xC0] != 0) {
        s32 j = 0;
        if (str[0]) {
            s32 *q = buf;
            do {
                *q = 0x2A;
                j += 4;
                q++;
            } while (*(s32 *)((u8 *)str + j));
        }
        *(s32 *)((u8 *)buf + j) = 0;
        D_010F4530[0]->f9C(arg0, buf, box2, box1);
        p = buf;
    } else {
        D_010F4530[0]->f9C(arg0, str, box2, box1);
        p = str;
    }
    func_001A24AC(dst, p, n * 4);
    dst[n] = 0;
    t = x0 + D_010F4530[0]->fAC(dst);
    func_00187B70(arg0, a1, t - a1[0xAA], y0);
    t -= a1[0xAA];
    a1[0xAB] = t;
    a1[0xAC] = t;
}
