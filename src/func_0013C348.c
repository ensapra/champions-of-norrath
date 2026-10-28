extern s32 D_00484F44;
extern volatile f32 D_0047FCB0;
extern f32 D_0047FCB4;
extern f32 D_00484F24;
s32 func_0013C348(void *unused, s32 *in) {
    f32 target, delta, cur;
    if (D_00484F44 == 2) {
        target = in[2] * D_0047FCB0;
    } else {
        target = in[1] * D_0047FCB0;
    }
    delta = in[3] * D_0047FCB4;
    cur = D_00484F24 + delta;
    if ((delta > 0.0f && target <= cur) || (delta < 0.0f && cur <= target)) {
        D_00484F24 = target;
        return 1;
    }
    D_00484F24 = cur;
    return 0;
}
