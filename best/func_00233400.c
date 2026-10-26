extern "C" {
typedef struct { f32 x, y, z; } V3;
typedef struct { V3 v; u8 pad[20]; } W;
extern void func_00109808(void *, s32, s32, s32);
extern void func_00156CB0(void *, s32, s32);
extern void func_001590C0(void *);
extern void func_00168A38(s32, V3 *, s32, void *, s32, V3 *, V3 *, f32);
extern void func_0016AE78(s32, s32, s32, V3 *, void *, s32, s32, s32, s32);
#define STEP(c, idx, ax, sh, k0, k1) \
    t = *(s32 **)(a0 + 0x24); \
    h = *(s16 *)(a0 + 0x38); \
    o = t[3]; \
    c = *(V3 *)(a0 + 0x10); \
    func_00168A38(o, &c, h, a0 + 0x120, idx, &sp10, &sp20, 1.0f); \
    func_001590C0(sp30); \
    func_00159550(sp30, sp10.x, sp10.y, sp10.z); \
    func_00156CB0(sp30, ax, (s16)(sh)); \
    u = *(s32 **)(a0 + 0x24); \
    func_0016AE78(u[k0], u[k1], 1, &sp10, sp30, 0, -1, 0, 0);
void func_00233400(u8 *a0) {
    V3 sp10; V3 sp20; f32 sp30[16];
    W c0, c1, c2, c3; V3 c4;
    s32 *t, *u; s32 h, o;
    u = *(s32 **)(a0 + 0x24);
    func_00109808(a0, u[3], u[5], 0);
    STEP(c0.v, 0, 2, *(u16 *)(a0 + 0x328) << 7, 9, 11)
    STEP(c1.v, 1, 1, *(u16 *)(a0 + 0x328) << 12, 13, 15)
    STEP(c2.v, 2, 0, *(u16 *)(a0 + 0x328) << 8, 17, 19)
    STEP(c3.v, 3, 2, *(u16 *)(a0 + 0x328) << 10, 21, 23)
    STEP(c4, 4, 2, (-(s32)*(u16 *)(a0 + 0x328)) << 9, 25, 27)
}
}
