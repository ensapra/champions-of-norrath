typedef struct { s32 count; void (*fn[0x400])(void); } FnTable;
extern FnTable D_001CD208;
s32 func_00171860(void (*f)(void)) {
    if (D_001CD208.count >= 0x400) return -1;
    D_001CD208.fn[D_001CD208.count++] = f;
    return 0x400 - D_001CD208.count;
}
