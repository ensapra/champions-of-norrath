extern s32 _S_chunk_alloc__t24__default_alloc_template2b0i0UiRi(s32, s32 *);

extern s32 D_011F290C[];

s32 _S_refill__t24__default_alloc_template2b0i0Ui(s32 arg0) {
    s32 sp0;
    s32 r;
    s32 *cur;
    s32 remaining;
    s32 *next;
    s32 counter;
    sp0 = 0x14;
    r = _S_chunk_alloc__t24__default_alloc_template2b0i0UiRi(arg0, &sp0);
    if (sp0 != 1) {
        cur = (s32 *)((char *)r + arg0);
        remaining = sp0 - 1;
        D_011F290C[(arg0 + 7) >> 3] = (s32)((char *)r + arg0);
        next = (s32 *)((char *)cur + arg0);
        if (remaining != 1) {
            counter = 1;
            do {
                counter = counter + 1;
                *cur = (s32)next;
                cur = next;
                next = (s32 *)((char *)cur + arg0);
            } while (remaining != counter);
        }
        *cur = 0;
    }
    return r;
}
