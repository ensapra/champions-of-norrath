typedef struct { u8 *_base; s32 _size; } SBuf;
typedef struct Reent { u8 pad[0x38]; s32 __sdidinit; } Reent;
typedef struct SFile {
    u8 *_p;
    s32 _r;
    s32 _w;
    u16 _flags;
    s16 _file;
    SBuf _bf;
    s32 _lbfsize;
    void *_cookie;
    void *_read;
    void *_write;
    void *_seek;
    void *_close;
    SBuf _ub;
    u8 *_up;
    s32 _ur;
    u8 _ubuf[3];
    u8 _nbuf[1];
    SBuf _lb;
    s32 _blksize;
    s32 _offset;
    Reent *_data;
} SFile;

s32 func_001A4CE8(SFile *fp, const char *fmt, void *ap);
s32 func_001A9750(SFile *);

s32 func_001A4C30(SFile *fp, const char *fmt, void *ap)
{
    s32 ret;
    SFile fake;
    u8 buf[0x400];

    fake._flags = fp->_flags & ~2;
    fake._file = fp->_file;
    fake._data = fp->_data;
    fake._cookie = fp->_cookie;
    fake._write = fp->_write;
    fake._bf._base = fake._p = buf;
    fake._bf._size = fake._w = sizeof(buf);
    fake._lbfsize = 0;
    ret = func_001A4CE8(&fake, fmt, ap);
    if (ret >= 0 && func_001A9750(&fake)) {
        ret = -1;
    }
    if (fake._flags & 0x40) {
        fp->_flags |= 0x40;
    }
    return ret;
}

extern s32 D_010EB5F0[], D_010EB5F4[];
s32 func_00178420(s32 a, s32 b) {
    D_010EB5F0[0] = a;
    D_010EB5F4[0] = b;
    return 0;
}

typedef struct { u8 d[16]; } V16;
void func_00192510(u8 *, V16 *);

typedef struct { s32 f0; s32 f4; s32 f8; s32 count; } S177D58;

void func_00177D58(S177D58 *p, s32 idx, u8 **tbl, V16 *base, s32 *map) {
    s32 i;
    for (i = 0; i < p->count; i++) {
        func_00192510(tbl[p->f4] + i * 16, base + map[p->f0 + i]);
    }
}

typedef struct {
    s32 pad0[6];
    V16 *b18;
    V16 *b1C;
    s32 *m20;
    s32 *m24;
    s32 pad28[2];
    s32 n30;
    s32 n34;
    S177D58 *l38;
    S177D58 *l3C;
    s32 pad40[4];
    u8 **t50;
    u8 **t54;
} S177E00;

s32 func_00177E00(S177E00 *p) {
    s32 i;
    for (i = 0; i < p->n30; i++) {
        func_00177D58(&p->l38[i], i, p->t50, p->b18, p->m20);
    }
    for (i = 0; i < p->n34; i++) {
        func_00177D58(&p->l3C[i], i, p->t54, p->b1C, p->m24);
    }
    return 0;
}
