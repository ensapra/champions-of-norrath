typedef struct { u8 pad0[0x30]; s32 size; } NetBuf;
extern void *func_00301FFC(void *, void *, s32);
s32 func_002E4F00(NetBuf *arg0, s32 arg1, s32 arg2, void *arg3, s32 arg4)
{
    s32 rem = arg0->size - (arg2 * 4);
    void *src = arg3;
    if (src == NULL) {
        return 0;
    }
    s32 n = arg4;
    if (n < 0 || rem < n) {
        return -0x21F;
    }
    func_00301FFC((void *)(arg1 + arg2 * 4), src, n);
    return 0;
}
