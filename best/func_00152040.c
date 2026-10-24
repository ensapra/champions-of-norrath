typedef struct { u16 type; s16 pad2; s32 x4; s64 x8; s32 x10; s32 x14; } Ev152;
s32 func_00152008(Ev152 *e) {
    s32 x;
    if (e->type != 0x11) return 0;
    x = e->x14;
    if (x >= 4) return 0;
    if (x < 0) return 0;
    return 1;
}
s32 func_00152040(Ev152 *e) {
    s32 x;
    if (e->type != 0x11) return 0;
    x = e->x14;
    if (x >= 6) return 0;
    if (x < 4) return 0;
    return 1;
}
