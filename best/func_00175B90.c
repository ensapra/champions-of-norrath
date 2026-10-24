extern u32 D_001D0290[];
extern u32 D_001D0294[];

u32 func_00175B90(u32 n, s32 mode) {
    u32 v;
    u32 *p = D_001D0294;
    switch (mode) {
    case -1:
        v = *p - n;
        break;
    case 1:
        v = ((*p - n) >> 5) << 5;
        break;
    default:
        return 0;
    }
    *p = v;
    return (D_001D0294[0] < D_001D0290[0]) ? D_001D0290[0] : v;
}
