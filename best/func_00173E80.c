s32 func_00173140(s32, u16 *, s32);
void func_00173958(s32, s32, u16 *, s32);
s8 D_004844B4;
s32 D_0048698C;

s32 func_00173E80(s32 x, s32 y, u16 *str, s32 maxw, s32 ymin, s32 ymax, s32 lineh) {
    s32 y0 = y;
    u16 *start = str;
    u16 *cur = str;
    u16 *end;
    s32 acc, w, tot, n, t;
    u16 c;
    c = *cur;
    if (c != 0) {
        acc = 0;
        do {
            if (D_004844B4 == 5) {
                end = (c & 0xFFFF) ? cur + 1 : cur;
            } else {
                end = cur;
                if (c != 0 && c != 0x20 && c != 0xA) {
                    end++;
                    while (*end != 0 && *end != 0x20 && *end != 0xA) end++;
                    t = *end ^ 0x20;
                } else {
                    t = *cur ^ 0x20;
                }
                if (t == 0) end++;
            }
            w = func_00173140(D_0048698C, cur, end - cur);
            tot = acc + w;
            if (tot >= maxw) {
                if (ymin < y && y < ymax) {
                    n = cur - start;
                    func_00173958(x - (func_00173140(D_0048698C, start, n) >> 1), y, start, n);
                }
                start = cur;
                tot = w;
                y += lineh;
            }
            acc = tot;
            if (*end == 0xA) {
                acc = tot + 1000000;
                end++;
            }
            cur = end;
            c = *cur;
        } while (c != 0);
    }
    if (start < cur) {
        if (ymin < y && y < ymax) {
            n = cur - start;
            func_00173958(x - (func_00173140(D_0048698C, start, n) >> 1), y, start, n);
        }
        y += lineh;
    }
    return y - y0;
}
