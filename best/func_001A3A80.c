typedef void (*Hnd)(u32);
typedef struct { s32 err; char pad[0x1D0]; Hnd *tbl; } S;
extern s32 func_001A3990();
extern s32 func_001A3C78(S *, s32, u32);
extern s32 func_001A3CD8(S *);
s32 func_001A3A80(S *s, u32 sig) {
    Hnd *e;
    Hnd h;
    if (sig >= 0x20) {
        s->err = 0x16;
        return -1;
    }
    if (s->tbl == 0) {
        if (func_001A3990() != 0) return -1;
    }
    e = &s->tbl[sig];
    h = *e;
    if (h == 0)
        return func_001A3C78(s, func_001A3CD8(s), sig);
    if (h == (Hnd)1) return 0;
    if (h == (Hnd)-1) {
        s->err = 0x16;
        return 1;
    }
    *e = 0;
    h(sig);
    return 0;
}
