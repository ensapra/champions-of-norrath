typedef struct { char pad[0x1800]; s32 x0; s32 x1; s32 y0; s32 y1; } S66;

s32 func_00266788(S66 *a, s32 x, s32 y) {
    while (x < a->x0) {
        if (a->x1 - a->x0 == 0x20) return 1;
        a->x0--;
    }
    while (x >= a->x1) {
        if (a->x1 - a->x0 == 0x20) return 1;
        a->x1++;
    }
    while (y < a->y0) {
        if (a->y1 - a->y0 == 0x20) return 1;
        a->y0--;
    }
    while (y >= a->y1) {
        if (a->y1 - a->y0 == 0x20) return 1;
        a->y1++;
    }
    return 0;
}
