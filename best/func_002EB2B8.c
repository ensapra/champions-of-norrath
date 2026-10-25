extern char D_0047C9A8[];
s32 func_002EB670(s32, s32);
void func_00301FFC(void *, void *, s32);
void func_003021B0(void *, s32, s32);
void func_00302560(char *, s32, s32);

s32 func_002EB2B8(s16 *src, u32 bytes, u8 *dst, s32 *outSize, u8 *tmp, s32 tmpSize, s32 *fill, s32 n, s32 stride, s32 (*cb)(void *, void *, s32), s32 user) {
    s32 total, need, avail, left, half, k, r;
    total = 0;
    if (src == 0 || dst == 0 || (bytes & 1)) {
        *outSize = 0;
        return 0x80000004;
    }
    if (bytes == 0 || (avail = *outSize) == 0) {
        *outSize = 0;
        return 0;
    }
    half = (s32)bytes / 2;
    need = half / n;
    if (*fill != 0) {
        if (avail % stride) need++;
    }
    need *= stride;
    if (avail < need) {
        func_00302560(D_0047C9A8, avail, need);
        *outSize = 0;
        return 0x80000004;
    }
    left = half;
    func_003021B0(dst, 0, avail);
    *outSize = 0;
    for (;;) {
        k = func_002EB670(n - *fill, left);
        func_00301FFC((u8 *)tmp + *fill * 2, src, k * 2);
        src += k;
        left -= k;
        *fill += k;
        if (*fill == n) {
            r = cb(tmp, dst, user);
            dst += stride;
            *fill = 0;
            total += r;
            func_003021B0(tmp, 0, tmpSize);
        } else
            break;
    }
    *outSize = total;
    return 0;
}
