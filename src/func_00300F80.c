struct __sbuf { u8 *_base; s32 _size; };
struct _reent_s { s32 _errno; char pad[0x34]; s32 __sdidinit; };
typedef struct __sFILE {
    u8 *_p;
    s32 _r;
    s32 _w;
    u16 _flags;
    s16 _file;
    struct __sbuf _bf;
    s32 _lbfsize;
    void *_cookie;
    s32 (*_read)(void *, char *, s32);
    s32 (*_write)(void *, const char *, s32);
    long (*_seek)(void *, long, s32);
    s32 (*_close)(void *);
    struct __sbuf _ub;
    u8 *_up;
    s32 _ur;
    u8 _ubuf[3];
    u8 _nbuf[1];
    struct __sbuf _lb;
    s32 _blksize;
    s32 _offset;
    struct _reent_s *_data;
} FILE_;

extern struct _reent_s *D_00448480[];
void func_003001A8(struct _reent_s *);
void func_002FFDE8(FILE_ *);

long func_00300F80(FILE_ *fp) {
    long pos;

    if (fp->_data == 0) fp->_data = D_00448480[0];
    do { if (!fp->_data->__sdidinit) func_003001A8(fp->_data); } while (0);

    if (fp->_seek == 0) {
        fp->_data->_errno = 29;
        return -1L;
    }

    func_002FFDE8(fp);

    if (fp->_flags & 0x1000) {
        pos = fp->_offset;
    } else {
        pos = (*fp->_seek)(fp->_cookie, (long)0, 1);
        if (pos == -1L)
            return pos;
    }
    if (fp->_flags & 4) {
        pos -= fp->_r;
        if (fp->_ub._base != 0)
            pos -= fp->_ur;
    } else if ((fp->_flags & 8) && fp->_p != 0) {
        pos += fp->_p - fp->_bf._base;
    }
    return pos;
}
