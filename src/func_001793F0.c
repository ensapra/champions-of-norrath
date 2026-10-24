void *func_00179048(u32);
void *func_001A2660(void *, s32, u32);
void *func_001793F0(u32 n, u32 size) {
    void *p;
    u32 total = n * size;
    p = func_00179048(total);
    if (p == NULL) return p;
    func_001A2660(p, 0, total);
    return p;
}
