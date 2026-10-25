s8 D_004844B4;
s32 D_0048698C;
s32 func_00172AB8(s32, u8 *, s32);
void func_00173958(s32, s32, u8 *, s32);
void func_00191868(u8 *, u8 *);

s32 func_001740C0(s32 arg0, s32 arg1, u8 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    u8 buf1[0x800];
    u8 buf2[0x800];
    s32 w = 0;
    s32 y = arg1;
    u8 *start = arg2;
    u8 *p = start;
    u8 *q;
    u8 c4, c5, d;
    s8 t;
    s32 len, nw;
    s32 sp1000, sp1004, sp1008, sp100C;

    c5 = *start;
    sp1000 = arg0;
    c4 = c5;
    sp1004 = arg3;
    sp1008 = arg6;
    sp100C = y;
    while (c4 != 0) {
        if (D_004844B4 == 5) {
            if ((s8)c4) q = p + 1; else q = p;
        } else {
            q = p;
            if ((s8)c5 != 0 && (s8)c5 != 0x20 && (s8)c5 != 0xA) {
                for (;;) {
                    q++;
                    t = *q;
                    d = *q;
                    if (t == 0 || t == 0x20 || t == 0xA) break;
                }
            } else {
                d = *p;
            }
            if ((s8)d == 0x20) q++;
        }
        len = func_00172AB8(D_0048698C, p, q - p);
        nw = w + len;
        if (nw >= sp1004) {
            if (arg4 < y && y < arg5) {
                s32 n = p - start;
                s32 x = sp1000 - (func_00172AB8(D_0048698C, start, n) >> 1);
                func_00191868(buf1, start);
                func_00173958(x, y, buf1, n);
            }
            start = p;
            nw = len;
            y += sp1008;
        }
        w = nw;
        if ((s8)*q == 0xA) {
            w = nw + 1000000;
            q++;
        }
        p = q;
        c4 = *p;
        c5 = c4;
    }
    if (start < p) {
        if (arg4 < y && y < arg5) {
            s32 n = p - start;
            s32 x = sp1000 - (func_00172AB8(D_0048698C, start, n) >> 1);
            func_00191868(buf2, start);
            func_00173958(x, y, buf2, n);
        }
        y += sp1008;
    }
    return y - sp100C;
}
