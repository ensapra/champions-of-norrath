extern u8 *D_00480488;
extern u8 D_004CF1E0[];

typedef struct { u8 pad[0x180]; u16 idx; u8 pad2[0x16]; } E198;

s32 func_0019798C(u8 *arg0, u8 *arg1)
{
    E198 *p = *(E198 **)(arg0 + 0x78);
    return ((s32 (*)(u8 *, s32))*(void **)(arg1 + 0x2C))(arg1, *(s32 *)(arg0 + 0x6C) + (p[*(s32 *)(arg0 + 0x48)].idx << 4));
}

void func_00197970(u8 *arg0, s32 *arg1, s32 *arg2)
{
    *arg1 = ((s32 *)*(s32 *)(arg0 + 0x7C))[0];
    *arg2 = ((s32 *)*(s32 *)(arg0 + 0x7C))[1];
}

void func_0019790C(u8 *arg0, u32 arg1, u8 arg2)
{
    if (arg1 >= 5) {
        ((void (*)(u8 *, u32, u8))*(void **)(D_00480488 + 0xF4))(D_004CF1E0, arg1, arg2);
    } else {
        ((void (*)(u8 *, u32, u8))*(void **)(arg0 + 0x34))(arg0, arg1, arg2);
    }
}
