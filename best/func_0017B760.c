s32 func_001AFD10(s32, s32, s32, s32, s32, s32);
s32 func_001B05D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return func_001AFD10(0x80000008, arg3, 0x40, 0, 0, 0) ? 0 : 0x800;
}

s32 func_0017B6C8(void *arg0, u32 idx, u8 *src, s32 len) {
    s32 *p3;
    s32 *ent;
    s32 used;
    u8 *dst;
    if (arg0 == 0) return -1;
    p3 = *(s32 **)((u8 *)arg0 + 4);
    if (idx >= (u32)p3[2]) return -1;
    ent = *(s32 **)(*(s32 *)(p3 + 3) + idx * 8 + 4);
    used = ent[1];
    if ((u32)ent[0] < (u32)(used + len + 8)) return -1;
    ent[1] = used + len;
    dst = (u8 *)ent + used + 8;
    len--;
    while (len != -1) {
        *dst++ = *src++;
        len--;
    }
    return 0;
}

s32 func_0017B760(void *a0, u32 a1, u32 msg) {
    s32 n;
    u32 m = msg;
    switch (m & 0xF0) {
    case 0x80: case 0xC0: case 0xD0:
        n = 2; break;
    case 0x90: case 0xA0: case 0xB0: case 0xE0:
        n = 3; break;
    default:
        return -1;
    }
    return func_0017B6C8(a0, a1, (u8 *)&m, n);
}

s32 func_0017B810(void *a0, u32 a1, u8 *p, u32 len) {
    u32 i;
    if (*p++ != 0xF0) return -1;
    if (len >= 2) {
        i = 2;
        do {
            if (*p++ == 0xF7) return func_0017B6C8(a0, i, p, len);
            i++;
        } while (len >= i);
    }
    return -1;
}
