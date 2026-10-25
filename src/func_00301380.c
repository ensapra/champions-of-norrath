/* identical to func_001A1830 (matched), with its names changed by decompdecomp */
typedef struct mchunk { u32 prev_size; u32 size; struct mchunk *fd; struct mchunk *bk; } *mchunkptr;
typedef unsigned int size_t;
void *func_00301840(void *r, size_t n);
void func_00302270(void *r);
void func_003022F0(void *r);
void func_00300608(void *r, void *m);
unsigned long func_002F94E0(unsigned long a, unsigned long b);

#define chunksize(p) ((p)->size & ~3)
#define long_sub_size_t(x, y) ((x) < (y) ? -(long)((y) - (x)) : (long)((x) - (y)))

void *func_00301380(void *reent, size_t alignment, size_t bytes) {
    size_t nb;
    char *m;
    mchunkptr p;
    char *brk;
    mchunkptr newp;
    size_t newsize;
    size_t leadsize;
    mchunkptr remainder;
    long remainder_size;

    if (alignment <= 16) return func_00301840(reent, bytes);
    if (alignment < 16) alignment = 16;

    nb = (bytes + 4 + 15 < 16 + 15) ? 16 : ((bytes + 4 + 15) & ~15);
    m = (char *)func_00301840(reent, nb + alignment + 16);
    if (m == 0) return 0;

    func_00302270(reent);
    p = (mchunkptr)(m - 8);

    if (func_002F94E0((unsigned long)m, alignment) != 0) {
        brk = (char *)(((unsigned long)(m + alignment - 1)) & -alignment) - 8;
        if ((long)(brk - (char *)p) < 16) brk = brk + alignment;
        newp = (mchunkptr)brk;
        leadsize = brk - (char *)p;
        newsize = chunksize(p) - leadsize;
        newp->size = newsize | 1;
        ((mchunkptr)((char *)newp + newsize))->size |= 1;
        p->size = (p->size & 1) | leadsize;
        func_00300608(reent, (char *)p + 8);
        p = newp;
    }

    remainder_size = long_sub_size_t(chunksize(p), nb);
    if (remainder_size >= 16) {
        remainder = (mchunkptr)((char *)p + nb);
        remainder->size = remainder_size | 1;
        p->size = (p->size & 1) | nb;
        func_00300608(reent, (char *)remainder + 8);
    }
    func_003022F0(reent);
    return (char *)p + 8;
}
