extern s32 D_00484AFC;
extern s32 func_0016EC08(s32, s32, s32, s32, s32, s32);
s32 func_001C7DB8(s32 a) {
    s32 v;
    v = D_00484AFC;
    v += a;
    if (v < 0) {
        v = 0;
        D_00484AFC = 0;
    } else if (v > 0x80) {
        v = 0x80;
        D_00484AFC = v;
    } else {
        D_00484AFC = v;
    }
    func_0016EC08(0, 0, 0x280, 0x1C0, 6, v << 24);
    return D_00484AFC;
}
