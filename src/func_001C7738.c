extern s32 D_0034B7B8[][7];
s32 func_001C7738(s32 a, s32 b) {
    s32 n = 0;
    s32 i;
    for (i = 0; i < 7; i++) {
        if (D_0034B7B8[a][i] != 0) {
            if (i == 5 && D_0034B7B8[a][2] != 0) continue;
            if (i == 4 && D_0034B7B8[a][1] != 0) continue;
            if (i == 6 && D_0034B7B8[a][3] != 0) continue;
            if (b != i) n++;
        }
    }
    return n;
}
