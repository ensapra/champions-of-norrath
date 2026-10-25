s8 D_00483829;
s32 D_0048385C;
s32 D_00483860;
s32 D_00486820;
extern u8 D_004F3680[];
extern u8 D_004F3E90[];
extern void func_002E56D0(void *, void *, s32, void *, s32, s32, void *, s32, s32);
extern void func_00301FFC(void *, s32, s32);
extern void func_003021B0(void *, s32, s32);

void func_00129FE8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    struct { s32 a; u8 b[0x1FC]; } t;
    u8 sp210[0x10];
    s32 i;
    s8 *q;
    s32 v;
    s32 j;
    void (*fn)(void *, s32);

    if (D_00483829 != 0) {
        t.a = arg0 + 0xBD44;
        func_00301FFC(t.b, arg2, arg3);
        for (i = 0; i < D_0048385C; i++) {
            if ((((arg1 >> i) ^ 1) & 1) != 0) continue;
            q = (s8 *)(i * 0x44E0 + 0x44D0 + (s32)D_004E2280);
            if (q[4] != 0) {
                fn = (void (*)(void *, s32))D_004F3F10[arg0];
                if (fn != 0) {
                    fn(t.b, arg3);
                }
            } else if (q[5] == 0) {
                v = *(s32 *)(D_004E2280 + i * 0x44E0 + 4);
                D_00486820 = 0;
                func_003021B0(sp210, 0, 0x10);
                for (j = 0; j < 4; j++) {
                    sp210[4 + j] = D_004E2280[i * 0x44E0 + j];
                }
                func_002E56D0(D_004F3E90, D_004F3680, D_00483860, &t.a, arg3 + 4, 0, sp210, v, 0x3E8);
            }
        }
    }
}
