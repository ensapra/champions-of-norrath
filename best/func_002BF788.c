typedef struct { f32 x, y, z; } V3;
typedef struct { V3 a, b, c; } M3;
typedef struct { char p0[0x10]; V3 pos; char p1[0x2C8]; f32 f2e4; char p2[0x38]; f32 f320; char p3[0x138]; M3 m; char p4[0x24]; V3 v; } O;
s32 func_00153FA8(void *);
void func_00156610(M3 *, s32, s16);
void func_0017A818(s32, V3 *, V3 *, V3 *, f32, f32);
void func_00271C90(void *, V3 *, V3 *, s32);
extern f32 D_00483050, D_00483054, D_00483058;
extern s32 D_004844A0;
s32 func_002BF788(O *o) {
    V3 sp0, sp10;
    M3 sp20;
    V3 sp50, sp60, sp70, sp90;
    V3 *p = &sp10;
    f32 k, zero = 0.0f;
    p->x = zero;
    p->y = 191.0f;
    p->z = zero;
    sp20 = o->m;
    func_00156610(&sp20, 2, (s16)(-o->f320 * D_00483050 * D_00483054));
    k = o->f2e4 * D_00483058;
    sp0.x = -sp20.b.x * k;
    sp0.y = -sp20.b.y * k;
    sp0.z = -sp20.b.z * k;
    func_00271C90(o, p, &sp0, 0);
    if (o->v.x * o->v.x + o->v.y * o->v.y + o->v.z * o->v.z > zero) {
        do {
            sp70.x = 2.0f * ((f32)func_00153FA8(o) * 0.0000152587890625f) - 1.0f;
            sp70.y = 2.0f * ((f32)func_00153FA8(o) * 0.0000152587890625f) - 1.0f;
            sp70.z = 2.0f * ((f32)func_00153FA8(o) * 0.0000152587890625f) - 1.0f;
        } while (sp70.x * sp70.x + sp70.y * sp70.y + sp70.z * sp70.z > 1.0f);
        sp60 = sp70;
        sp50.x = sp60.x * 80.0f;
        sp50.y = sp60.y * 80.0f;
        sp50.z = -30.0f;
        sp90.x = o->pos.x + sp50.x;
        sp90.y = o->pos.y + sp50.y;
        sp90.z = o->pos.z + sp50.z;
        func_0017A818(D_004844A0, &sp90, &sp90, &sp50, 400.0f, 50.0f);
    }
    return 1;
}
