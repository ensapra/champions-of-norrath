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

extern u8 jtbl_004C006C[];
s32 func_001A4BB8(char *, char **, s32);
void func_001A9A78(Reent *);
s32 func_001A4D60(Reent *, SFile *, const char *, char *);
s32 func_001A9750(SFile *);

s32 func_001A8298(char *s)
{
    return func_001A4BB8(s, 0, 10);
}

s32 func_001A4CE8(SFile *fp, const char *fmt, char *ap)
{
    if (fp->_data == 0) {
        fp->_data = *(Reent **)(jtbl_004C006C + 0x3A14);
    }
    if (!fp->_data->__sdidinit) {
        func_001A9A78(fp->_data);
    }
    return func_001A4D60(fp->_data, fp, fmt, ap);
}

s32 func_001A4C30(SFile *fp, const char *fmt, char *ap)
{
    s32 ret;
    SFile fake;
    u8 buf[0x400];

    fake._flags = fp->_flags & ~2;
    fake._file = fp->_file;
    fake._cookie = fp->_cookie;
    fake._write = fp->_write;
    fake._data = fp->_data;
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

char *func_001A48F8(char *searchee, char *lookfor)
{
    if (*searchee == 0) {
        if (*lookfor) {
            return 0;
        }
        return searchee;
    }
    while (*searchee) {
        s32 i = 0;
        while (1) {
            if (lookfor[i] == 0) {
                return searchee;
            }
            if (lookfor[i] != searchee[i]) {
                break;
            }
            i++;
        }
        searchee++;
    }
    return 0;
}
