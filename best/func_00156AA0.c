f32 func_0015A070(s16);
f32 func_0015A100(s16);
void func_00156AA0(f32 *m, s32 axis, s16 ang) {
    f32 s = func_0015A070(ang);
    f32 c = func_0015A100(ang);
    f32 a, b;
    switch (axis) {
    case 0:
        a = m[1]; b = m[2];
        m[1] = s * a - c * b;
        m[2] = c * a + s * b;
        a = m[4]; b = m[5];
        m[4] = s * a - c * b;
        m[5] = c * a + s * b;
        a = m[7]; b = m[8];
        m[7] = s * a - c * b;
        m[8] = c * a + s * b;
        break;
    case 1:
        a = m[0]; b = m[2];
        m[0] = s * a + c * b;
        m[2] = -c * a + s * b;
        a = m[3]; b = m[5];
        m[3] = s * a + c * b;
        m[5] = -c * a + s * b;
        a = m[6]; b = m[8];
        m[6] = s * a + c * b;
        m[8] = -c * a + s * b;
        break;
    case 2:
        a = m[0]; b = m[1];
        m[0] = s * a - c * b;
        m[1] = c * a + s * b;
        a = m[3]; b = m[4];
        m[3] = s * a - c * b;
        m[4] = c * a + s * b;
        a = m[6]; b = m[7];
        m[6] = s * a - c * b;
        m[7] = c * a + s * b;
        break;
    }
}
