extern const f32 D_004821B0;
void func_00272BB8(u8 *p) {
    volatile f32 b[4];
    volatile f32 a[3];
    f32 *v = (f32 *)(p + 0x7D4);
    f32 *q = (f32 *)(p + 0x4A4);
    f32 s, x, y, z, bx, by, bz, zero;
    if (*(s32 *)(p + 0x874) == 0) {
        s = *(f32 *)(p + 0x2A0);
        x = v[0] * s; y = v[1] * s; z = v[2] * s;
        a[0] = x; a[1] = y; a[2] = z;
        bx = x * D_004821B0; by = y * D_004821B0; bz = z * D_004821B0;
        b[1] = by;
        *(s32 *)(p + 0x874) = 1;
        zero = 0.0f;
        q[1] -= by; q[2] -= bz; b[2] = bz; b[0] = bx; q[0] -= bx;
        *(f32 *)(p + 0x7DC) = zero;
        {
            f32 t0 = *(f32 *)(p + 0x7C8) * *(f32 *)(p + 0x4C8);
            f32 t1 = *(f32 *)(p + 0x7CC) * *(f32 *)(p + 0x4CC);
            f32 t2 = *(f32 *)(p + 0x7D0) * *(f32 *)(p + 0x4D0);
            *(f32 *)(p + 0x7D0) = zero; *(f32 *)(p + 0x7CC) = zero; *(f32 *)(p + 0x7C8) = zero;
            *(f32 *)(p + 0x4B0) -= t0 * D_004821B0;
            *(f32 *)(p + 0x4B4) -= t1 * D_004821B0;
            *(f32 *)(p + 0x4B8) -= t2 * D_004821B0;
        }
        *(f32 *)(p + 0x7D8) = zero;
        v[0] = zero;
    }
}
