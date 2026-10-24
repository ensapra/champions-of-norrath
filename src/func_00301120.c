s64 D_00486DC8;
extern char D_00483918[], D_00483920[], D_00483928[];
extern s32 D_008EADB8[], D_008EAE78[], D_008EB248[];
void func_00312DD0(void);
void func_002FD348(s32 *, char *, void *);

s32 *func_0030DE38(void)
{
    if (!D_008EAE78[0]) {
        if (!D_008EB248[0]) {
            if (D_008EADB8[0])
                goto ready;
            {
                func_00312DD0();
                func_002FD348(D_008EADB8, D_00483918, &D_00486DC8);
            }
        ready:
            func_002FD348(D_008EB248, D_00483920, D_008EADB8);
        }
        func_002FD348(D_008EAE78, D_00483928, D_008EB248);
    }
    return D_008EAE78;
}

typedef struct {
    char *p;
    s32 r, w;
    u16 flags;
    u16 fd;
    char *base;
    s32 size;
    char pad[0x3c];
    void *reent;
    char tail[8];
} Stream;

s32 func_00306A60(void *, const char *, void *);

s32 func_00303CF8(void *reent, char *buf, u32 n, const char *fmt, ...)
{
    Stream f;
    void *ap = (char *)__builtin_next_arg(fmt) - 32;
    s32 r;

    f.flags = 0x208;
    f.base = f.p = buf;
    f.size = f.w = n ? n - 1 : 0;
    f.reent = reent;
    r = func_00306A60(&f, fmt, ap);
    if (n)
        *f.p = 0;
    return r;
}

typedef struct {
    void *base;
    u32 len;
} IoVec;

typedef struct {
    IoVec *iov;
    s32 iovcnt;
    u32 resid;
} Uio;

s32 func_0030AA68(void *, Uio *);

u32 func_00301120(void *buf, u32 size, u32 count, void *fp)
{
    u32 n;
    Uio uio;
    IoVec iov;

    iov.base = buf;
    uio.resid = iov.len = n = count * size;
    uio.iov = &iov;
    uio.iovcnt = 1;
    if (func_0030AA68(fp, &uio) == 0)
        return count;
    return (n - uio.resid) / size;
}

typedef struct {
    s16 delta;
    s16 index;
    s32 (*fn)(void *, ...);
} VEnt;

typedef struct {
    s32 pad0;
    VEnt *vt;
} VObj;

s32 func_0031AC20(VObj *obj, s32 a1, s32 a2, s32 a3, s32 a4)
{
    VEnt *e;

    if (a1 >= 0)
        return (a4 - a3 == a1) ? 6 : 1;
    if (a1 == -2)
        return 1;
    e = &obj->vt[4];
    return e->fn((char *)obj + e->delta, a1, a2, a3, a4);
}
