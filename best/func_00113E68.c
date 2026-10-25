extern s32 D_010C2AC8[], D_010C2ACC[], D_010C2AD0[], D_010C2B04[], D_010C2B10[], D_010C2B14[], D_010C2B18[], D_010C2B1C[];
extern s32 D_001BD944[], D_001BD948[];
void func_0014CE44(s32, s32, s32);
void func_0014CE84(s32, s32 *, s32 *);
void func_0014CF30(s32, s32 *, s32 *);

void func_00113E68(s32 arg0, s32 arg1, s32 *arg2) {
    s32 sp[4];
    s32 w, a, b, c, t, v, d, e, h, n;
    if (*D_010C2B14) {
        w = *D_010C2AD0 - *D_010C2ACC;
        func_0014CE84(arg0, &sp[0], &sp[1]);
        func_0014CF30(arg0, &sp[2], &sp[3]);
        n = D_001BD948[3];
        a = *D_010C2AC8;
        if (a < n) {
            c = (arg2[2] >> 4) - *D_010C2B18;
            b = *D_010C2ACC;
            h = sp[1];
            sp[1] = c;
            if (c < b) {
                sp[1] = b;
                c = b;
            }
            if (*D_010C2AD0 < c + sp[3]) {
                c = *D_010C2AD0 - sp[3];
                sp[1] = c;
            }
            if (c != h) {
                func_0014CE44(arg0, sp[0], c);
                b = *D_010C2ACC;
                n = D_001BD948[3];
                a = *D_010C2AC8;
                c = sp[1];
            }
            h = w * a / n;
            d = *D_001BD944;
            v = *D_010C2B04 * d - (c - b) * ((n - a) * d) / (w - (h >= 5 ? h : 5));
            *D_010C2B1C = v;
            if (v > 0)
                e = v + d / 2;
            else
                e = v - d / 2;
            *D_010C2B1C = e / d * d;
            *D_010C2B10 = 1;
        }
    }
}
