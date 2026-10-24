/* identical to func_001A3CF0 (matched), with its names changed by decompdecomp */
s32 func_00306A60(void *, const char *, void *);
s32 func_001A3990(void *);

typedef struct {
    char *p;
    s32 r, w;
    s16 flags;
    s16 fd;
    char *base;
    s32 size;
    char pad[8];
    void (*rd)(void);
    char pad1[0x30 - 0x24];
    s32 x30;
    char pad2[0x44 - 0x34];
    s32 x44;
    char pad3[0x54 - 0x48];
    s32 reent;
    char tail[0x60 - 0x58];
} Stream;

typedef struct {
    char pad[0x1D4];
    void (**tbl)(s32);
} R;

void func_00303E30(void *reent, char *dst, const char *fmt, ...)
{
    Stream f;
    char *ap = (char *)__builtin_next_arg(fmt) - 40;
    f.flags = 0x208;
    f.base = f.p = dst;
    f.size = f.w = 0x7FFFFFFF;
    f.reent = (s32)reent;
    func_00306A60(&f, fmt, ap);
    *f.p = 0;
}

s32 func_001A3B58(R *r, u32 sig)
{
    void (**t)(s32);
    void (*h)(s32);
    if (sig >= 32)
        return -1;
    if (r->tbl == 0 && func_001A3990(r) != 0)
        return -1;
    t = &r->tbl[sig];
    h = *t;
    if (h == 0)
        return 1;
    if (h == (void (*)(s32))-1)
        return 2;
    if (h == (void (*)(s32))1)
        return 3;
    *t = 0;
    h(sig);
    return 0;
}
