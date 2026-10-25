typedef struct __attribute__((packed, aligned(4))) { u32 w[12]; } Copy48_156;
void *func_00156230(void *dst, f32 *vec, f32 *mat) {
    f32 scratch[12];
    s32 i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scratch[i * 3 + j] =
                vec[i * 3 + 0] * mat[j + 0] +
                vec[i * 3 + 1] * mat[j + 3] +
                vec[i * 3 + 2] * mat[j + 6];
        }
    }
    for (j = 0; j < 3; j++) {
        scratch[i * 3 + j] = mat[9 + j];
    }
    *(Copy48_156 *)dst = *(Copy48_156 *)scratch;
    return dst;
}
