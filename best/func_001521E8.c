typedef struct { f32 x, y, z; } Vec3;
typedef struct Em {
    u8 pad0[0xC]; s32 flags;
    u8 pad10[8]; f32 z18;
    u8 pad1C[0x2D0]; s16 ang2EC;
    u8 pad2EE[6]; f32 x2F4;
} Em;
typedef struct Self {
    u8 pad0[0x44]; s32 seed;
    u8 pad48[0x70C]; s16 x754; s16 x756;
    u8 pad758[8]; f32 x760;
} Self;
f32 D_0047FE38, D_0047FE3C, D_0047FE40, D_0047FE44, D_0047FE48, D_0047FE4C, D_0047FE50;
s32 D_004844A0, D_004844A4;
extern char D_00600D60[], D_00600DB0[], D_00600E00[], D_00600E50[];
extern void mat3x3_transposed_mul_vec3(Vec3 *, void *, Vec3 *);
extern void func_00156610(void *, s32, s32);
extern void func_0013EF30(Vec3 *, Vec3 *, Em ***, s32);
extern s16 func_0015A198(f32, f32);
extern void func_00180DA0(void *, void *, void *, f32);
extern void func_0017A818(s32, Vec3 *, f32, f32, Vec3 *);

#define RND(s) ((s)->seed = (s)->seed * 0x19660D + 0x3C6EF35F, (u32)(s)->seed >> 16)
#define RF(s) ((f32)(s32)RND(s) * (1.0f / 65536.0f))

void func_001521E8(Self *self, Vec3 *pos, void *mat, s32 extra)
{
    Vec3 in50, in40, v30, v20, v1A0, v190, v10, v0, v60, v70, tmp1C0;
    Em **list[16];
    f32 t = 0.0f;
    s32 i;

    in40.x = 0.0f;
    in40.y = RF(self) * D_0047FE38 + D_0047FE3C;
    in40.y *= -15.0f;
    in40.z = 0.0f;
    in50.x = 0.0f; in50.y = D_0047FE40; in50.z = 0.0f;
    mat3x3_transposed_mul_vec3(&v30, mat, &in50);
    func_00156610(mat, 0, self->x754);
    if (((D_004844A4 + extra) & 0xF) == 0) {
        Em **p;
        v60.x = pos->x - 12.0f; v60.y = pos->y - 12.0f; v60.z = pos->z - 60.0f;
        v70.x = pos->x - 12.0f; v70.y = pos->y + 12.0f; v70.z = pos->z + 10.0f;
        func_0013EF30(&v60, &v70, (Em ***)list, 0x40);
        for (p = list[0]; *p; p++) {
            Em *e = *p;
            if ((e->flags & 0x20) && !(e->flags & 1) && pos->z - e->z18 > 12.0f) {
                e->x2F4 = 82.0f;
                e->ang2EC = func_0015A198(v30.y + (RF(self) - 0.5f) * 0.25f,
                                          v30.x + (RF(self) - 0.5f) * 0.25f);
            }
        }
    }
    for (i = 0; i <= 0xFFFF; i += 0x2BB2) {
        mat3x3_transposed_mul_vec3(&v20, mat, &in40);
        v20.x += pos->x; v20.y += pos->y; v20.z += pos->z;
        if (v20.z < self->x760) {
            v0.x = (RF(self) - 0.5f) * 5.0f;
            v0.y = (RF(self) - 0.5f) * 5.0f;
            v0.z = t;
            v10.x = v20.x - v30.x * 34.0f + (RF(self) - 0.5f) * 36.0f;
            v10.y = v20.y - v30.y * 34.0f + (RF(self) - 0.5f) * 36.0f;
            v10.z = self->x760;
            func_00180DA0(D_00600E50, &v10, &v0, 0.0f);
        } else if (RND(self) & 1) {
            f32 z;
            v190.x = t; v190.y = t;
            v190.z = (f32)(-self->x756) * 15.0f * D_0047FE48;
            mat3x3_transposed_mul_vec3(&v1A0, mat, &v190);
            v1A0.x += v30.x + (RF(self) - 0.5f) * D_0047FE44;
            v1A0.y += v30.y + (RF(self) - 0.5f) * D_0047FE44;
            z = v1A0.z + v30.z + (RF(self) - 0.5f) * D_0047FE44 * D_0047FE4C;
            v1A0.z = z > -2.0f ? z : -2.0f;
            if (RND(self) & 0xFF)
                func_00180DA0(D_00600D60, &v20, &v1A0, 0.0f);
            else
                func_00180DA0(D_00600DB0, &v20, &v1A0, 0.0f);
            if ((RND(self) & 0x1FF) == 0) {
                v1A0.x = v30.x; v1A0.y = v30.z;
                v1A0.z = RF(self) * 10.0f + 2.0f;
                func_00180DA0(D_00600E00, &v20, &v1A0, 0.0f);
            }
        }
        func_00156610(mat, 0, 0x2BB2);
    }
    if (((D_004844A4 + extra) & 0x1F) == 0) {
        tmp1C0 = *pos;
        v10.x = pos->x - v30.x; v10.y = pos->y - v30.y; v10.z = pos->z - v30.z;
        func_0017A818(D_004844A0, &tmp1C0, D_0047FE50, 24.0f, &v10);
    }
}
