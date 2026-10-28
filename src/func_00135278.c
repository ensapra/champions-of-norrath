s32 D_0048385C;
extern u8 D_004E2280[];
s32 func_00135278(void) {
    s32 count = 0;
    if (D_0048385C > 0) {
        u8 *base = D_004E2280;
        s8 *p = (s8 *)(base + 0x44D0);
        do {
            if (p[4] != 0 || p[5] != 0 || p[6] != 0)
                count++;
            else if (*(s32 *)p == 0)
                return 0;
            else
                count++;
            p += 0x44E0;
        } while (count < D_0048385C);
    }
    return 1;
}
