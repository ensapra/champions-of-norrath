extern char D_004853A0[];
extern char D_004853A8[];
extern char D_004853E8[];
s32 func_00140F60(void *, char *, s32, ...);
s32 func_00142310(void *, s32);
s32 func_00143A80(void *, char *, s32);
s64 func_002162A0(u8 *o, s32 on) {
    s32 n;
    s32 hit;
    s32 v;
    s32 x;
    s32 has;
    has = func_00143A80(o, D_004853E8, 0);
    n = 1;
    if (has != 0)
        n = func_00140F60(o, D_004853E8, 0, n);
    hit = 0;
    if (on) {
        if (++*(s32 *)(o + 0x4C) == n)
            hit = 1;
    } else {
        x = *(s32 *)(o + 0x4C);
        *(s32 *)(o + 0x4C) = x - 1;
        hit = x == n;
    }
    if (hit) {
        v = on;
        if (func_00140F60(o, D_004853A0, 0))
            v = 1;
        if (func_00140F60(o, D_004853A8, 0))
            v = 0;
        return func_00142310(o, v);
    }
}
