typedef struct FP {
    u8 pad0[0xC];
    s16 flags;
    s16 fd;
    u8 pad10[0xC];
    void *cookie;
    void *rd;
    void *wr;
    void *sk;
    void *cl;
    u8 pad30[0x24];
    void *reent;
} FP;
extern s32 func_00300238(void *, char *, s32 *);
extern FP *func_00300070(void *);
extern s32 func_00302410(void *, char *, s32, s32);
extern s32 func_00300A70(FP *, s32, s32);
extern s32 func_00303FF8(), func_00304060(), func_003040E0(), func_00304148();
FP *func_003002F0(void *r, char *name, char *mode) {
    FP *fp;
    s32 flags, oflags, fd;
    flags = func_00300238(r, mode, &oflags);
    if (flags == 0)
        return 0;
    fp = func_00300070(r);
    if (fp == 0)
        return 0;
    fd = func_00302410(fp->reent, name, oflags, 0x1B6);
    if (fd < 0) {
        fp->flags = 0;
        return 0;
    }
    fp->fd = fd;
    fp->rd = func_00303FF8;
    fp->wr = func_00304060;
    fp->sk = func_003040E0;
    fp->cl = func_00304148;
    fp->flags = flags;
    fp->cookie = fp;
    if (flags & 0x100)
        func_00300A70(fp, 0, 2);
    return fp;
}
