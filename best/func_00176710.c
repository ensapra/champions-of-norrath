void func_00176520(u8 **, u8 **, u32, u32, s32, s32);
void func_00176710(u8 **arg0, u8 **arg1, u32 n) {
    u8 *sp0;
    u8 *sp4;
    u8 *hdr;
    u32 cnt, rem;
    s32 flags, mode, f;

    hdr = *arg1;
    sp0 = *arg0;
    sp4 = hdr + 0x10;
    cnt = *(u32 *)(hdr + 0xC);
    flags = *(s32 *)(hdr + 8);
    rem = cnt;
    f = flags & 0x3FF;
    if (n < cnt) {
        mode = flags & 7;
        do {
            func_00176520(&sp0, &sp4, cnt, n, f, 0);
            if (mode != 3) {
                if (mode == 4) {
                    rem = rem - n + 2;
                    sp4 -= 8;
                }
            } else {
                rem -= n;
            }
        } while (n < rem);
    }
    func_00176520(&sp0, &sp4, cnt, rem, f, 0);
    *arg0 = sp0;
    *arg1 = (u8 *)(cnt * 0x30 + (u32)sp4);
}
