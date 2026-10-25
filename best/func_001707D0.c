s32 func_001707D0(u8 *arg0, s32 arg1, u32 *arg2) {
    s32 acc = 0;
    s32 idx = -1;
    u32 *vp = arg2;
    if (arg1 == 0) return 0;
    for (;;) {
        if (idx == -1 || arg0[idx] != (u8)arg1) {
            u8 c = arg0[1];
            s32 limit = c * 3;
            idx = 0;
            if (limit != 0) {
                u8 *p = arg0 + 2;
                if (arg0[2] != (u8)arg1) {
                    s32 step = c * 2;
                    for (;;) {
                        idx += 3;
                        p += 3;
                        if (idx >= step + c) break;
                        step = c * 2;
                        if (*p == (u8)arg1) break;
                    }
                }
            }
            if (idx == (arg0[1] * 3)) {
                return 0;
            }
        }
        {
            u8 *tp = arg0 + idx;
            idx += 3;
            u32 *old = vp;
            vp += 2;
            u32 *mid = vp;
            vp += 2;
            s32 cond = *mid;
            u32 shifted = *old;
            shifted <<= tp[3];
            acc |= shifted;
            if (cond == 0) return acc;
        }
    }
}
