typedef struct { u8 pad[0x10]; s16 x; s16 y; u8 pad2[0xC]; } Pt20;
typedef struct { Pt20 pt[4]; u8 pad[0xF0 - 0x80]; } Ent159;
s32 func_0014CE60(s32, s32, s32);
s32 func_00165B8C(s32, s32, s32);
void func_00159EC8(u8 *o);

void func_00159E18(u8 *o) {
    Ent159 *e = (Ent159 *)(o + 0x980) + *(s32 *)(o + 0x4EC);
    Pt20 *p;
    u16 c = *(u16 *)(o + 0x5D4);
    s32 x0 = *(s32 *)(o + 0x4DC) + *(s32 *)(o + 0x5A0);
    s32 xb = *(s32 *)(o + 0x8D4) + *(s32 *)(o + 0xCF0);
    s32 ya = *(s32 *)(o + 0x8D4) + *(s32 *)(o + 0xCF4);
    s32 y0, yb, xa1, ya1, xa2, ya2;
    xa1 = xb + *(s32 *)(o + 0xBF8);
    x0 = c + x0;
    y0 = *(s32 *)(o + 0x4E0) + *(s32 *)(o + 0x4D4);
    yb = *(s32 *)(o + 0x5B0) - *(s32 *)(o + 0x8D4);
    xa1 = x0 + xa1;
    ya1 = y0 + (c + ya);
    xa2 = x0 + (xb + *(s32 *)(o + 0xBFC));
    ya2 = y0 + (c + (yb - *(s32 *)(o + 0xCF4)));
    p = &e->pt[0];
    p->y = ya1;
    p->x = xa1;
    p = &e->pt[1];
    p->y = ya1;
    p->x = xa2;
    p = &e->pt[2];
    p->x = xa1;
    p->y = ya2;
    p = &e->pt[3];
    p->y = ya2;
    p->x = xa2;
}

void ovl_ntgui2_func_00159D80(u8 *o) {
    s32 x = *(s32 *)(o + 0x5A0) + *(s32 *)(o + 0xB84);
    s32 t = *(s32 *)(o + 0x8D4) + *(s32 *)(o + 0x5D4);
    s32 y, h;
    x = x + t + *(s32 *)(o + 0xCF0);
    y = *(s32 *)(o + 0x5A4) + *(s32 *)(o + 0xCF4) + t;
    h = *(s32 *)(o + 0x5B0) - (*(s32 *)(o + 0x8D4) + *(s32 *)(o + 0xCF4)) * 2;
    func_0014CE60(*(s32 *)(o + 0x914), x, y);
    func_00165B8C(*(s32 *)(o + 0x914), x, y + h);
}

void func_00159D1C(u8 *o) {
    s32 x, y, t;
    ovl_ntgui2_func_00159D80(o);
    func_00159E18(o);
    func_00159EC8(o);
    x = *(s32 *)(o + 0x5A0) + *(s32 *)(o + 0xCF0);
    t = *(s32 *)(o + 0x8D4) + *(s32 *)(o + 0x5D4);
    y = *(s32 *)(o + 0x5A4) + *(s32 *)(o + 0xCF4);
    func_0014CE60(*(s32 *)(o + 0x910), x + t, y + t);
}
