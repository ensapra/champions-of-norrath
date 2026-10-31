typedef struct { f32 x, y, z; } V3;
extern u8 D_004F4060[];
void func_0013C918(s32);
void func_0013CB88(void);
void func_0013E928(V3 *arg0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 a8, s32 a9) {
    V3 v = *arg0;
    f32 inv;
    volatile u8 *d;
    inv = 1.0f / __builtin_sqrtf(v.x * v.x + v.y * v.y + v.z * v.z);
    v.x *= inv; v.y *= inv; v.z *= inv;
    d = D_004F4060;
    *(volatile V3 *)d = v;
    *(volatile s32 *)(d + 0x34) = a9;
    d[0x2B] = (u8)a8;
    d[0x24] = (u8)a1; d[0x25] = (u8)a2; d[0x26] = (u8)a3; d[0x27] = (u8)a4;
    d[0x28] = (u8)a5; d[0x29] = (u8)a6; d[0x2A] = (u8)a7;
    d[0x33] = (u8)a8;
    d[0x2C] = (u8)a1; d[0x2D] = (u8)a2; d[0x2E] = (u8)a3; d[0x2F] = (u8)a4;
    d[0x30] = (u8)a5; d[0x31] = (u8)a6; d[0x32] = (u8)a7;
    func_0013C918(a9);
    func_0013CB88();
}
