extern s8 D_00485BDE;
extern s32 D_00438B10[];
extern s8 D_00486DA0;
extern char D_008D60E0[];
extern void func_001D1108(void *);
extern s32 func_003044FC(void *, void *);
extern s32 func_00304640(void *, void *);
extern void *func_00301FFC(void *, void *, s32);

s64 func_002846B8(s32 arg0) {
    if (D_00485BDE != 0) return 0;
    D_00486DA0 = 1;
    return func_00304640(D_008D60E0, (void *)D_00438B10[arg0]);
}

s32 func_002847F8(char *arg0) {
    char *p = arg0 + 4;
    D_00486DA0 = *(s32 *)(p - 4);
    func_00301FFC(D_008D60E0, p, 0x1E0);
    return 0x1E4;
}

void func_002846F8(void) {
    char buf[0x40];
    s32 i = 0;
    s32 n;
    func_001D1108(buf);
    if (D_00486DA0 > 0) {
        char *p = D_008D60E0;
        do {
            if (func_003044FC(p, buf) == 0)
                return;
            i++;
            p += 0x20;
        } while (i < D_00486DA0);
    }
    n = (u8)D_00486DA0;
    D_00486DA0 = n + 1;
    func_00304640(D_008D60E0 + (((s32)(n << 24)) >> 19), buf);
}
