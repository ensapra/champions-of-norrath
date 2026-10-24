s32 func_001AFD10(s32, void *, s32, s32, s32, s32);
void *func_001B01D8(s32);
void *func_001B0580(s32, s32);
void func_001B7A28(s32, void *, void *);
void func_001B05D0(void);

void func_001B0610(s32 *arg0, s32 arg1) {
    s32 *p;
    s32 *q;
    s32 a, b;

    p = func_001B01D8(arg1);
    b = arg0[5];
    a = arg0[7];
    p[7] = a;
    p[5] = b;
    p[8] = 0x80000009;
    q = func_001B0580(arg0[8], arg1);
    if (q == NULL) {
        p[9] = 0;
        p[10] = 0;
    } else {
        p[9] = (s32)q;
        p[10] = q[2];
    }
    if (func_001AFD10(0x80000008, p, 0x40, 0, 0, 0) == 0) {
        func_001B7A28(0x800, func_001B05D0, p);
    }
}
