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

extern M2C_UNK D_011D8AD8;

void xmlStopParser(void *arg0) {
    void *temp_3;

    temp_3 = M2C_FIELD(arg0, void **, 0x24);
    M2C_FIELD(arg0, s32 *, 0xA0) = -1;
    if (temp_3 != NULL) {
        M2C_FIELD(temp_3, M2C_UNK **, 0x10) = &D_011D8AD8;
    }
}
