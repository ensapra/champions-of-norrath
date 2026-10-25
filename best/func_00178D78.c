extern u8 func_01000000[];
s32 func_00178D20(void *);
void func_00178D78(u32 value) {
    volatile u32 *root = (volatile u32 *)(func_01000000 + 0xEB5F8);
    s32 n = func_00178D20((void *)root[0]);
    if (n > 0 && value != 0) {
        ((volatile u32 *)(unsigned long)((volatile u32 *)(unsigned long)root[0])[1])[3] = 0;
        ((volatile u32 *)(unsigned long)((volatile u32 *)(unsigned long)root[0])[1])[2] = 0;
        ((volatile u32 *)(unsigned long)((volatile u32 *)(unsigned long)root[0])[1])[1] = value & 0x0FFFFFFF;
        ((volatile u32 *)(unsigned long)((volatile u32 *)(unsigned long)root[0])[1])[0] = 0x50000000;
        ((volatile u32 *)(unsigned long)root[0])[1] += 0x10;
        ((volatile u32 *)(unsigned long)((volatile u32 *)(unsigned long)root[0])[1])[3] = 0;
        ((volatile u32 *)(unsigned long)((volatile u32 *)(unsigned long)root[0])[1])[2] = 0;
        ((volatile u32 *)(unsigned long)((volatile u32 *)(unsigned long)root[0])[1])[1] = 0;
        ((volatile u32 *)(unsigned long)((volatile u32 *)(unsigned long)root[0])[1])[0] = 0x70000000;
    }
}
