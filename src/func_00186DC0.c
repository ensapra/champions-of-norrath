extern u8 D_010F44A8[];
void func_00186DC0(void) {
    u8 *base = D_010F44A8;
    *(volatile s32 *)(base + 0x2C) = 0;
    *(volatile s32 *)(base + 0x30) = 0;
}
