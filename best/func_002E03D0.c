extern s32 sceSifDmaStat_2(s32);
extern s32 sceSifSetDma_2(void *, s32, s32);
extern s32 D_008E59C0[];
s32 func_002E03D0(s32 a, s32 c, s32 b, s32 mode) {
    s32 result;
    if (mode == 0) return -1;
    D_008E59C0[0]=a; D_008E59C0[1]=b; D_008E59C0[2]=c; D_008E59C0[3]=0;
    result=sceSifSetDma_2(D_008E59C0,1,b);
    if (result == 0) return -1;
    if (mode == 1) {
        do { } while (sceSifDmaStat_2(result) >= 0);
    }
    return 0;
}
