typedef struct { f32 m[9]; } Mat3;
typedef struct { f32 x, y, z; } V3;
void func_00143630(void *);
void func_00156610(Mat3 *m, s32 axis, s16 ang);
f32 D_00482238;
f32 D_0048223C;
f32 D_00482240;
f32 D_00482244;

typedef struct {
    char pad0[0x2A4];
    f32 w[8];
    char pad1[0x320 - 0x2C4];
    f32 f320;
    char pad2[0x45C - 0x324];
    Mat3 mat;
} Tgt;

typedef struct {
    char pad0[0x10];
    V3 pos;
    char pad1[0x16C - 0x1C];
    f32 f16C, f170, f174, f178;
    char pad2[4];
    s32 idx;
    char pad3[8];
    Tgt *volatile tgt;
    Mat3 mat;
} Self;

void func_00277440(Self *self) {
    V3 d;
    V3 e;
    V3 s;
    f32 f, t;
    char *slot;
    V3 *vec;
    char *tg;
    self->mat = self->tgt->mat;
    d.x = self->mat.m[6];
    d.y = self->mat.m[7];
    d.z = self->mat.m[8];
    tg = (char *)self->tgt;
    slot = tg + self->idx * 4;
    vec = (V3 *)(tg + self->idx * 12 + 0x534);
    f = -**(f32 **)(slot + 0x808) * 39.0f * (1.0f - *(f32 *)(slot + 0x2A4)) + self->f178 * 39.0f;
    e.z = d.z * f;
    e.y = d.y * f;
    e.x = d.x * f;
    s.x = vec->x + e.x;
    s.y = vec->y + e.y;
    s.z = vec->z + e.z;
    self->pos = s;
    func_00143630(self);
    if (self->f174 != 0.0f) {
        func_00156610(&self->mat, 2, (s16)(self->tgt->f320 * D_0048223C * (self->f174 * D_00482238)));
    }
    t = self->f170 + self->f16C * D_00482240 * D_00482244;
    self->f170 = t;
    if (t >= 360.0f) self->f170 = t - 360.0f;
}
