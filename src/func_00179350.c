void *func_00179048(u32);
void func_00179158(void *);
void func_001A24AC(void *, void *, u32);

void *func_00179350(void *ptr, u32 size) {
    void *p;
    if (ptr == NULL) {
        return func_00179048(size);
    }
    if (size == 0) {
        func_00179158(ptr);
        return NULL;
    }
    p = func_00179048(size);
    if (p == NULL) {
        return NULL;
    }
    func_001A24AC(p, ptr, size);
    func_00179158(ptr);
    return p;
}

extern s32 D_010EB624[];
extern s32 D_010EB628[];
extern u32 D_010EB62C[];
void func_00179520(s32, s32, s32);

s32 func_00178FD8(s32 base, u32 size) {
    s32 adj = 4 - (base & 3);
    u32 n;
    if (adj != 0) {
        size -= adj;
        D_010EB624[0] = base - adj;
    }
    n = size >> 2;
    D_010EB62C[0] = n;
    D_010EB628[0] = base + n * 4;
    D_010EB624[0] = base;
    func_00179520(base, n - 1, 0);
    return 0;
}
