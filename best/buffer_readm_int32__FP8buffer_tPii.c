s32 buffer_readm__FP8buffer_tPvii(void *, void *, s32, s32);

void buffer_readm_int32__FP8buffer_tPii(void *a, void *b, s32 c) {
    volatile s32 r = buffer_readm__FP8buffer_tPvii(a, b, 4, c);
    (void)r;
}

void buffer_readm_int16__FP8buffer_tPsi(void *a, void *b, s32 c) {
    volatile s32 r = buffer_readm__FP8buffer_tPvii(a, b, 2, c);
    (void)r;
}
