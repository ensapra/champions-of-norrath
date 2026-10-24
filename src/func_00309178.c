extern char D_00460DD8[];
extern char D_00460DE8[];
extern s32 D_008EAB78[];
extern s32 D_008EABD8[];
extern s32 D_008EB008[];
void func_002FD348(s32 *, char *, s32 *);
void func_0030D510(void);
s32 *func_0030EE98(void)
{
  s32 *p_outer = D_008EB008;
  int new_var;
  s32 *p_inner;
  if ((*p_outer) == 0)
  {
    p_inner = D_008EABD8;
    new_var = 0;
    if ((*p_inner) == new_var)
    {
      func_0030D510();
      func_002FD348(p_inner, D_00460DD8, D_008EAB78);
    }
    func_002FD348(p_outer, D_00460DE8, p_inner);
  }
  return D_008EB008;
}

typedef struct {
    u8 *_base;
    s32 _size;
} SBuf;

typedef struct {
    u8 *_p;
    s32 _r;
    s32 _w;
    s16 _flags;
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
    void *_data;
} SFILE;

extern void *D_00448480[];
extern s32 func_00306A60(SFILE *, const char *, char *);

s32 func_003091F8(void *ptr, char *str, const char *fmt, char *ap) {
    SFILE f;
    s32 ret;
    f._flags = 0x208;
    f._bf._base = f._p = (u8 *)str;
    f._bf._size = f._w = 0x7FFFFFFF;
    f._data = ptr;
    ret = func_00306A60(&f, fmt, ap);
    *f._p = 0;
    return ret;
}

s32 func_003091A0(char *str, const char *fmt, char *ap) {
    SFILE f;
    s32 ret;
    f._flags = 0x208;
    f._bf._base = f._p = (u8 *)str;
    f._bf._size = f._w = 0x7FFFFFFF;
    f._data = D_00448480[0];
    ret = func_00306A60(&f, fmt, ap);
    *f._p = 0;
    return ret;
}

s32 func_00309178(const char *fmt, char *ap) {
    return func_00306A60(((SFILE **)D_00448480[0])[2], fmt, ap);
}
