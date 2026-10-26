typedef struct { s32 pad0[2]; u32 flags; s32 a; s32 b; char pad[0x58 - 0x14]; } PadSt;
extern void func_00167C08(void);
extern void func_00191770(s32, s32);
extern void func_001CD528(void);
extern void func_001CD650(void);
extern s32 func_001D0E70(void);
extern PadSt D_0034BEB8[4];
extern s8 D_00483829;
extern s32 D_00483F1C;
extern s32 D_00483F20;
extern s32 D_00483F30;
extern s32 D_004844A4;
extern s32 D_00484538;
extern s32 D_00484F90;
extern s32 D_00486680;

void func_002CEE28(s32 n) {
    s32 s0[4];
    s32 s1[4];
    s32 i, j, k, c;
    D_00483F1C = (D_00483829 != 0) ? 0 : D_00483F1C;
    for (i = 0; i < 4; i++) {
        s0[i] = D_0034BEB8[i].a;
        s1[i] = D_0034BEB8[i].b;
    }
    if (n > 0) {
        s32 cnt = n;
        do {
            func_00191770(1, -1);
            if (D_00483829 == 0) {
                if (func_001D0E70() == 0) {
                    if (D_00486680 == 0) {
                        D_004844A4 += 1;
                    }
                }
            }
            for (k = 0; k < 4; k++) {
                D_0034BEB8[k].a = 0;
                D_0034BEB8[k].b = 0;
            }
            func_001CD528();
            func_001CD650();
            if (D_00484F90 != 0 && D_00483F30 == 0 && D_00484538 > 0) {
                c = D_00484538;
                do {
                } while (--c != 0);
            }
            cnt--;
            func_00167C08();
        } while (cnt != 0);
    }
    if (D_00483F1C > 0 && D_00483F20 == 0) {
        s32 v = D_00483F1C;
        if (!((D_0034BEB8[0].flags & 0xFF0FFFFF) ||
              (D_0034BEB8[1].flags & 0xFF0FFFFF) ||
              (D_0034BEB8[2].flags & 0xFF0FFFFF) ||
              (D_0034BEB8[3].flags & 0xFF0FFFFF))) {
            D_00483F1C = 0;
        } else {
            D_00483F1C = v - 1;
        }
    }
    for (j = 0; j < 4; j++) {
        D_0034BEB8[j].a = s0[j];
        D_0034BEB8[j].b = s1[j];
    }
}
