typedef struct { s8 f0; s8 f1; s8 f2; s8 p[6]; s8 f9; } Sub;
typedef struct { char data[0x27C]; } Tab;
extern s8 D_00438910[];
extern Tab D_00437038[];
extern s32 D_00484538;
extern s32 D_00485EC0;
void func_001A1630(s32, s8, void *, s8, s8, s8, s8, void *);

void func_00279E38(void) {
    s32 j, k, i;
    if (D_00485EC0 != 0) {
        i = 0;
        if (D_00484538 > 0) {
            s8 *b = D_00438910;
            s8 *a1 = b + 1;
            s8 *p25 = b + 0x25;
            j = 0;
            k = j + 0x20;
            do {
                s8 *e = b + k;
                Tab *tt = &D_00437038[e[0]];
                Sub *t = (Sub *)((char *)tt + 0x10);
                s32 sel = a1[k];
                s32 x = t->f9;
                s32 y = t->f2;
                if ((x ^ y) == 0) sel = -1;
                func_001A1630(i, t->f0, b + j, sel, e[2], e[4], e[3], p25 + j);
                i++;
                j += 0x29;
                k = j + 0x20;
            } while (i < D_00484538);
        }
        D_00485EC0 = 0;
    }
}
