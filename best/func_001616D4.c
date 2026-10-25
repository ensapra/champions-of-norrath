extern f32 D_0047FA04;

typedef struct {
    char pad[0x10];
    s16 x;
    s16 y;
    char pad2[0xC];
} Vtx20;

void func_001616D4(char *arg0) {
    char *base = arg0 + 0x910;
    s32 w = *(s32 *)(arg0 + 0x5B0);
    s32 half = w >> 1;
    s32 x0, x1, y0, ytop, ymid, ybot;
    f32 f;
    Vtx20 *v;

    f = (f32)(w * *(s32 *)(base + 0x33B0)) * D_0047FA04;
    x1 = *(s32 *)(arg0 + 0x5AC) - half;
    if (*(s32 *)(arg0 + 0x5AC) < half) x1 = 0;
    x0 = *(s32 *)(arg0 + 0x5A0) + *(s32 *)(arg0 + 0x5D4);
    x0 += half;
    x1 = x0 + x1;
    x1 = x1 - (w >> 1);
    if (x1 < x0) x1 = x0;
    base += *(s32 *)(arg0 + 0x4EC) * 0x19C0;
    y0 = *(s32 *)(arg0 + 0x5A4) + *(s32 *)(arg0 + 0x5D4);
    x0 += *(s32 *)(arg0 + 0x4DC);
    x1 += *(s32 *)(arg0 + 0x4DC);
    ybot = y0 + w + *(s32 *)(arg0 + 0x4E0);
    ymid = y0 + (s32)f + *(s32 *)(arg0 + 0x4E0);
    ytop = y0 + *(s32 *)(arg0 + 0x4E0);
    v = (Vtx20 *)(base + 0x70);
    v->x = x0;
    v->y = ytop;
    v = (Vtx20 *)(base + 0x90);
    v->y = ytop;
    v->x = x1;
    v = (Vtx20 *)(base + 0xB0);
    v->y = ymid;
    v->x = x0;
    v = (Vtx20 *)(base + 0xD0);
    v->y = ymid;
    v->x = x1;
    v = (Vtx20 *)(base + 0xF0);
    v->x = x0;
    v->y = ybot;
    v = (Vtx20 *)(base + 0x110);
    v->y = ybot;
    v->x = x1;
}
