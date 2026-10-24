/* identical to func_001A3E10 (matched), with its names changed by decompdecomp */
extern u8 D_00444A6C[];
s32 func_00304CFC(char *);
s32 func_003083E8(void *, const char *, void *);
void func_00303F48(void);

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

s32 func_00303F50(char *dst, const char *fmt, ...)
{
    Stream f;
    f.base = f.p = dst;
    f.flags = 4;
    f.size = f.r = func_00304CFC(dst);
    f.rd = func_00303F48;
    f.reent = *(s32 *)(D_00444A6C + 0x3A14);
    f.x30 = 0;
    f.x44 = 0;
    return func_003083E8(&f, fmt, (char *)__builtin_next_arg(fmt) - 48);
}
