s32 D_00484538;
s8 D_00486678;
extern u8 D_00408600[];
extern u8 D_007CB770[];

s32 func_00195560(void) {
    s32 n = D_00484538;
    s32 i = 0;
    s8 *q;
    s32 *x;
    if (n > 0) {
        s32 m = n;
        s32 *y;
        q = (s8 *)D_007CB770;
        y = (s32 *)D_00408600;
        q += 0x50;
        x = (s32 *)((u8 *)y + 0x54);
        do {
            s32 want;
            s32 b;
            s32 v = *x;
            x = (s32 *)((u8 *)x + 0x5DB0);
            if (q[5] != v + 1)
                return 0;
            b = q[6];
            want = 0;
            if (m >= 2 || D_00486678 != 0)
                want = 1;
            if (b != want)
                return 0;
            i++;
            q += 0x58;
        } while (i < m);
    }
    return 1;
}
