class Tgt {
public:
    char pad[0x60];
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10();
    virtual s32 Q(s32 a, s8 b);
};

typedef struct {
    s8 unk0;
    char pad[7];
    Tgt *unk8;
    f32 *unkC;
} Ent;

typedef struct { f32 x, y, z; } Vec3;

extern f32 D_00482B14;
extern f32 D_00482B18;

extern "C" s32 func_002A81E0(Ent *arg0, Vec3 *arg1, f32 *arg2, f32 *arg3) {
    s32 r = arg0->unk8->Q(3, arg0->unk0);
    f32 *c = (f32 *)((char *)arg0->unkC + 0x10);
    f32 dx = arg1->x - c[0];
    f32 dy = arg1->y - c[1];
    f32 dz = arg1->z - c[2];
    if (dx * dx + dy * dy + dz * dz <= (f32)(r * 12)) {
        if (arg2) *arg2 = (f32)arg0->unk8->Q(0, arg0->unk0) * D_00482B14;
        if (arg3) *arg3 = (f32)arg0->unk8->Q(1, arg0->unk0) * D_00482B18;
        return 1;
    }
    return 0;
}
