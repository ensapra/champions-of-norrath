typedef struct {
    u8 p0[0xCF8];
    s32 f;
} O;

s32 func_00159238(O *p) {
    if (p == NULL) {
        return 0;
    }
    if (p->f == 1) {
        return 0;
    }
    p->f = 1;
    return 1;
}
