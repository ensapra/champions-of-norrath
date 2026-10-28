extern s32 D_004844A8;
extern s32 D_0048508C;
extern s32 D_00486B94;
s32 func_00135BB8(s32, s32, s32 *);
void func_00135DE8(s32, s32 *, s32, s32, s32);
s32 func_001D3E88(s32 a) {
    s32 l[2];
    s32 h;
    if (a == 0) return -1;
    h = D_00486B94;
    if (h == 0) return -1;
    l[1] = func_00135BB8(h, a, &l[0]);
    if (l[1] != 0) {
        if (D_0048508C < D_004844A8) D_0048508C = D_004844A8 + 0x14;
        return -1;
    }
    func_00135DE8(h, &l[1], l[0], 0, 0);
    return l[1];
}
