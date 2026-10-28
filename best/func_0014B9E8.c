typedef struct { f32 x, y, z; } V3_14B9E8;
typedef struct { s32 a; s32 b; s32 pad[2]; } Tbl_14B9E8;
typedef struct {
    s16 id;
    s16 pad[3];
} Slot_14B9E8;
typedef struct {
    u64 d0;
    u64 d1;
    s16 a[4];
    s16 b[4];
    s8 c20;
    s8 c21;
    s8 pad22[2];
    Slot_14B9E8 slot[4];
    s32 pad44;
} Sub_14B9E8;
typedef struct {
    u8 pad0[0xC];
    s32 flags;
    V3_14B9E8 pos;
    u8 pad1c[0x38 - 0x1C];
    u16 rot;
    u8 pad3a[0x48 - 0x3A];
    void *vt;
    u8 pad4c[0x110 - 0x4C];
    u8 m110[0x148 - 0x110];
    Sub_14B9E8 sub;
} Obj_14B9E8;

extern Tbl_14B9E8 D_0031F540[];
extern u8 D_0044CEF8[];
extern char D_004623A0[];
s32 func_00108498(Sub_14B9E8 *d);
void func_001476B8(Obj_14B9E8 *o, V3_14B9E8 *v, char *name, s32 a, s32 b, s32 c, s32 d);
void func_00143630(Obj_14B9E8 *o);
void func_00157668(void *m, V3_14B9E8 *v, s16 r);

static inline void Slot_init(Slot_14B9E8 *p) { p->id = -1; }

static inline void Sub_init(Sub_14B9E8 *s) {
    s32 i, k;
    u8 *b1, *b2;
    for (i = 3; i >= 0; i--) Slot_init(&s->slot[i]);
    s->c20 = -1;
    s->c21 = -1;
    b1 = (u8*)s;
    b2 = b1 + 8;
    k = 0x10;
    for (i = 3; i >= 0; i--) {
        *(s16*)(b1 + k) = 0;
        *(s16*)(b2 + k) = 0;
        k += 2;
    }
}

void func_0014B9E8(Obj_14B9E8 *o, V3_14B9E8 *pos, Sub_14B9E8 *desc, s32 arg3) {
    V3_14B9E8 v = *pos;
    V3_14B9E8 unused;
    V3_14B9E8 v2;

    func_001476B8(o, &v, D_004623A0, D_0031F540[func_00108498(desc)].a,
                  D_0031F540[func_00108498(desc)].b, -1, arg3);
    o->vt = D_0044CEF8;
    Sub_init(&o->sub);
    o->sub = *desc;
    o->flags = (o->flags | 0x102000) & ~0x1800;
    if (o->sub.d1 & 0x8000000000ULL) {
        o->flags &= ~0x3000;
    }
    func_00143630(o);
    v2 = o->pos;
    func_00157668(o->m110, &v2, o->rot + 0x4000);
}
