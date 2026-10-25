typedef struct __attribute__((packed, aligned(4))) { u32 w[12]; } Copy48_156;
void *func_001564B8(void *dst, f32 *vec, f32 *mat) {
    f32 scratch[12];
    f32 *v0 = vec;
    s32 i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scratch[i * 3 + j] =
                vec[0] * mat[j + 0] +
                vec[1] * mat[j + 3] +
                vec[2] * mat[j + 6];
        }
        vec += 3;
    }
    for (j = 0; j < 3; j++) {
        scratch[i * 3 + j] =
            v0[i * 3 + 0] * mat[j + 0] +
            v0[i * 3 + 1] * mat[j + 3] +
            v0[i * 3 + 2] * mat[j + 6] + mat[9 + j];
    }
    *(Copy48_156 *)dst = *(Copy48_156 *)scratch;
    return dst;
}
