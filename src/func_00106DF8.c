extern void func_001065D0(void *);
extern u8 D_010C1E80[];
extern s32 D_010C1EA8[];

void func_00106DF8(s32 n) {
    func_001065D0(D_010C1E80 + n * 0x14);
    D_010C1EA8[0] = 0;
}
