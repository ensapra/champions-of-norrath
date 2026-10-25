extern s32 D_0042CE10[];
extern f32 D_004857A0[];
extern char D_007D7AF0[];
void func_00180D78(char *, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, s32, s32, s32, s32, s32);
void func_00194300(s32 *);

void func_0022B440(s32 init, s32 prio) {
    if (prio == 0xFFFF) {
        if (init == 1) {
            s32 *p = D_0042CE10;
            s32 n = 19;
            do {
                n--;
                *p = 0;
                p++;
            } while (n != -1);
        }
    }
    if (prio == 0xFFFF) {
        if (init == 1) {
            func_00180D78(D_007D7AF0, 0, 0xF, 0xE1, 0xFF, 0, 5, 0x96, -8.0f, 15.0f, D_004857A0[0], 0, 2, 2, 6, 0);
        }
        if (init == 0) {
            if (D_0042CE10 != 0) {
                s32 *p = D_0042CE10 + 20;
                if (p != D_0042CE10) {
                    do {
                        --p;
                        func_00194300(p);
                    } while (p != D_0042CE10);
                }
            }
        }
    }
}
