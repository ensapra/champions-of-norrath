s64 func_001708F0(s32, s64);

s32 func_0016FBAC(u8 *arg0, s32 arg1, s32 arg2)
{
    return arg1 + (s32)((u64)func_001708F0(arg2 - arg1, *(s64 *)(arg0 + 0x18)) << 16);
}

s64 func_00170968(s64, s64);

s32 func_0016FB28(s64 *arg0)
{
    s64 end = arg0[1];
    s64 cur = arg0[0];
    s64 v;
    if (cur == end)
        return 1;
    v = cur + func_00170968((end - cur) + arg0[2] - 1, arg0[2]);
    arg0[0] = v;
    if (end < v)
        arg0[0] = end;
    arg0[3] = func_00170968(arg0[0] << 16, end);
    return 0;
}

s32 func_001A444C(void);
void *func_0011B9A8(s32);
void func_001A24AC(void *, void *, s32);

void *func_0016FA70(void *arg0)
{
    void *p;
    s32 n = func_001A444C() + 1;
    p = func_0011B9A8(n);
    if (p == NULL)
        return p;
    func_001A24AC(p, arg0, n);
    return p;
}

void func_0016FE10(u64 *tag, s32 nloop, s32 eop, s32 pre, s32 prim, s32 flg, s32 nreg, ...)
{
    char *ap;
    s32 i;

    ap = (char *)__builtin_next_arg(nreg) - (8 - __builtin_args_info(0)) * 8;
    tag[0] = nloop | (eop << 15);
    tag[0] |= ((u64)flg << 58) | ((u64)prim << 47);
    tag[0] |= ((u64)pre << 46) | ((u64)nreg << 60);
    tag[1] = 0;
    for (i = 0; i < nreg; i++) {
        tag[1] |= (u64)*(u32 *)ap << (i * 4);
        ap += 8;
    }
}
