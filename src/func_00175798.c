typedef struct {
    u8 pad0[0x20];
    s16 x;
    s16 pad22;
    s16 y;
    s16 pad26;
    s32 flag;
} S1D0228;

extern s32 D_001D0220[];
extern s32 D_001D0224[];
extern S1D0228 D_001D0228;
extern s32 D_001D0250[];

s32 func_00175648(void);
s32 ovl_ntgui2_func_0018E4A0(s32);
s32 func_001754C8(s32, s32, s32);
void func_001755A8(s32, s32, s32, s16, s16, s16);

s32 func_00175798(s32 a, s32 b) {
    s32 *cnt = D_001D0220;
    s32 *flag = D_001D0224;
    s32 r;
    (*cnt)++;
    D_001D0228.flag = *flag = (func_00175648() == 0);
    r = func_001754C8(a, b, *cnt);
    func_001755A8(a, b, *cnt, D_001D0228.x, D_001D0228.y, *flag);
    return r;
}

s32 func_001756E0(s32 a, s32 b) {
    s32 *cnt = D_001D0220;
    s32 *flag = D_001D0224;
    s32 r;
    (*cnt)++;
    D_001D0228.flag = *flag = (ovl_ntgui2_func_0018E4A0(0) == 0);
    r = func_001754C8(a, b, *cnt);
    func_001755A8(a, b, *cnt, D_001D0228.x, D_001D0228.y, *flag);
    return r;
}

void func_00175690(void) {
    s32 *cnt = D_001D0220;
    s32 *flag = D_001D0224;
    (*cnt)++;
    D_001D0250[0] = *flag = (ovl_ntgui2_func_0018E4A0(0) == 0);
}
