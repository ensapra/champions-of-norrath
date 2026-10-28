typedef struct { s32 count; void (*fn[0x400])(void); } FnTable;
extern FnTable D_001CF218;
s32 func_001718E0(void (*f)(void)) {
    if (D_001CF218.count >= 0x400) return -1;
    D_001CF218.fn[D_001CF218.count++] = f;
    return 0x400 - D_001CF218.count;
}
