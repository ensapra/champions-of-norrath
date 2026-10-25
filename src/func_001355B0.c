u32 func_001355B0(s8 *p, s32 n){
    u32 v = 0x217;
    s32 i;
    for (i = 0; i < n; i++) {
        if (i & 1) v += (p[i] * 3) ^ 0x30E15F;
        else v -= (p[i] & 0x148F37) * (i & 7);
        v += p[0];
    }
    return v & 0xFFFF;
}
