/* machine draft (m2c) for ee-gcc-2.96 -Os -G8 -mno-check-zero-division, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

s32 Vertex__8VIRasterRC8VIVect2I(void *arg0, void *arg1) {
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;

    M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0) = (f32) ((((f32) M2C_FIELD(arg1, s32 *, 0) - M2C_FIELD(arg0, f32 *, 0x4544)) + 0.5f) * M2C_FIELD(arg0, f32 *, 0x454C));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 4) = (f32) ((((f32) M2C_FIELD(arg1, s32 *, 4) - M2C_FIELD(arg0, f32 *, 0x4548)) + 0.5f) * -M2C_FIELD(arg0, f32 *, 0x4550));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), M2C_UNK32 *, 8) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), M2C_UNK32 *, 0xC) = 0x3F800000;
    temp_3 = M2C_FIELD(arg0, void **, 0x34);
    M2C_FIELD(arg0, void **, 0x34) = (void *) (temp_3 + 0x10);
    M2C_FIELD(temp_3, f32 *, 0x10) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), M2C_UNK32 *, 8) = 0x3F800000;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), M2C_UNK32 *, 0xC) = 0;
    temp_3_2 = M2C_FIELD(arg0, void **, 0x34);
    M2C_FIELD(arg0, void **, 0x34) = (void *) (temp_3_2 + 0x10);
    M2C_FIELD(temp_3_2, f32 *, 0x10) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), M2C_UNK32 *, 8) = (M2C_UNK32) M2C_FIELD(arg0, M2C_UNK32 *, 0x1C);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), M2C_UNK32 *, 0xC) = 0;
    temp_3_3 = M2C_FIELD(arg0, void **, 0x34);
    M2C_FIELD(arg0, void **, 0x34) = (void *) (temp_3_3 + 0x10);
    M2C_FIELD(temp_3_3, f32 *, 0x10) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x24);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), M2C_UNK32 *, 8) = (M2C_UNK32) M2C_FIELD(arg0, M2C_UNK32 *, 0x28);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), M2C_UNK32 *, 0xC) = (M2C_UNK32) M2C_FIELD(arg0, M2C_UNK32 *, 0x2C);
    M2C_FIELD(arg0, void **, 0x34) = (void *) (M2C_FIELD(arg0, void **, 0x34) + 0x10);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + 1);
    return 0;
}
