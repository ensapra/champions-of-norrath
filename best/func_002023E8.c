extern u32 func_00153FA8(void);
void func_002023E8(s32 *arg0) {
    s32 mode = arg0[0x3C4 / 4];
    if (mode == 0) {
        arg0[0xF4 / 4] = 1 << ((func_00153FA8() % 9) + 0xE);
    } else if (mode == 1) {
        arg0[0xF4 / 4] = 1 << ((func_00153FA8() & 1) + 0xC);
    } else {
        arg0[0xF4 / 4] = 1 << (func_00153FA8() % 12);
    }
}
