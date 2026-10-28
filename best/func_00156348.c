typedef struct __attribute__((packed, aligned(4))) { u32 w[16]; } Copy64_156;
void *func_00156348(void *dst, f32 *vec, f32 *mat) {
    f32 scratch[16];
    s32 i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            scratch[i * 4 + j] =
                vec[i * 3 + 0] * mat[j + 0] +
                vec[i * 3 + 1] * mat[j + 4] +
                vec[i * 3 + 2] * mat[j + 8];
        }
    }
    for (j = 0; j < 4; j++) {
        scratch[i * 4 + j] =
            vec[i * 3 + 0] * mat[j + 0] +
            vec[i * 3 + 1] * mat[j + 4] +
            vec[i * 3 + 2] * mat[j + 8] +
            mat[j + 12];
    }
    *(Copy64_156 *)dst = *(Copy64_156 *)scratch;
    return dst;
}
