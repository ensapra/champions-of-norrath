extern u8 func_001CE218[];
extern u8 D_001D0380[];
extern u8 D_010EABF0[];
void func_00192560(void *, void *);

void func_00177008(void *p) {
    s32 *cnt = (s32 *)(func_001CE218 + 0x2158);
    func_00192560(D_010EABF0 + (*cnt << 6), p);
    func_00192560(D_001D0380, p);
    (*cnt)++;
}
