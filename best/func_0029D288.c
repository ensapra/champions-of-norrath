typedef struct { char p[0x1C]; f32 f1C; } Sub;
typedef struct { f32 x, y, z; } V3;
typedef struct {
    s8 b0; char p1[3]; s32 i4; s32 i8; Sub *sC; u32 i10; void *p14; s32 i18;
    V3 a;
    char p2[0xDC - 0x28];
    V3 b;
} Hdr;
typedef struct {
    s8 b0; char p1[3]; s32 i4; s32 i8; Sub *sC; u32 i10; void *p14; s32 i18;
    char body[0x19C - 0x1C];
    Sub *s19C; s32 i1A0, i1A4, i1A8, i1AC;
} X;
extern char D_0044E670[], D_00451340[];
extern u32 D_00483E5C;
extern s32 D_004844A4;
s32 func_0015E948(void *);
void func_00194390(void *, s32, s32);

void func_0029D288(X *self, s32 idx, s32 a2, Sub *a3, s32 a4, s32 a5) {
    s32 i;
    Hdr *h;
    f32 m;
    i = 0;
    self->b0 = a2;
    self->p14 = D_0044E670;
    self->i4 = 0;
    self->sC = a3;
    self->i8 = 0;
    D_00483E5C = D_00483E5C * 0x19660D + 0x3C6EF35F;
    self->i10 = D_00483E5C >> 16;
    self->p14 = D_00451340;
    self->i18 = 0;
    if (a4 != 0) func_00194390(&self->i18, a4, a4);
    self->i1A4 = idx;
    self->i1A0 = D_004844A4 + idx * 60;
    self->s19C = a3;
    h = (Hdr *)self;
    for (; i < 16; i++, h = (Hdr *)((char *)h + 0xC)) {
        do {
            h->a.x = 2.0f * ((f32)func_0015E948(self) * 0.0000152587890625f) - 1.0f;
            h->a.y = 2.0f * ((f32)func_0015E948(self) * 0.0000152587890625f) - 1.0f;
            h->a.z = 2.0f * ((f32)func_0015E948(self) * 0.0000152587890625f) - 1.0f;
        } while (h->a.x * h->a.x + h->a.y * h->a.y + h->a.z * h->a.z > 1.0f);
        m = self->sC->f1C;
        h->a.z = h->a.z * m;
        h->a.x = h->a.x * m;
        h->a.y = h->a.y * m;
        do {
            h->b.x = 2.0f * ((f32)func_0015E948(self) * 0.0000152587890625f) - 1.0f;
            h->b.y = 2.0f * ((f32)func_0015E948(self) * 0.0000152587890625f) - 1.0f;
            h->b.z = 2.0f * ((f32)func_0015E948(self) * 0.0000152587890625f) - 1.0f;
        } while (h->b.x * h->b.x + h->b.y * h->b.y + h->b.z * h->b.z > 1.0f);
    }
    self->i1AC = a5;
    self->i1A8 = a2;
}
