typedef struct { u8 p0[0x168]; f32 f168, f16c, f170; u8 p1[4]; f32 f178; f32 f17c; s32 i180; s32 i184; s32 i188; u8 *f18c; } O;
void func_002783C0(O *o) {
    s32 i = o->i180;
    u8 *base = o->f18c;
    f32 *a, *b;
    f32 v;
    if (((f32 *)(base + 0x2A4))[i] != 0.0f) {
        b = (f32 *)(base + i * 12 + 0x66C);
        a = (f32 *)(base + i * 12 + 0x72C);
        v = (b[0] * a[0] + b[1] * a[1] + b[2] * a[2]) / o->f17c * 60.0f;
        o->f168 = v;
        o->f16c = v;
    }
}
