typedef struct { s64 p0[2]; s16 h10[4]; s16 h18[4]; s8 b20; s8 b21; u8 p22[0x48-0x22]; } T149250;
typedef struct { f32 x, y, z; } V149250;
typedef struct { s16 h; s16 p[3]; } E8;
extern u8 D_0044CE68[];
extern u8 D_00462260[];
extern u8 D_00483B70[];
void func_001478B0(void *, void *);
void func_00148738(void *, s32);
s32 func_00165DC0(void *, void *);
void func_0024D308(s32, void *, f32);
void func_00303EB8(void *, void *, s32, s32);

void func_00149250(u8 *arg0, V149250 *arg1, s32 a2, s32 a3, s32 a4, s32 arg5, T149250 *arg6, f32 f) {
    V149250 v;
    u8 name[0x40];
    s32 i;
    E8 *e = (E8 *)(arg0 + 0x16C);
    T149250 *t = (T149250 *)(arg0 + 0x148);
    v = *arg1;
    func_001478B0(arg0, &v);
    *(void **)(arg0 + 0x48) = D_0044CE68;
    for (i = 3; i >= 0; i--) e[i].h = -1;
    t->b20 = -1;
    t->b21 = -1;
    for (i = 0; i < 4; i++) {
        t->h10[i] = 0;
        t->h18[i] = 0;
    }
    *(f32 *)(arg0 + 0x240) = f;
    *(s32 *)(arg0 + 0xC) |= 0x4000;
    if (arg6) {
        *t = *arg6;
        arg0[0x238] = 1;
        *(s32 *)(arg0 + 0xC) = (*(s32 *)(arg0 + 0xC) | 0x100000) & ~0x800;
    }
    arg0[0x23A] = 0;
    *(s32 *)(arg0 + 0x234) = 0;
    func_00148738(arg0, arg5);
    if (*(s8 *)(arg0 + 0x238) && (arg5 & 0x19)) {
        u32 s = *(u32 *)(arg0 + 0x44) * 0x19660D + 0x3C6EF35F;
        *(u32 *)(arg0 + 0x44) = s;
        func_00303EB8(name, D_00462260, (s >> 16) % 3 + 1, 3);
        func_0024D308(func_00165DC0(D_00483B70, name), arg0, 1.0f);
    }
}
