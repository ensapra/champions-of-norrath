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

extern M2C_UNK (*D_011B1E18)(M2C_UNK *);

void xmlBufferFree(M2C_UNK *arg0) {
    M2C_UNK *temp_2;

    if (arg0 != NULL) {
        temp_2 = *arg0;
        if (temp_2 != NULL) {
            D_011B1E18(temp_2);
        }
        D_011B1E18(arg0);
    }
}
