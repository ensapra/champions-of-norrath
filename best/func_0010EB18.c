extern char D_00408600[];
typedef struct { f32 x, y, z; } Pt3;
s32 D_00484538;
s8 func_0010EB18(Pt3 *pp, f32 best) {
    Pt3 p;
    Pt3 *lp;
    s32 n;
    s32 i;
    s32 idx = -1;
    char *base;
    char *q;
    s32 *e;
    p = *pp;
    lp = &p;
    n = D_00484538;
    if (n > 0) {
        base = D_00408600;
        q = base + 0x5570;
        for (i = 0; i < n; i++) {
            e = *(s32 **)q;
            q += 0x5DB0;
            if (e != 0 && !(e[3] & 8)) {
                f32 *pos = (f32 *)(e + 4);
                f32 dx = lp->x - pos[0];
                f32 dy = lp->y - pos[1];
                f32 dz = lp->z - pos[2];
                f32 d = dx * dx + dy * dy + dz * dz;
                if (d < best) {
                    best = d;
                    idx = i;
                }
            }
        }
    }
    return idx;
}
