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

extern M2C_UNK D_0118F340;
extern M2C_UNK D_0118F350;

void __static_initialization_and_destruction_0_0107D2C0(s32 arg0, s32 arg1) {
    if ((arg1 == 0xFFFF) && (arg0 == 1)) {
        M2C_FIELD(&D_0118F340, f32 *, 8) = 0.0f;
        M2C_FIELD(&D_0118F340, f32 *, 4) = -19.599998f;
        M2C_FIELD(&D_0118F340, f32 *, 0) = 0.0f;
        if (arg0 == 1) {
            M2C_FIELD(&D_0118F350, f32 *, 8) = 0.0f;
            M2C_FIELD(&D_0118F350, f32 *, 4) = -1.0f;
            M2C_FIELD(&D_0118F350, f32 *, 0) = 0.0f;
        }
    }
}
