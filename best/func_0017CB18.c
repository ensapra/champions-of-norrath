typedef struct { f32 x, y, z; } V3;
typedef struct { u8 p0[0x10]; u16 lo, hi, kind, per; s16 s18, s1A, s1C, s1E; u16 u20; u8 b22, b23, b24, b25, b26, b27, b28; } Def;
typedef struct { Def *def; s32 flags; u8 p8[0x18]; s32 timer; u8 p24[4]; s32 vx, vy, vz; } Em;
typedef struct { u8 p0[8]; u8 b8; u8 p9; s16 sA, sC, sE, s10, s12, s14, s16, s18; f32 f1C; f32 f20, f24, f28, f2C; V3 v30; } Slot;
u32 func_0017CA40(f32, f32);
void func_0015A540(s32);
void ovl_ntgui2_func_0013D230(Slot *, s16, s16, s16, V3);
void func_001815C8(V3 *, u8, u8, u8, u8, s32, s32, s32, f32, f32);
extern Slot D_006E9D68[];
s32 D_00483E58, D_004844A4, D_004869DC;
void func_0017CB18(Em *e) {
    Def *d = e->def;
    V3 v;
    u32 idx;
    v.x = (f32)e->vx * 0.25f;
    v.y = (f32)e->vy * 0.25f;
    v.z = (f32)e->vz * 0.25f;
    idx = func_0017CA40(v.x, v.y);
    if (idx < 16) {
        Slot *s = &D_006E9D68[idx];
        s32 val = (s32)s->f1C;
        switch (d->kind) {
        case 0: val = d->lo; break;
        case 1:
            if (e->timer < D_004844A4) {
                e->timer = D_004844A4 + d->per;
                D_00483E58 = D_00483E58 * 0x19660D + 0x3C6EF35F;
                val = d->lo + (s32)((f32)(d->hi - d->lo) * ((f32)((u32)D_00483E58 >> 16) * 0.0000152587890625f));
            }
            break;
        case 2:
            if (e->timer < D_004844A4) {
                s32 f = e->flags;
                e->timer = D_004844A4 + d->per;
                if (f < 0) { val = d->lo; f &= 0x7FFFFFFF; }
                else { val = d->hi; f |= 0x80000000; }
                e->flags = f;
            }
            if (d->per) val += ((e->flags & 0x80000000 ? -1 : 1) * (d->hi - d->lo)) / d->per;
            break;
        case 3:
            if (e->timer < D_004844A4) {
                u16 lo = d->lo;
                e->timer = D_004844A4 + d->per;
                if (val == lo) val = d->hi; else val = lo;
            }
            break;
        case 4: break;
        }
        if (d->kind != 4) {
            f32 f;
            if (val >= 0x12C) val = 0x12B;
            if (val < 0) val = 0;
            f = (f32)val;
            s->sA = d->s18; s->sC = d->s1A; s->sE = d->s1C; s->s10 = d->s1E;
            s->s12 = d->s18; s->s14 = d->s1A; s->s16 = d->s1C; s->s18 = d->s1E;
            s->f1C = f; s->f24 = f;
            s->f28 = s->f20 = 1.0f / (f * f);
            s->f2C = 0;
            s->v30 = v;
            s->b8 = 0;
            ovl_ntgui2_func_0013D230(s, s->sC, s->sE, s->s10, v);
        }
        if (d->b27 && D_004869DC) {
            func_0015A540((s32)s * 0x19660D + D_004844A4 * 16 + 0x7EFE41);
            func_001815C8(&v, d->b23, d->b24, d->b25, d->b26, D_004869DC, 0, 2, (f32)d->b28, (f32)(d->u20 + (0x41B00000 << d->b22)));
        }
    }
}
