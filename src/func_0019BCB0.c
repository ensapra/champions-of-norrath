extern u8 D_00367374[];
void func_001A24AC(void *, void *, s32);
void func_0019BCB0(u8 *buf) {
    u8 *b = D_00367374 - 0x30A4;
    func_001A24AC(buf, D_00367374, *(s32 *)(b + 0x308C));
    buf[*(s32 *)(b + 0x308C)] = 0;
}
