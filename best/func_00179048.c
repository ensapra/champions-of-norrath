void func_00179520(void *, u32, s32);
extern u32 *D_010EB624[];
extern u32 *D_010EB628[];
u32 *func_00179048(u32 n) {
    u32 *p, *found;
    u32 need, v, remain;
    if (n == 0) return 0;
    need = (n >> 2) + ((n & 3) != 0);
    found = 0;
    for (p = D_010EB624[0]; p < D_010EB628[0]; p += v + 1) {
        v = *p;
        if ((s32)v >= 0 && (v & 0x7fffffff) >= need) {
            found = p;
            break;
        }
    }
    if (!found) return 0;
    remain = (*found & 0x7fffffff) - need;
    func_00179520(found, need, 1);
    found++;
    if (remain != 0) func_00179520(found + need, remain - 1, 0);
    return found;
}
