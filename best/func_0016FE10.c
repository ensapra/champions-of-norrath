void func_0016FE10(u64 *tag, s32 nloop, s32 eop, s32 pre, s32 prim, s32 flg, s32 nreg, ...)
{
    __builtin_va_list ap;
    s32 i;
    u64 x, y, z;
    __builtin_stdarg_start(ap, nreg);
    x = nloop | (eop << 15);
    y = ((u64)prim << 47) | ((u64)flg << 58);
    z = ((u64)pre << 46) | ((u64)nreg << 60);
    tag[0] = x | y | z;
    tag[1] = 0;
    for (i = 0; i < nreg; i++) {
        tag[1] |= (u64)__builtin_va_arg(ap, u32) << (i * 4);
    }
    __builtin_va_end(ap);
}
