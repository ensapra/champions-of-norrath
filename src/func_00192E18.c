typedef struct { s16 x, y, z, w, e; s8 f; s8 pad; } Ent;
void ovl_ntgui2_func_00191DE0(void);
void func_00191EF8(f32 *v, s16 a, s8 b, s32 c, f32 d);
s32 func_00192E18(s32 *p) {
    s32 t, n;
    s32 *base = p;
    f32 v[3];
    ovl_ntgui2_func_00191DE0();
    t = p[0];
    p += 2;
    if (t > 0) {
        n = t;
        do {
            Ent *c = (Ent *)p;
            p += 3;
            n--;
            v[0] = c->x * 0.25f;
            v[1] = c->y * 0.25f;
            v[2] = c->z * 0.25f - 3.0f;
            func_00191EF8(v, c->e, c->f, 0, c->w * 0.25f);
        } while (n);
    }
    return (char *)p - (char *)base;
}
