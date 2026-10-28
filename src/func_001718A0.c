typedef struct { s32 count; void (*fn[0x400])(void); } FnTable;
extern FnTable D_001CE210;
s32 func_001718A0(void (*f)(void)) {
    if (D_001CE210.count >= 0x400) return -1;
    D_001CE210.fn[D_001CE210.count++] = f;
    return 0x400 - D_001CE210.count;
}
