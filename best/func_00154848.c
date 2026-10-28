typedef struct { u8 r, g, b, a; } RGBA;
typedef struct { u8 x[0x618]; s32 k; u8 y[0x3a4]; RGBA col[4]; s32 f; } O;
void func_00152C64(RGBA *);
void func_0015496C(O *);
void func_00154A20(O *);
extern u8 func_001C8098[];
void func_00154848(O *a) {
    RGBA c[4];
    u32 i;
    for (i = 0; i < 4; i++) {
        c[i] = a->col[i];
        c[i].a = a->col[i].a * a->k / 255;
    }
    func_00152C64(c);
    (*(void (**)(O *))(func_001C8098 + 0xd64))(a);
    if (a->f)
        func_0015496C(a);
    else
        func_00154A20(a);
}
