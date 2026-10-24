struct Vec3 {
    f32 x, y, z;
    Vec3() {}
    Vec3(f32 a, f32 b, f32 c) : x(a), y(b), z(c) {}
};
typedef struct { f32 m[4][3]; } Mtx43;

typedef struct {
    u8 pad0[0x1C];
    s8 unk_1C;
    s8 unk_1D;
} ItemInfo;

typedef struct DropItem {
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ u32 unk_C;
    /* 0x010 */ Vec3 pos;
    /* 0x01C */ f32 unk_1C;
    /* 0x020 */ u8 pad20[8];
    /* 0x028 */ u8 unk_28;
    /* 0x029 */ u8 pad29[0x1B];
    /* 0x044 */ u32 seed;
    /* 0x048 */ void *vt;
    /* 0x04C */ s32 unk_4C;
    /* 0x050 */ s32 unk_50;
    /* 0x054 */ char name54[0x10];
    /* 0x064 */ char name64[0x40];
    /* 0x0A4 */ char nameA4[0x44];
    /* 0x0E8 */ u64 mask;
    /* 0x0F0 */ Vec3 center;
    /* 0x0FC */ u8 padFC[0x12];
    /* 0x10E */ s16 timer;
    /* 0x110 */ Mtx43 mtx;
    /* 0x140 */ s16 flags;
    /* 0x142 */ u8 pad142[6];
    /* 0x148 */ ItemInfo *info;
    /* 0x14C */ u8 pad14C[4];
    /* 0x150 */ u64 itemFlags;
    /* 0x158 */ u8 pad158[0x38];
    /* 0x190 */ f32 mass;
    /* 0x194 */ Vec3 inertia;
    /* 0x1A0 */ Vec3 bpos;
    /* 0x1AC */ u8 pad1AC[0x10];
    /* 0x1BC */ Vec3 vel;
    /* 0x1C8 */ Vec3 angvel;
    /* 0x1D4 */ f32 rot[3][3];
    /* 0x1F8 */ u8 pad1F8[0x30];
    /* 0x228 */ f32 unk_228;
    /* 0x22C */ u8 pad22C[4];
    /* 0x230 */ s32 unk_230;
    /* 0x234 */ s32 unk_234;
    /* 0x238 */ s8 unk_238;
    /* 0x239 */ s8 unk_239;
    /* 0x23A */ s8 unk_23A;
    /* 0x23B */ u8 pad23B;
    /* 0x23C */ f32 unk_23C;
    /* 0x240 */ f32 unk_240;
} DropItem;

