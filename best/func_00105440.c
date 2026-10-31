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

M2C_UNK func_0011AD68(s32);                         /* extern */
extern M2C_UNK Update__17VIParticleEmitter;

void func_00105440(s32 arg0) {
    M2C_UNK (*temp_2)(s32, void *);
    s32 *temp_16_2;
    s32 temp_16;
    s32 temp_3;
    void *temp_17;
    void *temp_5;

    temp_5 = &Update__17VIParticleEmitter + 0x110;
    temp_16 = arg0 * 0xB4;
    temp_17 = temp_16 + temp_5;
    temp_2 = M2C_FIELD(temp_17, M2C_UNK (**)(s32, void *), 0xB0);
    if (temp_2 != NULL) {
        temp_2(M2C_FIELD(temp_17, s32 *, 0), temp_17);
    }
    temp_16_2 = temp_16 + 0x30 + temp_5;
    temp_3 = *temp_16_2;
    if (temp_3 >= 0) {
        func_0011AD68(temp_3);
        *temp_16_2 = -1;
    }
    M2C_FIELD(temp_17, s32 *, 0) = 0;
}
