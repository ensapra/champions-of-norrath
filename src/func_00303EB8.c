/* identical to func_001A3D78 (matched), with its names changed by decompdecomp */
extern u8 D_00444A6C[];
s32 func_001A444C(char *);
s32 func_001A73E0(void *, const char *, void *);
s32 func_00306A60(void *, const char *, void *);
void func_001A3E08(void);

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

s32 func_001A3E10(char *dst, const char *fmt, ...)
{
    Stream f;
    char *ap = (char *)__builtin_next_arg(fmt) - 48;
    f.base = f.p = dst;
    f.flags = 4;
    f.size = f.r = func_001A444C(dst);
    f.rd = func_001A3E08;
    f.reent = *(s32 *)(D_00444A6C + 0x3A14);
    f.x30 = 0;
    f.x44 = 0;
    return func_001A73E0(&f, fmt, ap);
}

void func_00303EB8(char *dst, const char *fmt, ...)
{
    Stream f;
    char *ap = (char *)__builtin_next_arg(fmt) - 48;
    f.flags = 0x208;
    f.base = f.p = dst;
    f.size = f.w = 0x7FFFFFFF;
    f.reent = *(s32 *)(D_00444A6C + 0x3A14);
    func_00306A60(&f, fmt, ap);
    *f.p = 0;
}
