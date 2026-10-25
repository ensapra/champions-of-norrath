typedef struct { f32 x; f32 y; f32 z; } V3;
extern s32 func_00153FA8(s32);
V3 func_00312FF0(s32 arg) {
    V3 v;
    do {
        v.x = 2.0f * ((f32)func_00153FA8(arg) * (1.0f / 65536.0f)) - 1.0f;
        v.y = 2.0f * ((f32)func_00153FA8(arg) * (1.0f / 65536.0f)) - 1.0f;
        v.z = 2.0f * ((f32)func_00153FA8(arg) * (1.0f / 65536.0f)) - 1.0f;
    } while (v.x * v.x + v.y * v.y + v.z * v.z > 1.0f);
    return v;
}
