extern f32 D_00482280;
typedef struct { u8 p0[0x2E4]; f32 sc; u8 p1[4]; f32 t; u8 p2[0x394 - 0x2F0]; f32 k394; u8 p3[0x400 - 0x398]; s32 f400; u8 p4[0x804 - 0x404]; u8 *tbl; } O;
f32 func_00278120(O *o) {
    f32 t, sc, a, b, v;
    f32 *tb;
    s32 i, j;
    if (o->f400 != 0) return 0.0f;
    t = o->t;
    sc = o->sc;
    tb = (f32 *)(o->tbl + 8);
    i = (s32)(t * D_00482280);
    j = i + 1;
    if (i >= 10) i = 9;
    if (j >= 10) j = 9;
    a = tb[i];
    b = tb[j];
    v = a + (b - a) * ((t - (f32)(i * 1000)) * D_00482280);
    v = v * sc;
    if (sc == 0.0f) v -= t * o->k394;
    return v;
}
