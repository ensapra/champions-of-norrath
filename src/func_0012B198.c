extern s32 D_0048385C;
extern s32 D_00483844;
extern s32 D_0048440C;
extern u8 D_004E2280[];
extern void func_0012B250(s32, s32);
extern void func_00191180(void);

void func_0012B198(void) {
    s32 n = 0;
    s32 found;
    s32 i;
    s32 cnt;
    s8 *p;
    u8 *base = D_004E2280;
    s32 one = 1;
    D_0048440C = 3;
    for (;;) {
        found = 0;
        cnt = D_0048385C;
        if (cnt > 0) {
            i = cnt;
            one = 1;
            p = (s8 *)(base + 0x44D0 + (one - 1));
            do {
                if (p[4] == 0 && p[5] == 0) {
                    if (*(s32 *)(p - 0x10) < D_00483844)
                        found = one;
                }
                i--;
                p += 0x44E0;
            } while (i != 0);
        }
        if (found == 0 || n++ >= 0x79)
            return;
        func_0012B250(1, 1);
        func_00191180();
    }
}
