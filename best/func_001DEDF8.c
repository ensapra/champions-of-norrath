struct Vec3 { f32 x, y, z; Vec3() {} Vec3(f32 a, f32 b, f32 c) { x = a; y = b; z = c; }
  void operator+=(const Vec3 &o) { x += o.x; y += o.y; z += o.z; } };
extern "C" {
void func_001411F0(void *, Vec3, s32, s32);
void func_00143830(void *);
void *func_001441B8(s32);
f32 func_0015A070(s16);
f32 func_0015A100(s16);
void func_0016C238(s32, s32, Vec3 *, s16, s32, Vec3 *, Vec3 *, s32, f32);
s32 func_0016CD50(s32, ...);
extern char D_0044A660[];

void func_001DEDF8(s32 a0, s32 a1, Vec3 pos, s16 ang, f32 f12, f32 scale) {
    s32 i = 20;
    s32 idx = 0;
    s32 step = func_0016CD50(a0, a1) / 20;
    do {
        Vec3 p, q;
        idx = (idx + step) % func_0016CD50(a0);
        func_0016C238(a0, a1, &pos, ang, idx, &p, &q, 0, f12);
        if (scale != 0.0f) {
            f32 s = func_0015A070(ang) * scale;
            f32 c = func_0015A100(ang) * scale;
            p += Vec3(s, c, 0.0f);
        }
        {
            char *o = (char *)func_001441B8(0x50);
            if (o) {
                func_001411F0(o, p, 0, 0);
                *(s16 *)(o + 0x4C) = 1;
                *(char **)(o + 0x48) = D_0044A660;
                *(s32 *)(o + 0xC) = 9;
                *(s16 *)(o + 0x38) = 0;
                func_00143830(o);
            }
        }
    } while (--i > 0);
}
}
