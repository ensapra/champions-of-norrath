typedef unsigned int u128 __attribute__((mode(TI)));
s32 func_001B5C80(void);
void func_001B5CD8(void);

void func_00192560(u128 *d, u128 *s) {
    u128 pad __attribute__((aligned(16)));
    s32 r = func_001B5C80();
    u128 a = s[0], b = s[1], c = s[2], e = s[3];
    d[0] = a;
    d[1] = b;
    d[2] = c;
    d[3] = e;
    *(volatile u128 *)&pad;
    if (r != 0) {
        func_001B5CD8();
    }
}
