typedef struct { f32 x, y, z; } Vec3_157940;
typedef struct { f32 m[9]; Vec3_157940 t; } Mtx_157940;
void func_00156CB0(Mtx_157940 *m, s32 axis, s16 ang);

void func_00157940(Mtx_157940 *m, Vec3_157940 *pos, s16 a, s16 b, s16 c, f32 scale)
{
    f32 zero = 0.0f, one = 1.0f;
    Vec3_157940 p = *pos;
    Vec3_157940 q;
    m->m[0] = one; m->m[1] = zero; m->m[2] = zero;
    m->m[3] = zero; m->m[4] = one; m->m[5] = zero;
    m->m[6] = zero; m->m[7] = zero; m->m[8] = one;
    m->t.x = p.x; m->t.y = p.y; m->t.z = p.z;
    func_00156CB0(m, 2, a + 0x4000);
    func_00156CB0(m, 1, b);
    func_00156CB0(m, 0, c);
    m->m[0] *= scale; m->m[1] *= scale; m->m[2] *= scale;
    m->m[3] *= scale; m->m[4] *= scale; m->m[5] *= scale;
    m->m[6] *= scale; m->m[7] *= scale; m->m[8] *= scale;
}
