typedef struct { f32 x, y, z; } V3;
void func_0013C918(s32);
void func_0013CB88(void);
void func_0013E928(V3 *arg0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 a8, s32 a9) {
    V3 v = *arg0;
    f32 inv = 1.0f / __builtin_sqrtf(v.x * v.x + v.y * v.y + v.z * v.z);
    v.x *= inv; v.y *= inv; v.z *= inv;
    *(V3 *)D_004F4060 = v;
    *(s32 *)(D_004F4060 + 0x34) = a9;
    D_004F4060[0x2B] = a8;
    D_004F4060[0x24] = a1; D_004F4060[0x25] = a2; D_004F4060[0x26] = a3; D_004F4060[0x27] = a4;
    D_004F4060[0x28] = a5; D_004F4060[0x29] = a6; D_004F4060[0x2A] = a7;
    D_004F4060[0x33] = a8;
    D_004F4060[0x2C] = a1; D_004F4060[0x2D] = a2; D_004F4060[0x2E] = a3; D_004F4060[0x2F] = a4;
    D_004F4060[0x30] = a5; D_004F4060[0x31] = a6; D_004F4060[0x32] = a7;
    func_0013C918(a9);
    func_0013CB88();
}
