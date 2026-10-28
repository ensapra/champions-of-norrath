typedef struct { f32 x, y, z; } V3;
typedef struct { s16 adj; s16 pad; s32 (*fn)(void *, ...); } VE;
typedef struct Tgt {
    u8 pad0[0xC]; s32 flags; V3 pos; u8 pad1c[0x1C]; s16 s38; u8 pad3a[0xE]; u8 *vt;
    u8 pad4c[0x40]; s16 s8C, s8E, s90, s92, s94, s96, s98, s9A;
    u8 pad9c[0x84]; V3 pos120;
} Tgt;
typedef struct Obj {
    s8 id; u8 pad1[7]; struct Own *owner; Tgt *tgt; u8 pad10[4]; u8 *vt; s32 limit; s32 radius;
    f32 fx[10]; u8 pad48[8]; V3 v50; s32 pad5c_; s32 h5C;
} Obj;
typedef struct Own { u8 pad[0x60]; u8 *vt; } Own;
extern const f32 D_00482CD4, D_00482CD8;
extern s32 D_004844A4;
extern u8 D_008D78B0[];
s32 func_001138D0(void *, s32);
void func_00113948(void *, s32);
void func_0013EB60(void *);
void func_0013EF30(V3 *, V3 *, void **, s32);
s32 func_001441B8(s32);
void func_00157668(void *, void *, s16);
f32 func_0015A100(s32);
s32 func_0015E948(void *);
s32 func_0016C238(s32, void *, V3 *, s32, s32, V3 *, s32, s32, f32);
s32 func_0016CD50(s32);
void func_00180338(s32);
void func_00180380(s32);
void func_001803C0(s32, void *);
void func_00180DA0(void *, V3 *, V3 *, f32);
void func_002B10B8(s32, f32, void *, ...);
s32 func_003193C8(void);
s32 func_00319438(void);

#define RND(o) ((f32)func_0015E948(o) * 1.5258789e-05f * 2.0f - 1.0f)

void func_002B0208(Obj *self, V3 *arg1)
{
    V3 base = *arg1;
    u8 mat[0x40];
    V3 tp, p70, p80, p90, a0, rv, rv2, d, e;
    f32 s, scale, r2;
    s32 n, i, h;
    VE *ve;
    Tgt *t;
    void *list[0x40];
    V3 lo, hi;

    if (D_004844A4 < self->limit) {
        f32 *fx = self->fx;
        s = func_0015A100(D_004844A4 * 3000);
        self->v50 = self->tgt->pos;
        func_0013EB60(fx);
        scale = s * 12.0f + D_00482CD4;
        t = self->tgt;
        fx[7] = scale;
        fx[9] = scale;
        r2 = 1.0f / (scale * scale);
        t->s98 = (s16)(s * 50.0f + 80.0f);
        t->s90 = (s16)(s * 50.0f + 80.0f);
        t->s94 = (s16)(s * 50.0f + 200.0f);
        t->s96 = (s16)(s * 50.0f + 160.0f);
        t->s9A = (s16)(s * 20.0f + 40.0f);
        t->s8E = (s16)(s * 50.0f + 160.0f);
        t->s92 = (s16)(s * 20.0f + 40.0f);
        fx[10] = r2;
        fx[8] = r2;
        t->s8C = (s16)(s * 50.0f + 200.0f);
        tp = t->pos;
        func_00157668(mat, &tp, t->s38);
        func_001803C0(self->h5C, mat);
        func_00180338(self->h5C);
        t = self->tgt;
        ve = (VE *)(t->vt + 0x80);
        n = func_0016CD50(ve->fn((u8 *)t + ve->adj));
        if (n != 0) {
            p90.x = 0.0f; p90.y = 0.0f; p90.z = 0.0f;
            i = 0;
            do {
                t = self->tgt;
                ve = (VE *)(t->vt + 0x80);
                h = ve->fn((u8 *)t + ve->adj);
                func_0016C238(h, &self->tgt->pos120, &p90, 0, func_0015E948(self) % n, &p70, 0, 0, 1.0f);
                do {
                    rv.x = RND(self);
                    rv.y = RND(self);
                    rv.z = RND(self);
                } while (rv.x * rv.x + rv.y * rv.y + rv.z * rv.z > 1.0f);
                a0 = rv;
                p70.x += a0.x;
                p70.y += a0.y;
                p70.z += a0.z;
                do {
                    rv2.x = RND(self);
                    rv2.y = RND(self);
                    rv2.z = RND(self);
                } while (rv2.x * rv2.x + rv2.y * rv2.y + rv2.z * rv2.z > 1.0f);
                e = rv2;
                i++;
                d.x = e.x * D_00482CD8;
                d.y = e.y * D_00482CD8;
                d.z = e.z * D_00482CD8;
                p80 = d;
                func_00180DA0(D_008D78B0, &p70, &p80, 0.0f);
            } while (i < 15);
        }
        func_00180380(self->h5C);
        if (self->radius != 0) {
            if (D_004844A4 % 15 == 0) {
                f32 rad = (f32)self->radius;
                Tgt *me;
                void **pp;
                Tgt *o;
                lo.x = base.x - rad; lo.y = base.y - rad; lo.z = base.z - rad;
                hi.x = base.x + rad; hi.z = base.z + rad; hi.y = base.y + rad;
                func_0013EF30(&lo, &hi, list, 0x40);
                me = self->tgt;
                if (list[0] != 0) {
                    pp = list;
                    o = (Tgt *)*pp;
                    do {
                        pp++;
                        if (me != o && (o->flags & 0x40)) {
                            s32 a = func_001138D0(o, func_003193C8());
                            s32 b = func_001138D0(o, func_00319438());
                            if (a == 0 && b == 0) {
                                s32 fxo = func_001441B8(0x24);
                                if (fxo != 0) {
                                    Own *ow = self->owner;
                                    ve = (VE *)(ow->vt + 0x58);
                                    func_002B10B8(fxo, 0.5f, o, ve->fn((u8 *)ow + ve->adj, 2, (s32)self->id));
                                }
                                func_00113948(o, fxo);
                            }
                        }
                        o = (Tgt *)*pp;
                    } while (o != 0);
                }
            }
        }
    } else if (self != 0) {
        ve = (VE *)(self->vt + 8);
        ve->fn((u8 *)self + ve->adj, 3);
    }
}
