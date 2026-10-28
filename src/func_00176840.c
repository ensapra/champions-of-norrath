s32 *func_00176840(s32 unused, s32 *p, u32 n) {
    u32 count = p[3];
    u32 i;
    p += 4;
    i = 0;
    if (count != 0) {
        if (n == i) return p;
        do {
            s32 a, b;
            p += 4;
            i++;
            a = p[0];
            b = p[1];
            p += 4;
            p += a;
            p += b;
            if (i >= count) goto fail;
        } while (n != i);
        return p;
    } else {
fail:
        return 0;
    }
}
