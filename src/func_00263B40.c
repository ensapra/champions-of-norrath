typedef struct { u8 pad[0x14]; f32 w; u8 pad2[4]; } Ent;
typedef struct {
    Ent e[128];
    s32 count;
    s32 pad[2];
    f32 total;
} Pool;
u32 D_00483E58;
s32 func_00263B40(Pool *p) {
    s32 i;
    f32 total = p->total;
    f32 r;
    D_00483E58 = D_00483E58 * 0x19660D + 0x3C6EF35F;
    r = (f32)(s32)(D_00483E58 >> 16) * (1.0f / 65536.0f) * total;
    for (i = 0; i < 128; i++) {
        r -= p->e[i].w;
        if (r < 0.0f) break;
    }
    if (i == 128) {
        p->count = 0;
        return 0;
    }
    p->count--;
    p->total = total - p->e[i].w;
    p->e[i].w = 0.0f;
    if (p->total <= p->e[i].w && p->count != 0)
        p->count = 0;
    return i;
}
