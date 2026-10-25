struct V3 { f32 x, y, z; };
struct Ent181660 {
    V3 a;
    V3 b;
    u8 c[8];
    f32 f;
};
extern "C" {
s32 D_004869FC;
extern Ent181660 D_006F4880[];

void func_00181660(V3 a, V3 b, u8 c0, u8 c1, u8 c2, u8 c3, u8 c4, u8 c5, f32 f, u8 c6, u8 c7) {
    Ent181660 *e;
    if (D_004869FC != 0x80) {
        e = &D_006F4880[D_004869FC++];
        e->a = a;
        e->f = f;
        e->b = b;
        e->c[1] = c1;
        e->c[0] = c0;
        e->c[3] = c3;
        e->c[4] = c4;
        e->c[2] = c2;
        e->c[5] = c5;
        e->c[7] = c7;
        e->c[6] = c6;
    }
}
}
