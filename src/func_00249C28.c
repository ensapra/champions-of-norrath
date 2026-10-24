void func_00249CE8(void *);
void func_00249C28(u8 *p) {
    s32 x = *(s32 *)(p + 0x3C4);
    if (x == 0) {
        *(s32 *)(p + 0xF4) = 0x80;
    } else if (x == 1) {
        func_00249CE8(p);
        *(s32 *)(p + 0xF4) = 0x100;
    } else if (x == 3) {
        *(s32 *)(p + 0xF4) = 0x4000;
    } else {
        *(s32 *)(p + 0xF4) = 0x200;
    }
}
