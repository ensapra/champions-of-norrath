s32 D_00484538;
void func_00138758(void *, s32, s32 *);
s32 func_00138900(void *, s32);
s32 func_001B1B68(void *, s32);

s32 func_0013BA30(void *a, void *b)
{
    s32 scratch[0x2c];
    s32 i = 0, total = 0;
    func_00138758(a, *(s32 *)((u8 *)b + 4), &scratch[0x28]);
    func_00138900(scratch, scratch[0x28]);
    for (; i < D_00484538; i++) {
        total += func_001B1B68(scratch, i);
    }
    return total;
}
