typedef struct Node7898 {
    struct Node7898 *next;
    volatile s32 id;
    s32 a;
    s32 b;
} Node7898;

extern volatile Node7898 *D_0110D880;

s32 func_001B7898(s32 arg0, s32 arg1, s32 arg2, Node7898 *arg3) {
    s32 (*cb)(s32, s32, s32, s32);
    s32 r;

    arg0 = arg0 & 0xFE;
    cb = (s32 (*)(s32, s32, s32, s32))arg3->a;
    r = cb(((s32)arg3 << 4) | arg0 | 1, arg1, arg2, arg3->b);
    if (r != 0) {
        return r;
    }
    {
        Node7898 *old = D_0110D880;
        D_0110D880 = arg3;
        arg3->next = old;
        arg3->id = 0;
    }
    return -1;
}
