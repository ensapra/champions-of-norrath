extern void func_00145CA8(void);
extern void func_00145DE8(void);
extern u8 func_01000000[];

void func_00145E68(void) {
    s32 x = *(s32 *)(func_01000000 + 0xD44A0);
    if (x >= 0) {
        if (x < 2) {
            func_00145CA8();
            return;
        }
    }
    func_00145DE8();
}
