extern void *func_001521A0(void *, s32);

void func_00151C5C(u8 *g, s32 x) {
    s32 *r = func_001521A0(g, 0xF);
    if (r != 0) {
        s32 t;
        r[8] = x;
        r[4] = 1;
        t = *(s32 *)(g + 0xFD4);
        r[5] = t;
        t = *(s32 *)(g + 0xFD8);
        r[6] = t;
        t = *(s32 *)(g + 0xFDC);
        r[7] = t;
    }
}
