typedef struct { f32 x, y, z; } V3;
extern s32 D_004844A4;
extern f32 D_0048275C, D_00482760, D_00482764;
extern s32 func_0015E948(void *);
extern void func_00180DA0();
typedef struct { u8 pad[0x10]; V3 p; u8 p2[0x20-0x1C-0]; f32 f20; } Cam;
void func_002958C0(u8 *self, V3 *arg1) {
    V3 base;
    V3 d;
    V3 a, b;
    base = *arg1;
    if (D_004844A4 > *(s32 *)(self + 0x1A4)) {
        if (self) {
            /* virtual call, see asm */
        }
        return;
    }
    {
        f32 *sc = (f32 *)(self + 0x1AC);
        s32 i, n;
        n = (s32)(*sc * D_0048275C * (*sc * D_00482760));
        for (i = 0; i < n; i++) {
            do {
                a.x = (f32)func_0015E948(self) * (1.0f / 65536.0f) * 2.0f - 1.0f;
                a.y = (f32)func_0015E948(self) * (1.0f / 65536.0f) * 2.0f - 1.0f;
                a.z = (f32)func_0015E948(self) * (1.0f / 65536.0f) * 2.0f - 1.0f;
            } while (a.x * a.x + a.y * a.y + a.z * a.z > 1.0f);
            a.y *= D_00482764;
            func_00180DA0();
        }
    }
}
