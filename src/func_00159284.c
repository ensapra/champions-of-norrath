typedef struct { u8 pad[0xCF8]; s32 f; } S159284;

s32 func_00159284(S159284 *p) {
    if (p == NULL) return 0;
    if (p->f == 0) {
        p->f = 1;
    } else {
        p->f = 0;
    }
    return 1;
}
