/* identical to func_001B0318 (matched), with its names changed by decompdecomp */
s32 func_001B01D8(void *, s32);
s32 func_002D76D0(s32, void *, s32, s32, s32, s32);

void func_001B01B8(void *arg0) {
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
    *(s32 *)((u8 *)arg0 + 0x10) = *(s32 *)((u8 *)arg0 + 0x10) & 0xFFFFFFFE;
}

s32 func_001B0208(void *arg0, s32 arg1) {
    if (arg1 >= 0 && arg1 < *(s32 *)((u8 *)arg0 + 0x20)) {
        return *(s32 *)((u8 *)arg0 + 0x1C) + (arg1 << 6);
    }
    return func_001B01D8(arg0, arg1);
}

s32 func_002D7CD8(s32 a, s32 b, s32 c, void *arg3) {
    u8 *p = arg3;
    return func_002D76D0(0x80000008, p, 0x40, *(s32 *)(p + 0x24), *(s32 *)(p + 0x28), *(s32 *)(p + 0x2C)) != 0 ? 0 : 0x800;
}

s32 *func_001B0580(s32 key, void *arg1) {
    u8 *p = arg1;
    s32 *node;
    unsigned int val;
    p = *(void **)(p + 0x28);
    if (p == NULL) return NULL;
    do {
        node = *(s32 **)(p + 0x8);
        if (node != NULL) {
            val = *node;
            do {
                if (val == key) return node;
                node = *(s32 **)((u8 *)node + 0x38);
                if (node != NULL) val = *node;
            } while (node != NULL);
        }
        p = *(void **)(p + 0x14);
    } while (p != NULL);
    return NULL;
}
