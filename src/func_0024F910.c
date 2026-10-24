typedef struct {
    s32 a;
    u16 flags;
    u8 pad[0xE];
} Voice14;

extern s32 D_00485948;
extern Voice14 D_007D8F20[];

s32 func_0024F910(void)
{
    s32 i = 0;
    s32 n;

    do {
        if (i++ >= 0x2C) {
            return -1;
        }
        n = D_00485948 + 1;
        D_00485948 = n < 0x2B ? n : 0;
        n = D_00485948;
    } while (D_007D8F20[n].flags & 5);
    return n;
}
