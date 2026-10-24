extern s32 D_001D0484[];
extern s32 D_001D0488[];
extern u32 D_001D0290[];
extern u32 D_001D0294[];
s32 DeleteSema(s32);

s32 func_0017A008(void){
    if(D_001D0484[0]>=0){
        DeleteSema(D_001D0484[0]);
        D_001D0484[0]=-1;
        DeleteSema(D_001D0488[0]);
    }
    return 1;
}

u32 func_00175BF0(u32 n) {
    u32 old = D_001D0290[0];
    u32 nw = ((old + n + 31) >> 5) << 5;
    D_001D0290[0] = nw;
    return (D_001D0294[0] < nw) ? D_001D0294[0] - n : old;
}

u32 func_00175B90(u32 n, s32 mode) {
    u32 v;
    if (mode == -1) {
        v = D_001D0294[0] - n;
    } else if (mode == 1) {
        v = ((D_001D0294[0] - n) >> 5) << 5;
    } else {
        return 0;
    }
    D_001D0294[0] = v;
    return (D_001D0294[0] < D_001D0290[0]) ? D_001D0290[0] : v;
}
