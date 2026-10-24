extern void func_0010A0D0(s32);
extern s32 func_0011C738(void);
extern void func_0011D9A0(void);

void func_0010A140(s32 n) {
    if (n >= 0) {
        if (n < 2) {
            if (func_0011C738() == 0) {
                func_0010A0D0(1);
                func_0011D9A0();
            } else {
                func_0010A0D0(0);
            }
        }
    }
}
