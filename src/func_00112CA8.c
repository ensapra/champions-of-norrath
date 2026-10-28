typedef struct V3 { f32 x, y, z; } V3;
extern f32 func_0015A070(s16);
extern f32 func_0015A100(s16);
extern f32 func_0017BF90(s32, V3 *, f32, V3 *, s32, s32, s32, s32);
extern s32 D_004844A0;

f32 func_00112CA8(s32 arg0, V3 *arg1, s16 ang, f32 r) {
    V3 loc;
    V3 v;
    V3 pos;
    f32 res;
    f32 c = 1.0f;
    loc = *arg1;
    v.x = func_0015A070(ang) * r;
    v.y = func_0015A100(ang) * r;
    v.z = 0;
    pos = loc;
    pos.z += 13.0f;
    res = func_0017BF90(D_004844A0, &pos, r, &v, arg0, 0, 3, 0);
    if (!(res < 0.0f)) {
        if (!(res > 1.0f)) {
            c = res;
        }
    }
    return c;
}
