extern u8 D_0047B158[16];
void func_002D1508(u8 *p) {
    u8 local[12];
    s32 v;
    __builtin_memcpy(local, D_0047B158, 12);
    p[5]--;
    if ((p[7] & 3) == 0) local[1] = 0x1D;
    if (p[5] == 0) {
        p[6]--;
        if (p[6] == 0) {
            v = *(volatile u8 *)&p[7];
            if (v == 0) p[7] = 0x63; else p[7] = v - 1;
            p[6] = 12;
        }
        p[5] = local[p[6] - 1];
    }
}
