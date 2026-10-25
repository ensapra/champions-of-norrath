typedef struct __attribute__((packed, aligned(4))) { u32 w[16]; } Copy64_159;
void *func_00159220(void *dst, f32 *vec, f32 *mat) {
    f32 scratch[16];
    s32 i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scratch[i * 4 + j] =
                vec[i * 4 + 0] * mat[j + 0] +
                vec[i * 4 + 1] * mat[j + 4] +
                vec[i * 4 + 2] * mat[j + 8] +
                vec[i * 4 + 3] * mat[j + 12];
        }
    }
    *(Copy64_159 *)dst = *(Copy64_159 *)scratch;
    return dst;
}
