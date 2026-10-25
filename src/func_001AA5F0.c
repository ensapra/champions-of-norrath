typedef struct Reent { u8 pad[0x3C]; void *cleanup; } Reent;
typedef struct File {
    u8 *p;
    s32 r, w;
    u16 flags;
    s16 file;
    u8 *base;
    s32 size;
    s32 lbfsize;
    u8 pad1[0x28 - 0x1C];
    void *seek;
    u8 pad2[0x3C - 0x2C];
    void *pad3;
    u8 pad4[0x43 - 0x40];
    u8 nbuf[1];
    u8 pad5[0x4C - 0x44];
    s32 blksize;
    u8 pad6[0x54 - 0x50];
    Reent *data;
} File;
typedef struct { s32 dev; s32 mode; u8 pad[0x60]; } Stat;

s32 func_001AD1D0(Reent *, s32, Stat *);
void *func_001A1CF0(Reent *, s32);
s32 func_001ADED0(s32);
void func_001A9A38(void);
s32 func_001ABBA0(void);

void func_001AA5F0(File *fp) {
    void *buf;
    s32 size, couldbetty;
    Stat st;
    if (fp->flags & 2) {
        fp->p = fp->nbuf + 0;
        fp->base = fp->nbuf + 0;
        fp->size = 1;
        return;
    }
    if (fp->file < 0 || func_001AD1D0(fp->data, fp->file, &st) < 0) {
        couldbetty = 0;
        size = 0x400;
        fp->flags |= 0x800;
    } else {
        couldbetty = (st.mode & 0xF000) == 0x2000;
        size = 0x400;
        if ((st.mode & 0xF000) == 0x8000 && fp->seek == func_001ABBA0) {
            fp->blksize = size;
            fp->flags |= 0x400;
        } else {
            fp->flags |= 0x800;
        }
    }
    buf = func_001A1CF0(fp->data, size);
    if (buf == NULL) {
        fp->flags |= 2;
        fp->p = fp->nbuf;
        fp->base = fp->nbuf;
        fp->size = 1;
    } else {
        fp->data->cleanup = func_001A9A38;
        fp->flags |= 0x80;
        fp->p = buf;
        fp->base = buf;
        fp->size = size;
        if (couldbetty && func_001ADED0(fp->file)) {
            fp->flags |= 1;
        }
    }
}
