#define FLD(p, t, o) (*(t *)((char *)(p) + (o)))
typedef struct { u8 r, g, b, a; } Rgba;
typedef struct { char pad[0x1C]; s32 x; s32 w; } Cell24;
void func_00152C64(Rgba *);
void func_00152D0C(s32, s32, s32, s32, s32, s32, s32, f32);
void func_0015AFB8(char *o) {
    Rgba col[4];
    u32 i;
    Cell24 *c;
    s32 a, b;
    Rgba *tbl = (Rgba *)(o + 0xCB0);
    if (FLD(o, s32, 0xBF0) == 0) return;
    for (i = 0; i < 4; i++) {
        col[i].r = tbl[i].r;
        col[i].g = tbl[i].g;
        col[i].b = tbl[i].b;
        col[i].a = (s32)(FLD(o, s32, 0x618) * tbl[i].a) / 255;
    }
    func_00152C64(col);
    a = FLD(o, s32, 0x5A0) + FLD(o, s32, 0xBF4);
    b = FLD(o, s32, 0x8D4) + FLD(o, s32, 0x5D4);
    c = &FLD(o, Cell24 *, 0xB80)[FLD(o, s32, 0xB9C)];
    func_00152D0C(a + b + FLD(o, s32, 0xCF0) + c->x + c->w,
                  FLD(o, s32, 0x5A4) + FLD(o, s32, 0xC4C) + (((FLD(o, s32, 0x5B0) - FLD(o, s32, 0xC54)) >> 1) + FLD(o, s32, 0x5D4)),
                  FLD(o, s32, 0xCC0), FLD(o, s32, 0xB9C), FLD(o, s32, 0xBA0), FLD(o, s32, 0xC9C), FLD(o, s32, 0x5D4),
                  FLD(o, f32, 0xCA4));
}
