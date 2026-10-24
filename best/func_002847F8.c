extern s8 D_00485BDE;
extern s32 D_00438B10[];
extern s8 D_00486DA0;
extern char D_008D60E0[];
extern s32 func_00304640(void *, void *);
extern void *func_00301FFC(void *, void *, s32);

s64 func_002846B8(s32 arg0) {
    s32 f = D_00485BDE;
    if (f != 0) return f;
    D_00486DA0 = 1;
    return func_00304640(D_008D60E0, (void *)D_00438B10[arg0]);
}

s32 func_002847F8(char *arg0) {
    char *p = arg0 + 4;
    s32 a = *(s32 *)(p - 4);
    D_00486DA0 = a;
    func_00301FFC(D_008D60E0, p, 0x1E0);
    return 0x1E4;
}
