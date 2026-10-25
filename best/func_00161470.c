typedef struct { char p0[0x4DC]; u16 x; u16 padx; u16 y; char p1[0x4EC-0x4E2]; s32 row; char p2[0x5A0-0x4F0]; s32 a; s32 b; s32 pad; s32 m; s32 w; char p3[0x5D4-0x5B4]; s32 c; char p4[0x910-0x5D8]; char tab[1]; } O;
typedef struct { char p[0x10]; s16 x; s16 y; char q[12]; } E;
extern f32 D_0047FA00;
f32 func_0014C97C(s32, s32);
f32 func_0014CA18(s32);

void func_00161470(O *o) {
    s32 sp[3];
    s32 h, v2, v10, mn, r22, k, t, a, b;
    E *e20, *e21;
    char *tb = o->tab;
    char *base;
    s32 fy, yy;
    fy = (s32)((f32)(o->w * *(s32 *)(tb + 0x33B0)) * D_0047FA00);
    h = o->w >> 1;
    base = tb + o->row * 0x19C0;
    v10 = o->b + o->c;
    v2 = o->a + o->c;
    mn = o->m < h ? o->m : h;
    e20 = (E *)(base + 0x150);
    e21 = (E *)(base + 0x310);
    sp[2] = v10 + h;
    sp[0] = h;
    sp[1] = v2 + mn;
    if (h * 2 < o->m) {
        r22 = v2 + o->m - h;
    } else if (o->m < h) {
        r22 = v2 + h;
        h = 0;
    } else {
        r22 = v2 + h;
        h = o->m - h;
    }
    yy = o->y + v10 + fy;
    e20->x = o->x + sp[1];
    e20->y = yy;
    e20++;
    e21->x = o->x + r22;
    e21->y = yy;
    e21++;
    for (k = 0; k < 12;) {
        f32 fh;
        t = (k << 15) / 11;
        k++;
        fh = sp[0];
        a = t + 0x4000;
        b = t - 0x4000;
        e20->x = o->x + sp[1] + (s32)(mn * func_0014CA18(a));
        e20->y = o->y + sp[2] + (s32)(fh * func_0014C97C(a, 11));
        e20++;
        e21->x = o->x + r22 + (s32)(h * func_0014CA18(b));
        e21->y = o->y + sp[2] + (s32)(fh * func_0014C97C(b, 11));
        e21++;
    }
}
