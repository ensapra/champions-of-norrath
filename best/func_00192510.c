typedef unsigned int u128 __attribute__((mode(TI)));
s32 func_001B5C80(void);
void func_001B5CD8(void);

void func_00192510(u128 *d, u128 *s) {
    s32 r = func_001B5C80();
    *d = *s;
    if (r != 0) {
        func_001B5CD8();
    }
}

void func_00192560(u128 *d, u128 *s) {
    s32 r = func_001B5C80();
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
    if (r != 0) {
        func_001B5CD8();
    }
}
