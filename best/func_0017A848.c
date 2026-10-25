s32 PollSema(s32); s32 SignalSema(s32); s32 WaitSema(s32);
extern s32 D_001D0480[], D_001D0484[], D_001D0488[];
extern s32 D_010ECC00[];
s32 func_0017A848(s32 a, s32 *b, s32 *c) {
    s32 r;
    if (D_001D0480[0] == 0) return -1;
    r = 0;
    if (PollSema(D_001D0488[0]) < 0) r = 1;
    if (a == 0 && r) {
        r = 0;
        WaitSema(D_001D0488[0]);
    }
    r = r == 0;
    if (b) *b = D_001D0480[0];
    if (r) {
        D_001D0480[0] = 0;
        if (c) *c = D_010ECC00[0];
        SignalSema(D_001D0484[0]);
    }
    return r;
}
