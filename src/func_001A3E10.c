extern u8 jtbl_004C006C[];
s32 func_001A444C(char *);
s32 func_001A73E0(void *, const char *, void *);
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
    f.base = f.p = dst;
    f.flags = 4;
    f.size = f.r = func_001A444C(dst);
    f.rd = func_001A3E08;
    f.reent = *(s32 *)(jtbl_004C006C + 0x3A14);
    f.x30 = 0;
    f.x44 = 0;
    return func_001A73E0(&f, fmt, (char *)__builtin_next_arg(fmt) - 48);
}
