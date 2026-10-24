extern u8 D_010EE181;
extern u8 D_010EE1C1;
s32 func_0017F290(void) {
    if (D_010EE1C1 != D_010EE181)
        return -1;
    return 0;
}

typedef struct {
    u8 pad0[0xC];
    u32 mode;
    u8 pad10[4];
    s32 x14;
    u8 pad18[8];
    s16 x20;
    u8 pad22[0xA];
    s32 x2C;
    s32 x30;
    u8 pad34[4];
} Ent17F;
typedef struct {
    s32 count;
    Ent17F *ents;
    u8 pad8[8];
    s32 x10;
} G17F;
extern G17F D_010EE080;
s32 func_0017F778(s32 i, u32 m) {
    G17F *g = &D_010EE080;
    Ent17F *e;
    if (i >= g->count)
        return -11;
    if (m >= 2)
        return -12;
    e = &g->ents[i];
    if (m != e->mode) {
        e->x14 = 0;
        e->x2C = 0;
        e->x30 = 0;
        g->x10 = 0;
        e->x20 = 0;
    }
    e->mode = m;
    return 0;
}

extern s32 *D_00480430;
extern u8 jtbl_004C006C[];
extern u8 D_00508021[];
extern s32 func_001A1568(void *, s32, void *);
extern s32 func_001A2660(s32 *, s32, s32);
void func_0017F8D0(void) {
    if (D_00480430 == 0)
        func_001A1568(jtbl_004C006C + 0xD56C, 0xEC, D_00508021 + 0x417);
    func_001A2660(D_00480430, 0, 0x590);
}

s32 func_0017F910(void) {
    return D_00480430[1];
}
