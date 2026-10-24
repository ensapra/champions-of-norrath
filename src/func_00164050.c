void func_002FEDF0(u8 *, s32);
void func_00164050(u8 *p, s32 flags) {
    s32 i;
    s32 *q;
    if (*(s32 *)p != 0) {
        *(s32 *)(*(s32 *)p + 0x610) = 0;
        *(s32 *)p = 0;
    }
    i = 0;
    if (((s8 *)p)[5] > 0) {
        q = (s32 *)(p + 0xC);
        do {
            if (*q != 0) {
                *(s32 *)(*q + 0x14) = 0;
                *q = 0;
            }
            i++;
            q += 8;
        } while (i < (s8)(u8)p[5]);
    }
    if (flags & 1) {
        func_002FEDF0(p, flags);
    }
}
