typedef struct { char pad[0x128]; void (*fn)(void *); } GuiSubFA0;
typedef struct { char pad0[0x4C]; GuiSubFA0 *sub; char pad1[0x918 - 0x50]; s32 val918; } GuiNodeFA0;
void func_0015BFA0(GuiNodeFA0 *p, s32 v) {
    if (p->val918 != v) {
        if (p->sub->fn)
            p->sub->fn(p);
    }
}

void func_00152C8C(s32, void *);
void func_0015BD0C(u8 *o, s32 a, s32 *x, s32 *y, s32 *z) {
    s16 buf[8];
    f32 f, t;
    func_00152C8C(a, buf);
    *x = buf[6];
    *y = buf[4];
    *z = buf[5];
    f = *(f32 *)(o + 0xCA4);
    t = *x; *x = t * f;
    t = *y; *y = t * f;
    t = *z; t *= f; *z = t;
}

typedef struct { u8 pad[0x1C]; s32 v; u8 pad2[4]; } Ent24;
s32 func_0015BCA8(u8 *o, s32 i) {
    s32 lim = *(s32 *)(o + 0x5AC) - (*(s32 *)(o + 0xCF0) + *(s32 *)(o + 0x8D4)) * 2;
    s32 v = *(s32 *)(o + 0xBF4) + (i >= *(s32 *)(o + 0xBF0) ? *(s32 *)(o + 0xB98) : (*(Ent24 **)(o + 0xB80))[i].v);
    s32 r = lim < v;
    if (v < 0) r = -1;
    return r;
}
