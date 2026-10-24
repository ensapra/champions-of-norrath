void func_00104360(s32 type, f32 *c) {
    switch (type) {
    case 0:
    default:
        c[0] = 255.0f;
        c[1] = 255.0f;
        c[2] = 255.0f;
        c[3] = 255.0f;
        break;
    case 1:
        c[0] = 240.0f;
        c[1] = 255.0f;
        c[2] = 255.0f;
        c[3] = 255.0f;
        break;
    case 2:
        c[0] = 0.0f;
        c[1] = 0.0f;
        c[2] = 0.0f;
        c[3] = 255.0f;
        break;
    case 3:
        c[0] = 255.0f;
        c[1] = 255.0f;
        c[2] = 240.0f;
        c[3] = 255.0f;
        break;
    }
}
