typedef struct {
    u8 pad0[0x98];
    s32 unk98;
    u8 pad9C[0x914 - 0x9C];
    s32 unk914;
    char *unk918;
    void *unk91C;
} S156290_0;

typedef struct {
    u8 pad0[0x924];
    s32 unk924;
    s32 unk928;
} S156290_1;

extern char func_001C8098[];
void func_0011B9E0(void *);
void *func_0016FA70(s32);
void func_00155AE4(S156290_0 *, s32, char *, s32);

s32 func_00156290(S156290_0 *a0, S156290_1 *a1, S156290_1 *a2) {
    s32 ret;
    char *p;
    char *start;
    char *q;
    s32 i;

    ret = (*(s32 (**)(void))(func_001C8098 + 0xDB8))();
    if (a1->unk924 != a2->unk924 && a1->unk924 != 0) {
        if (a0->unk918) {
            func_0011B9E0(a0->unk918);
        }
        p = func_0016FA70(a1->unk924);
        a0->unk914 = 0;
        a0->unk918 = p;
        if (p) {
            start = p;
            q = start;
            if (*q) {
                do {
                    if (*q == '\n') {
                        func_00155AE4(a0, a0->unk914, start, q - start);
                        a0->unk914++;
                        start = q + 1;
                    }
                    q++;
                    if (*q == 0) break;
                } while (a0->unk914 < 40);
            }
            if (a0->unk914 < 40 && q != start) {
                func_00155AE4(a0, a0->unk914, start, q - start);
                a0->unk914++;
            }
        }
        for (i = a0->unk914; i < 40; i++) {
            func_00155AE4(a0, i, 0, 0);
        }
        a0->unk98 = 2;
        ret = 1;
    }
    if (a1->unk928 != a2->unk928 && a1->unk928 != 0) {
        if (a0->unk91C) {
            func_0011B9E0(a0->unk91C);
        }
        a0->unk91C = func_0016FA70(a1->unk928);
        a0->unk98 = 2;
        ret = 1;
    }
    return ret;
}
