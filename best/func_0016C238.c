typedef struct { f32 x, y, z; } V3;
typedef struct { f32 m[9]; } M9;
f32 func_0015A070(s16);
f32 func_0015A100(s16);
void func_00156AA0(void *, s32, s16);
void func_00159090(void *);
void func_001590C0(void *);
void func_00159AE0(V3 *, M9 *, V3 *, V3 *);
void func_001627A0(void *, u32, M9 *, s16);
void func_0016C238(u8 *t, void *obj, V3 pos, s16 ang, s32 idx, V3 *out, f32 *outf, M9 *mat, f32 scale) {
    V3 v, z, w;
    M9 m;
    s16 a2;
    u8 *ent = t + t[0x24] * 16 + 0x10;
    if (idx >= *(s32 *)(ent - 0xC)) {
        f32 zf = 0.0f;
        z.x = zf; z.y = zf; z.z = zf;
        v = z;
        if (outf) *outf = zf;
        a2 = ang - 0x4000;
        if (mat) func_00159090(mat);
    } else {
        s16 *p = (s16 *)(ent + 0x10 + idx * 8 + (idx / 45) * 16);
        if (obj) func_001627A0(obj, ((u8 *)p)[6] >> 2, &m, ang);
        else func_001590C0(&m);
        w.x = (f32)p[0] * 0.0625f;
        w.y = (f32)p[1] * 0.0625f;
        w.z = (f32)p[2] * 0.0625f;
        v = w;
        func_00159AE0(&v, &m, &v, &w);
        if (outf) *outf = (f32)p[3] * scale;
        if (mat) {
            *mat = m;
            a2 = ang - 0x4000;
            func_00156AA0(mat, 2, a2);
        } else {
            a2 = ang - 0x4000;
        }
    }
    {
        f32 s = func_0015A070(a2);
        f32 c = func_0015A100(a2);
        f32 nx = -v.x;
        f32 ny;
        ny = nx * c - v.y * s;
        v.x = nx * s + v.y * c;
        v.y = ny;
    }
    v.x *= scale; v.y *= scale; v.z *= scale;
    v.x += pos.x; v.y += pos.y; v.z += pos.z;
    *out = v;
}
