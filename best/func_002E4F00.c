typedef struct { u8 pad0[0x30]; s32 size; } NetBuf;
extern void *func_00301FFC(void *, void *, s32);
s32 func_002E4F00(NetBuf *arg0, s32 arg1, s32 arg2, void *arg3, s32 arg4)
{
    s32 rem;
    s32 base = arg1;
    void *src = arg3;
    s32 n = arg4;
    arg2 *= 4;
    rem = arg0->size - arg2;
    if (src == 0) return 0;
    if (n < 0) return -0x21F;
    if (rem < n) return -0x21F;
    func_00301FFC((void *)(arg2 + base), src, n);
    return 0;
}
