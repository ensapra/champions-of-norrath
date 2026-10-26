typedef struct Ent { s32 w[8]; char name[0x20]; } Ent;
extern Ent D_0042E400[];
extern Ent D_007F7D40[];
extern char D_007F7CA0[];
extern char D_008D0C08[];
extern char D_00485AE8[];
s32 D_00485C0C;
s32 D_00485BE8;
s32 func_00305328(char *, char *);
s32 func_002562D8(s32, s32);
void func_00256398(s32, void *, s32);
void func_0025C790(s32, void *, s32, s32);

void func_00256088(void) {
    s32 ids[64];
    s32 i, j, k, n, cnt, t;
    char *pa, *pb;
    cnt = 0;
    for (i = 0; i < D_00485C0C; i++) {
        if (func_00305328(D_0042E400[i].name, D_00485AE8)) {
            for (j = 0; (t = j < cnt) && !func_002562D8(i, ids[j]); j++) ;
            k = cnt;
            if (t) {
                do {
                    ids[k] = ids[k - 1];
                    k--;
                } while (j < k);
            }
            ids[j] = i;
            cnt++;
        }
    }
    if (cnt > 10) cnt = 10;
    i = 0;
    if (cnt > 0) {
        pb = D_007F7CA0;
        pa = D_008D0C08;
        do {
            D_007F7D40[i] = D_0042E400[ids[i]];
            func_0025C790(0, D_007F7D40[i].name, 1, 0);
            func_0025C790(3, pa, 0x70, 0);
            pa += 0x70;
            func_00256398(2, pb, 0);
            pb += 0x10;
            func_0025C790(1, 0, 0, 0);
            i++;
        } while (i < cnt);
    }
    D_00485BE8 = cnt;
}
