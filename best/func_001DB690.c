struct Vec3 { f32 x, y, z; Vec3() {} };
extern "C" {
s32 func_001D0E08(Vec3, s32);
s32 func_0016CD50(s32);
void func_0016C238(s32, s32, Vec3, s16, s32, f32 *, void *, s32, f32);
f32 func_0015A070(s16);
f32 func_0015A100(s16);
void func_00180DA0(void *, f32 *, f32 *, f32);
extern char D_007D6290[];
void func_001DB690(s32 a0, s32 a1, Vec3 pos, s16 a3, f32 fa, f32 fb);
}

void func_001DB690(s32 a0, s32 a1, Vec3 pos, s16 a3, f32 fa, f32 fb) {
    f32 v10[3];
    f32 v20[4];
    f32 v30[3];
    f32 v40[3];
    f32 z = 0.0f;
    s32 i;
    if (!func_001D0E08(pos, a1)) return;
    if (!a0) return;
    i = func_0016CD50(a0) - 1;
    if (i == 0) return;
    if (i >= 0) {
        do {
            func_0016C238(a0, a1, pos, a3, i, v10, v20, 0, fa);
            i -= 6;
            v30[0] = z;
            v30[1] = z;
            v30[2] = z;
            if (fb != z) {
                v40[0] = func_0015A070(a3) * fb;
                v40[1] = func_0015A100(a3) * fb;
                v40[2] = 0.0f;
                v10[0] += v40[0];
                v10[1] += v40[1];
                v10[2] += v40[2];
            }
            func_00180DA0(D_007D6290, v10, v30, 0.0f);
        } while (i >= 0);
    }
}
