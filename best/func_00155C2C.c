typedef struct I {
    char pad[0x990];
    void *items[1];
} I;
typedef struct W {
    char p00[0xC];
    char p0[0x5A0-0xC];
    s32 x5A0, x5A4;
    char p1[0x5B0-0x5A8];
    s32 x5B0;
    char p2[0x5D4-0x5B4];
    s32 x5D4;
    char p3[0x914-0x5D8];
    s32 cnt;
    char p4[0x920-0x918];
    s32 x920;
    char p5[0x92C-0x924];
    s32 x92C;
    char p6[0x934-0x930];
    s32 x934;
    char p7[0x93C-0x938];
    s32 x93C, x940, x944, x948;
    char p8[0x954-0x94C];
    s32 x954;
} W;
void func_0014CE60(void *, s32, s32);
void func_0014CF78(void *, s32 *, s32 *);
#define IN(w) ((I *)((char *)(w) + 0xC))

void func_00155C2C(W *w) {
    s32 sp[8];
    s32 i, x, y, m, xx, w2;
    s32 n = w->cnt;
    if (w->x954 == 0) {
        if (w->x92C == 0) {
            i = 0;
            x = w->x5A0 + w->x934 + (w->x944 + w->x5D4);
            y = w->x5A4 + w->x93C + (w->x948 + w->x5D4);
            if (n > 0) do {
                if (IN(w)->items[i]) {
                    func_0014CE60(IN(w)->items[i], x, y);
                    func_0014CF78(IN(w)->items[i], &sp[0], &sp[1]);
                    y += sp[1] + w->x920;
                }
                i++;
            } while (i < w->cnt);
        } else {
            m = 0;
            i = 0;
            if (n > 0) do {
                if (IN(w)->items[i]) {
                    func_0014CF78(IN(w)->items[i], &sp[2], &sp[3]);
                    if (m < sp[2]) m = sp[2];
                }
                i++;
            } while (i < w->cnt);
            x = w->x5A0 + w->x934 + (w->x944 + w->x5D4);
            y = w->x5A4 + w->x93C + (w->x948 + w->x5D4);
            i = 0;
            if (w->cnt > 0) do {
                if (IN(w)->items[i]) {
                    func_0014CF78(IN(w)->items[i], &sp[4], &sp[5]);
                    if (w->x92C == 1) xx = (m - sp[4]) >> 1;
                    else xx = m - sp[4];
                    func_0014CE60(IN(w)->items[i], x + xx, y);
                    func_0014CF78(IN(w)->items[i], &sp[4], &sp[5]);
                    y += sp[5] + w->x920;
                }
                i++;
            } while (i < w->cnt);
        }
    } else {
        s32 a = w->x948, b = w->x93C;
        x = w->x5A0 + w->x944 + (w->x934 + w->x5D4);
        y = w->x5A4 + a + (b + w->x5D4);
        w2 = (w->x5B0 - (b + w->x940 + a * 2)) + w->x920;
        m = 0;
        i = 0;
        if (n > 0) do {
            if (IN(w)->items[i]) {
                func_0014CE60(IN(w)->items[i], x, y + m / w->cnt);
            }
            i++;
            m += w2;
        } while (i < w->cnt);
    }
}
