typedef struct { s32 count; void (*fn[0x400])(void); } FnTable;
extern FnTable D_001CD208;
s32 func_00171860(void (*f)(void)) {
    s32 n = D_001CD208.count;
    if (n >= 0x400) return -1;
    D_001CD208.fn[n] = f;
    D_001CD208.count = n + 1;
    return 0x400 - (n + 1);
}
