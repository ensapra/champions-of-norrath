/* identical to func_00191268 (matched), with its names changed by decompdecomp */
typedef struct { s32 w[4]; } Qw;
typedef struct {
    u32 *cur;
    s32 pad;
    Qw *tag;
} PktBuf;

u32 *func_00191678(PktBuf *b)
{
    u32 *p = b->cur;
    Qw *t = b->tag;

    while ((u32)p & 0xC) {
        *p++ = 0;
    }
    if (t) {
        s32 n = (Qw *)p - t - 1;
        t->w[0] += n;
    }
    b->cur = p;
    b->tag = 0;
    return p;
}
