typedef struct __attribute__((packed, aligned(4))) { u32 w[9]; } Copy36;
void *func_00159150(void *dst, f32 *vec, f32 *mat) {
    f32 scratch[9];
    s32 i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scratch[i * 3 + j] =
                vec[i * 3 + 0] * mat[j + 0] +
                vec[i * 3 + 1] * mat[j + 3] +
                vec[i * 3 + 2] * mat[j + 6];
        }
    }
    *(Copy36 *)dst = *(Copy36 *)scratch;
    return dst;
}
