void func_0014A2EC(void *, s32);
void func_0014A49C(void *a, s32 *list, u32 n) {
    u32 i = 0;
    s32 *p;
    if (n != 0) {
        p = list;
        do {
            func_0014A2EC(a, *p++);
            i++;
        } while (i < n);
    }
}
