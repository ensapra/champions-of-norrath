typedef struct { f32 x, y, z; } V3;
typedef struct {
    u8 p0[0xC]; u32 f0C; u8 p10[0xC]; f32 f1C; u8 p20[0x18]; s16 f38; u8 p3A[0xE];
    void *f48; s32 f4C; s8 f50; u8 p51[3]; s8 f54; u8 p55[3]; s32 f58; s32 f5C; V3 f60; s32 f6C; u8 p70[5]; s8 f75;
} O;
extern s32 D_004844A4;
extern u8 D_00449DE0[], D_0044D378[];
void func_001411F0(void *, V3, s32, s32);
void func_00194390(void *, s32, s32, void *);
s32 func_0024C6A8(s32, void *, f32, f32, f32);

void func_00154070(O *o, s32 a1, V3 va, V3 vb, s32 h, s32 p5, s32 p6, s32 p7) {
    V3 ta = va;
    s32 *q;
    func_001411F0(o, ta, a1, 0);
    q = &o->f4C;
    o->f0C |= 0x4081;
    *q = 0;
    o->f48 = D_0044D378;
    o->f1C = 12.0f;
    o->f50 = 0;
    if (p5) func_00194390(q, p5, p5, q);
    o->f75 = 1;
    o->f48 = D_00449DE0;
    o->f60 = vb;
    o->f54 = 0;
    o->f38 = h;
    o->f0C |= 1;
    o->f58 = D_004844A4 + 0x12C;
    if (p6) o->f5C = func_0024C6A8(p6, (u8 *)o + 0x10, 1.0f, 1.0f, 0.0f);
    else o->f5C = 0;
    o->f6C = p7;
}
