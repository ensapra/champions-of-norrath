typedef struct Vtx16 { s16 x, y; u8 pad[0xC]; } Vtx16;

void func_00156D24(u8 *arg0) {
    u8 *base = arg0 + 0x620;
    Vtx16 *v = (Vtx16 *)(base + *(s32 *)(arg0 + 0x4EC) * 0x130 + 0x80);
    s32 x0 = *(s32 *)(arg0 + 0x4DC) + *(s32 *)(arg0 + 0x5A0) + *(s32 *)(arg0 + 0x5D4);
    s32 y0 = *(s32 *)(arg0 + 0x4E0) + *(s32 *)(arg0 + 0x4D4) + *(s32 *)(arg0 + 0x5D4);
    s32 x1 = x0 + *(s32 *)(arg0 + 0x5AC);
    s32 y1 = y0 + *(s32 *)(arg0 + 0x4D8);
    s32 off = *(s32 *)(base + 0x2B4);
    v[0].x = x0;
    v[0].y = y1;
    v[1].x = x0 + off;
    v[1].y = y1 - off;
    v[2].x = x0;
    v[2].y = y0;
    v[3].x = x0 + off;
    v[3].y = y0 + off;
    v[4].x = x1;
    v[4].y = y0;
    v[5].x = x1 - off;
    v[5].y = y0 + off;
    v[6].x = x1;
    v[6].y = y1;
    v[7].x = x1 - off;
    v[7].y = y1 - off;
    v[8].x = x0;
    v[8].y = y1;
    v[9].x = x0 + off;
    v[9].y = y1 - off;
}

void func_00156CAC(u8 *arg0) {
    u8 *base = arg0 + 0x620;
    u8 *q = base + *(s32 *)(arg0 + 0x4EC) * 0x130 + 0x10;
    q[0x60] = base[0x290];
    q[0x61] = base[0x291];
    q[0x62] = base[0x292];
    q[0x63] = *(s32 *)(arg0 + 0x618) * base[0x293] / 255;
}

s32 func_0014B41C(void *, s32);
void *func_0014D29C(void);
s32 D_0047FBF4;

void func_001574CC(u8 *arg0) {
    u8 *t = func_0014D29C();
    if (t != NULL && func_0014B41C(t, D_0047FBF4) != 0) {
        *(s32 *)(arg0 + 0x830) = *(s32 *)(t + 0x5A0) + *(s32 *)(t + 0x5D4);
        *(s32 *)(arg0 + 0x834) = *(s32 *)(t + 0x5A4) + *(s32 *)(t + 0x5D4);
        *(s32 *)(arg0 + 0x838) = *(s32 *)(t + 0x5A0) + *(s32 *)(t + 0x5D4) + *(s32 *)(t + 0x5AC);
        *(s32 *)(arg0 + 0x83C) = *(s32 *)(t + 0x5A4) + *(s32 *)(t + 0x5D4) + *(s32 *)(t + 0x5B0);
        *(s32 *)(arg0 + 0x98) = 2;
    }
}
