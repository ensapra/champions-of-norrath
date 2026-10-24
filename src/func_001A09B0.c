s32 *func_001A09B0(s32 *p, u32 addr)
{
    s32 size = *p;
    s32 next;
    if (size != 0) {
        do {
            if (p[1] != 0) {
                s32 off = p[2];
                if (off != 0) {
                    if (addr - off < (u32)p[3])
                        return p;
                }
            }
            p = (s32 *)((u8 *)p + size) + 1;
            next = *p;
            size = next;
        } while (next != 0);
    }
    return 0;
}
