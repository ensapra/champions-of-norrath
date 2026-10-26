typedef struct { char c[4]; } T4;
typedef struct Disp {
    int pad0; int w; int h; char pad[0xD4];
    int (*fE0)();
    int (*fE4)(int);
    int (*fE8)(int);
    int (*fEC)(int);
    int (*fF0)(int);
} Disp;
extern int D_00480488;
#define D ((Disp *)D_00480488)

int func_0019A5E8(char *a, int *b) {
    int i, j, idx, w, x, y, p16, p17, t23, s18;
    int sp10, sp14, sp18, sp1C, sp20, sp24, sp28;
    int s21;
    i = 0;
    s21 = D->w;
    sp28 = 0;
    sp10 = D->h;
    sp14 = D->fE8(s21);
    sp18 = D->fE4(D->h);
    sp1C = D->fF0(*(int *)(a + 0x84)) + 0x20;
    sp20 = D->fEC(*(int *)(a + 0x88));
    sp20 += D->fEC(9);
    sp24 = D->fE8(b[0]);
    t23 = D->fE4(b[1]);
    s18 = sp1C;
    do {
        j = 0;
        do {
            char *e;
            idx = i * 16 + j;
            j++;
            e = a + idx * 8 + 0xA80;
            x = D->fE0(sp28 + sp20, sp20, *(T4 *)(e + 8));
            w = *(int *)(e + 0xC);
            p16 = s18 + ((s21 - w) >> 1);
            s18 += s21;
            y = (x + D->fE0(8)) * 16;
            p16 = D->fE8(p16);
            y += D->fE4(1);
            if (!(sp24 < p16) && !(t23 < y) && sp24 < p16 + sp14 && t23 < y + sp18)
                return idx;
        } while (j < 16);
        sp28 += sp10;
        s18 = sp1C;
        i++;
    } while (i < 8);
    return -1;
}
