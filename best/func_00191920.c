void func_00191920(u32 **cur, u32 bits, u32 n) {
    s32 sh = 32 - ((bits + 2) & 0x1F);
    u32 all = 0xFFFFFFFFu;
    u32 mask = all >> sh;
    u32 *start = *cur;
    u32 end = ((u32)start & ~mask) + (n << 2);
    u32 *p;
    u32 *q;

    if (end < (u32)start) {
        end = end + 1;
        end = end + mask;
    }
    if ((u32)start < end) {
        q = start + 1;
        goto L84;
        do {
            p = q;
            q = p + 1;
            *p = 0;
L84:
            *cur = q;
        } while ((u32)q < end);
    }
}
