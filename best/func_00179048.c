extern u32 D_010EB624;
extern u32 D_010EB628;
void func_00179520(void *, u32, s32);
void *func_00179048(u32 n) {
    u32 *p;
    u32 need;
    u32 v;
    u32 remain;
    p = 0;
    if (n == 0) return 0;
    p = (u32 *)D_010EB624;
    need = (n >> 2) + ((n & 3) != 0);
    if (p < (u32 *)D_010EB628) {
        v = *p;
        for (;;) {
            if ((s32)v < 0) {
                p += (v & 0x7fffffff) + 1;
            } else if ((v & 0x7fffffff) < need) {
                p += v + 1;
            } else break;
            if (p >= (u32 *)D_010EB628) break;
            v = *p;
        }
    }
    if (p >= (u32 *)D_010EB628) return 0;
    remain = (*p & 0x7fffffff) - need;
    func_00179520(p, need, 1);
    p++;
    if (remain != 0) func_00179520(p + need, remain - 1, 0);
    return p;
}
