extern f32 D_004827A0;
extern f32 D_004827A4;
extern f32 D_004827A8;
extern f32 D_004827AC;
typedef struct {
    u8 p0[0xE]; s16 s0E; s16 s10; s16 s12; u8 p14[4]; s16 s18; s16 s1A; s16 s1C; u8 p1E[6];
    f32 f24; f32 f28; f32 f2C; u8 p30[8]; s16 s38; s16 s3A; s16 s3C; u8 p3E[4]; s16 s42; s16 s44; s16 s46;
    u8 p48[4]; f32 f4C; f32 f50; f32 f54;
} T;
void func_00296790(T *p) {
    f32 two = 2.0f;
    p->s18 = 0x14;
    p->f54 = D_004827AC;
    p->s1A = 2;
    p->f28 = D_004827A0;
    p->f2C = D_004827A4;
    p->f4C = two;
    p->s44 = 5;
    p->f50 = D_004827A8;
    p->s46 = 1;
    p->s0E = 1;
    p->f24 = two;
    p->s10 = 1;
    p->s12 = 1;
    p->s1C = 5;
    p->s38 = 1;
    p->s42 = 1;
    p->s3A = 1;
    p->s3C = 1;
}
