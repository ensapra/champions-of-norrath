typedef union { u64 d[2]; u32 w[4]; } GifQ_176450;
void func_00176450(u32 *out, u32 flags, s32 a2)
{
    GifQ_176450 t;
    s32 r = 2;
    u32 mode = flags & 7;
    u32 fge = (flags >> 4) & 1;
    u32 prim = flags & 0x3FF;
    s32 nreg = 0;
    s32 nloop = 0;
    if ((flags >> 8) & 1) r = 3;
    switch (mode) {
    case 1:
    case 3:
    case 5:
        t.d[1] = r | 0x410;
        nloop = a2;
        nreg = 3;
        break;
    case 0:
    case 2:
    case 4:
    case 7:
        nreg = 0;
        break;
    }
    t.d[0] = ((u64)(prim | 8 | (fge << 4)) << 47) | ((u64)1 << 46);
    out[0] = t.w[0] | nloop | 0x8000;
    out[1] = t.w[1] | (nreg << 28);
    out[2] = t.w[2];
    out[3] = t.w[3];
}
