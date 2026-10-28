typedef struct R { char pad[0x38]; s32 init; } R;
typedef struct F { char *p; s32 r; s32 w; s16 flags; s16 pad; char *base; s32 size; s32 pad2; void *cookie; s32 pad3; s32 (*write)(void *, char *, s32); char pad4[0x2C]; R *data; } F;
extern u8 jtbl_004C006C[];
void func_001A9A78(R *);
s32 func_001AA470(R *, s32 (*)(F *));
s32 func_001A9750(F *fp)
{
    s32 fl, n, t;
    char *p;
    if (fp == 0) return func_001AA470(*(R **)(jtbl_004C006C + 0x3A14), func_001A9750);
    if (!fp->data) fp->data = *(R **)(jtbl_004C006C + 0x3A14);
    if (!fp->data->init) func_001A9A78(fp->data);
    fl = fp->flags;
    if (!(fl & 8)) return 0;
    p = fp->base;
    if (p == 0) return 0;
    n = (s32)fp->p - (s32)p;
    fp->p = p;
    fp->w = (fl & 3) ? 0 : fp->size;
    while (n > 0) {
        t = fp->write(fp->cookie, p, n);
        if (t <= 0) { fp->flags |= 0x40; return -1; }
        p += t; n -= t;
    }
    return 0;
}
