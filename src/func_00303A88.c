/* identical to func_001A3A80 (matched), with its names changed by decompdecomp */
typedef void (*Hnd)(u32);
typedef struct { s32 err; char pad[0x1D0]; Hnd *tbl; } S;
extern s32 func_00303998();
extern s32 func_00303C80(S *, s32, u32);
extern s32 func_00303CE0(S *);
s32 func_00303A88(S *s, u32 sig) {
    Hnd *e;
    Hnd h;
    if (sig >= 0x20) {
        s->err = 0x16;
        return -1;
    }
    if (s->tbl == 0) {
        if (func_00303998() != 0) return -1;
    }
    e = (Hnd *)((u8 *)(sig * 4) + (u32)s->tbl);
    h = *e;
    if (h == 0)
        return func_00303C80(s, func_00303CE0(s), sig);
    if (h == (Hnd)1) return 0;
    if (h == (Hnd)-1) {
        s->err = 0x16;
        return 1;
    }
    *e = 0;
    h(sig);
    return 0;
}
