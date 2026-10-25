extern u32 func_001769F8();
extern u32 func_00178E40();
extern s32 func_00178D20();
extern u8 D_001D02E0[];

#define W(p, o) (*(s32 *)((u8 *)(p) + (o)))

s32 func_00176B78(u8 *o, u32 x, s32 a2, u8 *a3) {
    s32 sp[3];
    u32 q, p;
    s32 cnt, i, ret, v;
    u8 *P;

    q = (((0x388 - x) >> 1) - 5) / 7;
    q = q - (s32)q % 3;
    if (a3 == 0)
        v = W(o, 0);
    else
        v = W(a3, 0xC);
    P = *(u8 **)(o + 0xC);
    ret = 0xA;
    sp[0] = W(P, 0);
    sp[2] = W(P, 8) - v * 2 - 1;
    sp[1] = W(P, 4);
    if (sp[2] >= 0) {
        i = 0;
        if (W(o, 0) > 0) {
            do {
                u8 *e = *(u8 **)(o + 4) + i * 0x60;
                i++;
                W(e, 0x5C) = sp[1];
                sp[1] = func_001769F8(e, sp[1], q, a2);
            } while (i < W(o, 0));
        }
        if (func_00178D20(sp) >= 0) {
            W(o, 8) = sp[1];
            p = sp[1];
            if (a3 == 0) {
                i = 0;
                if (W(o, 0) > 0) {
                    do {
                        W(p, 0) = 0x30000008;
                        i++;
                        W(p, 4) = (s32)D_001D02E0 & 0x7FFFFFFF;
                        W(p, 8) = 0x01000101;
                        W(p, 0xC) = 0x6C080000;
                        p = func_00178E40(p + 0x10, W(*(u8 **)(o + 4) + (i - 1) * 0x60, 0x5C));
                    } while (i < W(o, 0));
                }
            } else {
                a3 += 0x10;
                if (v > 0) {
                    cnt = v;
                    do {
                        s32 id = W(a3, 0xC);
                        s32 addr;
                        a3 += 0x10;
                        addr = (s32)a3 & 0x7FFFFFFF;
                        a3 += 0x80;
                        if (id != -1) {
                            W(p, 4) = addr;
                            W(p, 0) = 0x30000008;
                            W(p, 8) = 0x01000101;
                            W(p, 0xC) = 0x6C080000;
                            p = func_00178E40(p + 0x10, W(*(u8 **)(o + 4) + id * 0x60, 0x5C));
                        }
                        cnt--;
                    } while (cnt != 0);
                }
            }
            P = *(u8 **)(o + 0xC);
            W(p, 0) = 0x60000000;
            W(p, 4) = 0;
            W(p, 8) = 0;
            W(p, 0xC) = 0;
            p += 0x10;
            W(P, 4) = p;
            ret = func_00178D20(P, p);
            return ret < 0 ? 0xA : 0;
        }
        return 0xA;
    }
    return ret;
}
