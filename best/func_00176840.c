s32 *func_00176840(s32 unused, u8 *p, u32 n) {
    u32 i;
    u32 count;
    s32 *e;
    count = *(u32 *)(p + 0xC);
    e = (s32 *)(p + 0x10);
    i = 0;
    if (count != 0) {
        while (n != i) {
            s32 a, b;
            e += 4;
            i++;
            a = e[0];
            b = e[1];
            e += 4;
            e += a;
            e += b;
            if (i >= count) {
                goto fail;
            }
        }
    } else {
fail:
        return 0;
    }
    return e;
}
