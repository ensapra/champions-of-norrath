extern f32 func_0015A070(s16);
extern f32 func_0015A100(s16);

void func_00156EB8(f32 *m, s32 axis, s16 ang) {
    f32 c = func_0015A070(ang);
    f32 s = func_0015A100(ang);
    f32 ns, a0, a1, a2, a3, b0, b1, b2, b3;

    switch (axis) {
    case 0:
        a0 = m[4]; ns = -s; b0 = m[8]; a1 = m[5]; b1 = m[9];
        a2 = m[6]; b2 = m[10]; a3 = m[7]; b3 = m[11];
        m[4] = c * a0 + s * b0;
        m[5] = c * a1 + s * b1;
        m[6] = c * a2 + s * b2;
        m[8] = ns * a0 + c * b0;
        m[9] = ns * a1 + c * b1;
        m[10] = ns * a2 + c * b2;
        m[7] = c * a3 + s * b3;
        m[11] = ns * a3 + c * b3;
        break;
    case 1:
        a0 = m[0]; b0 = m[8]; a1 = m[1]; b1 = m[9];
        a2 = m[2]; b2 = m[10]; a3 = m[3]; b3 = m[11];
        m[0] = c * a0 - s * b0;
        m[1] = c * a1 - s * b1;
        m[2] = c * a2 - s * b2;
        m[8] = s * a0 + c * b0;
        m[9] = s * a1 + c * b1;
        m[10] = s * a2 + c * b2;
        m[3] = c * a3 - s * b3;
        m[11] = s * a3 + c * b3;
        break;
    case 2:
        a0 = m[0]; ns = -s; b0 = m[4]; a1 = m[1]; b1 = m[5];
        a2 = m[2]; b2 = m[6]; a3 = m[3]; b3 = m[7];
        m[0] = c * a0 + s * b0;
        m[1] = c * a1 + s * b1;
        m[2] = c * a2 + s * b2;
        m[4] = ns * a0 + c * b0;
        m[5] = ns * a1 + c * b1;
        m[6] = ns * a2 + c * b2;
        m[3] = c * a3 + s * b3;
        m[7] = ns * a3 + c * b3;
        break;
    }
}
