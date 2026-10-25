typedef struct { f32 x, y, z; } Vec3_168;
typedef struct { f32 m[4][3]; } Mtx_168;
typedef struct { s32 id; Mtx_168 m; } Bone_168;
void func_001564B8(Mtx_168 *, Mtx_168 *, Mtx_168 *);
void func_001577D0(Mtx_168 *, Vec3_168 *, s16, f32);
void func_001590C0(Mtx_168 *);
void func_001627A0(void *, s32, Mtx_168 *);

void func_001688C8(u8 *o, Vec3_168 pos, s16 ang, void *anim, s32 idx, Mtx_168 *out, f32 scale)
{
    Mtx_168 tmp;
    Mtx_168 rot;
    Bone_168 *b = (Bone_168 *)(o + o[0x22] * 16);
    f32 inv;
    s32 i;

    if (anim != NULL) {
        func_001627A0(anim, b[idx].id, &tmp);
    } else {
        func_001590C0(&tmp);
    }
    func_001564B8(out, &b[idx].m, &tmp);
    inv = 1.0f / scale;
    for (i = 0; i < 3; i++) {
        out->m[i][0] *= inv;
        out->m[i][1] *= inv;
        out->m[i][2] *= inv;
    }
    func_001577D0(&rot, &pos, ang + 0x4000, scale);
    func_001564B8(out, out, &rot);
}
