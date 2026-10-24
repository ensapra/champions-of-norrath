extern s32 D_010F4480[];
void *func_001A2660(void *, s32, s32);

void func_00185950(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h) {
    s32 *p = D_010F4480;
    func_001A2660(p, 0, 0x24);
    p[1] = a;
    p[2] = b;
    p[3] = e;
    p[4] = f;
    p[5] = c;
    p[6] = d;
    p[7] = g;
    p[8] = h;
}
