s32 D_010C21F0[4];
s32 D_010C21F8[4];
extern u8 runStats__Fii[];
void func_0013C2E8(void *, s32, void *, void *);

void func_0010CF70(void) {
    s32 *p68 = D_010C21F8;
    s32 *p60 = D_010C21F0;
    s32 i;
    for (i = 0; i < 2; i++) {
        p68[i] = 0;
        p60[i] = 0;
    }
    func_0013C2E8(runStats__Fii + 0xD90, i, p60, p68);
}
