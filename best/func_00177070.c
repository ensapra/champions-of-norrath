extern u8 func_001CE218[];
extern u8 D_001D0380[];
extern u8 D_001D03D0[];
extern u8 D_010EABF0[];
extern u8 D_010EB0F0[];
s32 func_00192560(void *, void *);
s32 func_00192708(void *, void *);

void func_00177008(void *p) {
    s32 *cnt = (s32 *)(func_001CE218 + 0x2158);
    func_00192560(D_010EABF0 + (*cnt << 6), p);
    func_00192560(D_001D0380, p);
    *cnt = *cnt + 1;
}

void func_00177120(void *p) {
    s32 *cnt = (s32 *)(func_001CE218 + 0x21A8);
    func_00192560(D_010EB0F0 + (*cnt << 6), p);
    func_00192560(D_001D03D0, p);
    *cnt = *cnt + 1;
}

s64 func_00177070(void *p) {
    s32 *cnt = (s32 *)(func_001CE218 + 0x2158);
    s32 n = *cnt - 1;
    *cnt = n;
    if (n >= 0) {
        func_00192560(p, D_010EABF0 + (n << 6));
        if (*cnt == 0)
            return func_00192708(D_001D0380, p);
        else
            return func_00192560(D_001D0380, p);
    }
    return 0;
}
