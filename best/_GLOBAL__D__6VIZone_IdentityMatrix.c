/* identical to func_001440B8 (matched), with its names changed by decompdecomp */
extern void func_00143160(s32, s32);
void _GLOBAL__D__6VIZone_IdentityMatrix(void) {
    volatile void *dummy;
    func_00143160(0, 0xFFFF);
    dummy = (void *)0;
    (void)dummy;
}
extern void func_00140678(s32, s32, s32);
s32 func_00143A58(s32 arg0) {
    s32 v;
    func_00140678(arg0, (s32)&v, 2);
    return v;
}
void func_00144730(u32 arg0, u32 arg1) {
    u32 end = arg0 + arg1;
    u32 p = arg0 & ~0xFU;
    if (p < end) {
        do {
            p++;
        } while (p < end);
    }
}
extern s32 D_00333D58[];
s32 func_00144778(void) {
    s32 sum = 0;
    s32 i = 2;
    s32 *p = &D_00333D58[3];
    do {
        s32 *q = (s32 *)*p;
        s32 c = 0;
        if (q != NULL) {
            do {
                q = (s32 *)*q;
                c++;
            } while (q != NULL);
        }
        i--;
        sum += c;
        p += 4;
    } while (i >= 0);
    return sum;
}
