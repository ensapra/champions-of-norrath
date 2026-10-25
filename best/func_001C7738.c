extern s32 D_0034B7B8[];
s32 func_001C7738(s32 a, s32 b) {
    s32 off = a * 28;
    s32 o5 = off + 8;
    s32 o6 = off + 12;
    s32 o4 = off + 4;
    u8 *base = (u8 *)D_0034B7B8;
    s32 *p = (s32 *)(base + off);
    s32 *q4 = (s32 *)(base + o4);
    s32 *q6 = (s32 *)(base + o6);
    s32 *q5 = (s32 *)(base + o5);
    s32 n = 0;
    s32 i = 0;
    for (; i < 7; i++) {
        if (*p++ != 0) {
            if (i == 5 && *q5 != 0) continue;
            if (i == 4 && *q4 != 0) continue;
            if (i == 6 && *q6 != 0) continue;
            if (b != i) n++;
        }
    }
    return n;
}
