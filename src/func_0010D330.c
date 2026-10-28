s32 D_010C21D8[4];
s32 D_001BD8C4[4];
void func_0010D600(void);

s64 func_0010D330(s32 a0, u8 *a1) {
    if ((u32)(D_010C21D8[0] - 2) >= 2) {
        if (*(s32 *)(a1 + 0x1C) == D_001BD8C4[0] + 1) {
            func_0010D600();
        }
    }
}
