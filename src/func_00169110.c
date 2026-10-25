struct V3_169110 {
    f32 x, y, z;
    V3_169110() {}
    V3_169110(f32 a, f32 b, f32 c) { x = a; y = b; z = c; }
};
struct Ent_169110 {
    s8 id;
    s8 pad1;
    s16 px, py, pz;
    s8 nx, ny, nz;
    s8 pad[4];
    s8 bone;
};

extern "C" {
extern f32 D_0037EF00[12];
void func_001590C0(f32 *m);
void func_00159AE0(V3_169110 *a, f32 *m, V3_169110 *b);
void func_00159B98(V3_169110 *a, f32 *m, V3_169110 *b);
void func_001627A0(s32 a, s32 b, f32 *m);

void func_00169110(u8 *arg0, s32 arg1, f32 *arg2) {
    f32 m[12];
    Ent_169110 *e;

    if (*(u16 *)(arg0 + 0x10) & 0x40) {
        e = (Ent_169110 *)(arg0 + arg0[0x23] * 0x10);
        func_001590C0(m);
        while (e->id != -1) {
            V3_169110 n(e->nx * (1.0f / 128.0f), e->ny * (1.0f / 128.0f), e->nz * (1.0f / 128.0f));
            if (arg1 != 0) {
                func_001627A0(arg1, e->bone, m);
                func_00159B98(&n, m, &n);
            }
            func_00159B98(&n, arg2, &n);
            if (!(n.x * D_0037EF00[2] + n.y * D_0037EF00[5] + n.z * D_0037EF00[8] < 0.0f)) {
                V3_169110 p(e->px * (1.0f / 16.0f), e->py * (1.0f / 16.0f), e->pz * (1.0f / 16.0f));
                if (arg1 != 0) {
                    func_00159AE0(&p, m, &p);
                }
                func_00159AE0(&p, arg2, &p);
            }
            e++;
        }
    }
}
}
