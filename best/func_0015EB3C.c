typedef struct { u8 pad[0x20]; s16 x, y; u8 pad2[0xC]; } Vtx;
extern void func_0015EDAC(u8 *);

#define I(p, o) (*(s32 *)((u8 *)(p) + (o)))

void func_0015EB3C(u8 *a) {
    u8 *base = a + 0x910;
    Vtx *v = (Vtx *)(base + I(a, 0x4EC) * 0x170 + 0x320);
    s32 hh = I(a, 0x5B0) >> 1;
    s32 hw = I(a, 0x5AC) >> 1;
    s32 cx = I(a, 0x5A0) + I(a, 0x5D4) + hw + I(a, 0x4DC);
    s32 cy = I(a, 0x5A4) + I(a, 0x5D4) + hh + I(a, 0x4E0);
    s32 ratio = hh * 2;

    if (ratio > 0) {
        s32 ox, mode, m;
        s32 dx, dy;
        s32 x0, x1, y0, y1;

        ratio = hw * 2000 / ratio;
        ox = cx + I(base, 0x58C);
        cy += I(base, 0x590);
        mode = I(base, 0x594);
        m = I(base, 0x588);
        cx = I(base, 0x570);

        switch (mode) {
        case 0:
        case 2:
            m *= 16;
            if (cx >= ratio) {
                dx = hw - m;
                dy = dx * 1000 / cx;
            } else {
                dy = hh - m;
                dx = dy * cx / 1000;
            }
            break;
        case 1:
        default:
            cx = 1000000 / cx;
            m *= 16;
            if (cx >= ratio) {
                dx = hw - m;
                dy = dx * 1000 / cx;
            } else {
                dy = hh - m;
                dx = dy * cx / 1000;
            }
            break;
        }
        y1 = cy + dy;
        x1 = ox + dx;
        x0 = ox - dx;
        y0 = cy - dy;
        switch (mode) {
        case 0:
            v[0].x = x0; v[0].y = y0;
            v[1].x = x0; v[1].y = y1;
            v[2].x = x1; v[2].y = y0;
            v[3].x = x1; v[3].y = y1;
            break;
        case 1:
            v[2].x = x0; v[2].y = y0;
            v[0].x = x0; v[0].y = y1;
            v[3].x = x1; v[3].y = y0;
            v[1].x = x1; v[1].y = y1;
            break;
        case 2:
            v[3].x = x0; v[3].y = y0;
            v[2].x = x0; v[2].y = y1;
            v[1].x = x1; v[1].y = y0;
            v[0].x = x1; v[0].y = y1;
            break;
        default:
            v[1].x = x0; v[1].y = y0;
            v[3].x = x0; v[3].y = y1;
            v[0].x = x1; v[0].y = y0;
            v[2].x = x1; v[2].y = y1;
            break;
        }
    } else {
        v[0].x = cx; v[0].y = cy;
        v[1].x = cx; v[1].y = cy;
        v[2].x = cx; v[2].y = cy;
        v[3].x = cx; v[3].y = cy;
    }
    func_0015EDAC(a);
}