extern "C" {
s32 D_004844A0;
s32 D_004844A4;
s32 D_004844C0;
extern const f32 D_0047FD68;
extern const f32 D_0047FD6C;
extern const f32 D_0047FD70;
extern const f32 D_0047FD74;
extern const f32 D_0047FD78;
extern const f32 D_0047FD7C;
extern const f32 D_0047FD80;
extern const f32 D_0047FD84;
extern const f32 D_0047FD88;
extern const f32 D_0047FD8C;
extern const f32 D_0047FD90;
extern const f32 D_0047FD94;
extern char D_00483B70[];
extern char D_00462078[];
extern char D_00462278[] __attribute__((aligned(8)));
extern char D_00462290[] __attribute__((aligned(8)));
extern char D_004622A8[] __attribute__((aligned(8)));
extern char D_004622C0[] __attribute__((aligned(8)));
extern char D_004622D8[] __attribute__((aligned(8)));
extern char D_004622F0[] __attribute__((aligned(8)));
extern char D_00462308[] __attribute__((aligned(8)));
extern char D_00462320[] __attribute__((aligned(8)));
extern char D_00462338[] __attribute__((aligned(8)));
extern u8 D_0044D018[];

s32 func_0017DB78(s32, Vec3, s32, f32);
s32 func_00303EB8(char *, char *, ...);
s32 func_00165DC0(char *, char *);
void func_0024D308(s32, DropItem *, f32);
void func_0017A818(s32, Vec3, f32, f32);
s8 *func_0016C740(s32, s32);
Vec3 *mat3x3_mul_vec3(Vec3 *out, f32 *m, Vec3 *v);
void func_0015A9F0(f32 *, Vec3 *, Vec3 *);
void func_0015ADF0(f32 *, Vec3 *, Vec3 *, f32);
void func_0015B600(f32 *, Vec3 *, Vec3 *, Vec3 *, Vec3 *);
void func_0015B118(f32 *, Vec3 *, Vec3 *, f32);
f32 func_00175FE0(s32, Vec3, f32);
f32 func_001770F8(s32, Vec3, Vec3 *, s32, Vec3 *, f32);
void func_00143630(DropItem *);
void func_001DFE98(Vec3 *, Vec3 *, s32, f32, f32);
void *func_001441B8(s32);
void func_0028DA68(void *, Vec3, s32, f32, f32);
void mat3x3_scale(Mtx43 *, f32);
void func_0014BBC8(void *, Vec3, ItemInfo **, Mtx43 *);
void func_001411F0(DropItem *, Vec3, s32, s32);
char *func_00304640(char *, char *);
void func_00143830(DropItem *);
void func_001437E8(DropItem *);

static inline void Vec3Add(Vec3 *d, Vec3 *a, Vec3 *b)
{
    d->x = a->x + b->x;
    d->y = a->y + b->y;
    d->z = a->z + b->z;
}

static inline void Vec3Scale(Vec3 *d, f32 s)
{
    d->x *= s;
    d->y *= s;
    d->z *= s;
}

static inline void InitDrop(DropItem *v, Vec3 p)
{
    func_001411F0(v, p, 0, 0);
}

void func_00149438(DropItem *obj)
{
    f32 limit;
    f32 eps;
    f32 h;
    f32 mass;
    s32 hit;
    s32 i;
    s32 j;
    s32 k;
    s32 l;
    u64 mask;
    s8 *pt;

    if (obj->unk_239 == 0 && (D_004844A4 & 7) == 0 && func_0017DB78(D_004844A0, obj->pos, 0, 12.0f)) {
        char buf[0x40];
        obj->unk_239 = 1;
        obj->seed = obj->seed * 0x19660D + 0x3C6EF35F;
        func_00303EB8(buf, D_00462078, (obj->seed >> 16) % 1 + 1);
        func_0024D308(func_00165DC0(D_00483B70, buf), obj, D_0047FD68);
        func_0017A818(D_004844A0, obj->pos, 700.0f, 24.0f);
    }

    mass = obj->mass;
    if (D_004844C0 & 0x100) {
        obj->vel.z -= D_0047FD6C / mass;
    } else {
        obj->vel.z -= D_0047FD70 / mass;
    }

    {
        limit = obj->unk_228 + 2.0f;
        hit = 0;
        Vec3 a(0.0f, 0.0f, 0.0f);
        i = 0;
        obj->unk_230 = 0;
        Vec3 b(0.0f, 0.0f, 0.0f);
        for (mask = obj->mask; mask != 0; mask >>= 1, i++) {
            if (!((s32)mask & 1)) {
                continue;
            }
            pt = func_0016C740(obj->unk_4C, i);
            for (j = 0; j < 8; j++, pt += 3) {
                Vec3 v(pt[0] - obj->center.x, pt[1] - obj->center.y, pt[2] - obj->center.z);
                if (v.x * obj->rot[2][0] + v.y * obj->rot[2][1] + v.z * obj->rot[2][2] + obj->bpos.z >= limit) {
                    continue;
                }
                mat3x3_mul_vec3(&v, obj->rot[0], &v);
                Vec3Add(&v, &v, &obj->bpos);
                if (obj->unk_234 != 0) {
                    obj->unk_234--;
                    continue;
                }
                if (v.z < limit) {
                    f32 d;
                    f32 rz;
                    f32 push;
                    Vec3 w(0.0f, 0.0f, 1.0f);
                    Vec3 r;

                    hit = 1;
                    func_0015A9F0(&obj->mass, &v, &r);
                    rz = r.z;
                    if (rz < -1.0f && obj->unk_239 == 0) {
                        char name[0x40];
                        s32 play = 1;

                        if (obj->unk_238 != 0) {
                            if (obj->info->unk_1D == 0) {
                                if (obj->itemFlags & 0x800000) {
                                    __builtin_memcpy(name, D_00462278, 21);
                                } else if (obj->itemFlags & 0x40000) {
                                    __builtin_memcpy(name, D_00462290, 22);
                                } else {
                                    play = 0;
                                }
                            } else if (obj->info->unk_1C == 3) {
                                if (obj->itemFlags & 0x800000) {
                                    __builtin_memcpy(name, D_004622A8, 23);
                                } else if (obj->itemFlags & 0x40000) {
                                    __builtin_memcpy(name, D_004622A8, 23);
                                } else {
                                    play = 0;
                                }
                            } else {
                                if (obj->itemFlags & 0x800000) {
                                    __builtin_memcpy(name, D_00462278, 21);
                                } else if (obj->itemFlags & 0x200000) {
                                    __builtin_memcpy(name, D_004622C0, 19);
                                } else if (obj->itemFlags & 0x40000) {
                                    __builtin_memcpy(name, D_004622D8, 22);
                                } else if (obj->itemFlags & 0x100000) {
                                    __builtin_memcpy(name, D_004622F0, 21);
                                } else if (obj->itemFlags & 0x80000) {
                                    __builtin_memcpy(name, D_00462308, 19);
                                } else if (obj->itemFlags & 0x1000000) {
                                    __builtin_memcpy(name, D_00462320, 20);
                                } else if (obj->itemFlags & 0x4000000) {
                                    __builtin_memcpy(name, D_00462338, 21);
                                } else if (obj->itemFlags & 0x2000000) {
                                    __builtin_memcpy(name, D_00462338, 21);
                                } else if (obj->itemFlags & 0x10000000) {
                                    __builtin_memcpy(name, D_00462338, 21);
                                } else {
                                    play = 0;
                                }
                            }
                        } else {
                            if (obj->flags & 8) {
                                __builtin_memcpy(name, D_00462278, 21);
                            } else if (obj->flags & 0x10) {
                                __builtin_memcpy(name, D_00462290, 22);
                            } else {
                                play = 0;
                            }
                        }
                        if (play) {
                            func_0024D308(func_00165DC0(D_00483B70, name), obj, 1.0f);
                        }
                    }
                    if (rz < 0.0f) {
                        func_0015ADF0(&obj->mass, &v, &w, obj->unk_23C);
                        obj->unk_230 = 1;
                    }
                    d = limit - v.z;
                    if (d > 1.0f) {
                        d = 1.0f;
                    }
                    push = d * D_0047FD74;
                    if (push > 0.0f) {
                        Vec3 t(0.0f, 0.0f, push);
                        func_0015B600(&obj->mass, &v, &t, &a, &b);
                    }
                }
            }
        }

        if (obj->flags & 0x20) {
            f32 lim = D_0047FD78;
            f32 nlim = -lim;
            if (obj->angvel.x * obj->inertia.x > lim) {
                obj->angvel.x = lim / obj->inertia.x;
            }
            if (obj->angvel.x * obj->inertia.x < nlim) {
                obj->angvel.x = nlim / obj->inertia.x;
            }
            if (obj->angvel.y * obj->inertia.y > lim) {
                obj->angvel.y = lim / obj->inertia.y;
            }
            if (obj->angvel.y * obj->inertia.y < nlim) {
                obj->angvel.y = nlim / obj->inertia.y;
            }
            if (obj->angvel.z * obj->inertia.z > lim) {
                obj->angvel.z = lim / obj->inertia.z;
            }
            if (obj->angvel.z * obj->inertia.z < nlim) {
                obj->angvel.z = nlim / obj->inertia.z;
            }
        }
        func_0015B118(&obj->mass, &a, &b, 1.0f);

        if (hit) {
            obj->vel.x *= D_0047FD7C;
            obj->vel.y *= D_0047FD7C;
        }
        obj->angvel.x *= D_0047FD80;
        obj->angvel.y *= D_0047FD80;
        obj->angvel.z *= D_0047FD80;
        obj->pos = obj->bpos;

        Vec3 m(obj->vel.x * obj->mass, obj->vel.y * obj->mass, 0.0f);
        obj->bpos.z += obj->vel.z * obj->mass;
        h = func_00175FE0(D_004844A0, obj->pos, obj->unk_1C);
        obj->unk_228 = h;
        if (obj->pos.z - D_0047FD84 <= h) {
            obj->pos.z = h;
        }
        eps = D_0047FD88;
        if (m.x * m.x + m.y * m.y > eps) {
            Vec3 n;
            f32 s;

            s = func_001770F8(D_004844A0, obj->pos, &m, 1, &n, obj->unk_1C);
            Vec3Scale(&m, s);
            Vec3Add(&obj->pos, &obj->pos, &m);
            func_00143630(obj);
            if (s < 1.0f) {
                f32 e = eps - (n.x * obj->vel.x + n.y * obj->vel.y);
                if (e > 0.0f) {
                    obj->vel.x += n.x * e * 1.5f;
                    obj->vel.y += n.y * e * 1.5f;
                }
            }
            if (obj->unk_23A != 0) {
                Vec3 q;
                func_0015A9F0(&obj->mass, &obj->pos, &q);
                func_001DFE98(&obj->bpos, &q, 0, obj->unk_28 * D_0047FD8C, 1.0f);
            }
        }
    }

    obj->bpos.x = obj->pos.x;
    obj->bpos.y = obj->pos.y;
    func_00143630(obj);

    if (obj->unk_23A == 1 && __builtin_fabsf(obj->pos.z - h) < 12.0f
        && __builtin_fabsf(obj->angvel.x) < D_0047FD90
        && __builtin_fabsf(obj->angvel.y) < D_0047FD90
        && __builtin_fabsf(obj->angvel.z) < D_0047FD90
        && __builtin_fabsf(obj->vel.x) < D_0047FD90
        && __builtin_fabsf(obj->vel.y) < D_0047FD90
        && __builtin_fabsf(obj->vel.z) < D_0047FD90) {
        void *fx;
        obj->unk_23A = 2;
        fx = func_001441B8(0x4A8);
        if (fx != NULL) {
            obj->seed = obj->seed * 0x19660D + 0x3C6EF35F;
            func_0028DA68(fx, obj->pos, (obj->seed >> 16) % 40 * 60 + 480, 240.0f, 0.5f);
        }
    }

    if (obj->timer >= -220) {
        if (obj->timer-- > 0) {
            return;
        }
        if (!(__builtin_fabsf(obj->angvel.x) < D_0047FD94
              && __builtin_fabsf(obj->angvel.y) < D_0047FD94
              && __builtin_fabsf(obj->angvel.z) < D_0047FD94
              && __builtin_fabsf(obj->vel.x) < D_0047FD94
              && __builtin_fabsf(obj->vel.y) < D_0047FD94
              && __builtin_fabsf(obj->vel.z) < D_0047FD94)) {
            return;
        }
    }

    for (k = 0; k < 3; k++) {
        for (l = 0; l < 3; l++) {
            obj->mtx.m[k][l] = obj->rot[l][k];
        }
    }
    obj->mtx.m[3][0] = obj->bpos.x;
    obj->mtx.m[3][1] = obj->bpos.y;
    obj->mtx.m[3][2] = obj->bpos.z;
    mat3x3_scale(&obj->mtx, obj->unk_240);
    func_00159550(&obj->mtx, -obj->center.x, -obj->center.y, -obj->center.z);

    if (obj->unk_238 != 0) {
        void *p = func_001441B8(0x190);
        if (p != NULL) {
            func_0014BBC8(p, obj->pos, &obj->info, &obj->mtx);
        }
    } else if (obj->name54[0] != 0) {
        DropItem *v = (DropItem *)func_001441B8(0x148);
        if (v != NULL) {
            char *d54 = v->name54;
            char *s54 = obj->name54;
            char *d64 = v->name64;
            char *s64 = obj->name64;
            u64 vmask = obj->mask;
            s16 vflags = obj->flags;
            InitDrop(v, obj->pos);
            v->vt = D_0044D018;
            v->unk_C |= 0x1809;
            func_00143630(v);
            v->flags = vflags | 1;
            char *sA4 = obj->nameA4;
            v->unk_1C = 4.0f;
            v->mtx = obj->mtx;
            char *dA4 = v->nameA4;
            func_00304640(d54, s54);
            func_00304640(d64, s64);
            func_00304640(dA4, sA4);
            v->unk_4C = func_00165DC0(d54, d64);
            v->unk_50 = func_00165DC0(d54, dA4);
            v->mask = vmask;
            if (v->flags & 2) {
                func_00143830(v);
                v->unk_C |= 0x4000;
            }
            if (v->flags & 4) {
                v->unk_C |= 0x1000;
            }
        }
    } else {
        DropItem *v = (DropItem *)func_001441B8(0x148);
        if (v != NULL) {
            s32 h4C = obj->unk_4C;
            s32 h50 = obj->unk_50;
            u64 vmask = obj->mask;
            s16 vflags = obj->flags;
            InitDrop(v, obj->pos);
            v->vt = D_0044D018;
            v->unk_C |= 0x5809;
            func_00143630(v);
            v->flags = vflags | 1;
            v->unk_1C = 4.0f;
            v->mtx = obj->mtx;
            v->unk_4C = h4C;
            v->unk_50 = h50;
            v->mask = vmask;
            if (v->flags & 2) {
                func_00143830(v);
                v->unk_C |= 0x4000;
            }
            if (v->flags & 4) {
                v->unk_C |= 0x1000;
            }
        }
    }
    func_001437E8(obj);
}
}
