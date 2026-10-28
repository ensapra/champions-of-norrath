typedef struct Node2DF258 {
    struct Node2DF258 *next;
    volatile s32 id;
    s32 a;
    s32 b;
} Node2DF258;

extern volatile Node2DF258 *D_008E4540;

s32 func_002DF258(s32 arg0, s32 arg1, s32 arg2, Node2DF258 *arg3) {
    s32 (*cb)(s32, s32, s32, s32);
    s32 r;

    arg0 = arg0 & 0xFE;
    cb = (s32 (*)(s32, s32, s32, s32))arg3->a;
    r = cb(((s32)arg3 << 4) | arg0 | 1, arg1, arg2, arg3->b);
    if (r != 0) {
        return r;
    }
    {
        Node2DF258 *old = D_008E4540;
        D_008E4540 = arg3;
        arg3->next = old;
        arg3->id = 0;
    }
    return -1;
}
