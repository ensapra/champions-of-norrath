/* identical to func_001A08E0 (matched), with its names changed by decompdecomp */
s32 func_002FC638(s32 *p)
{
    s32 n = 0;
    s32 size = *p;
    s32 next;
    if (size != 0) {
        do {
            if (p[1] != 0) {
                if (p[2] != 0)
                    n++;
            }
            p = (s32 *)((u8 *)p + size) + 1;
            next = *p;
            size = next;
        } while (next != 0);
    }
    return n;
}
