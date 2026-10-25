/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G8, tried by autopilot */
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

s32 func_002D8468(void *arg0) {
    void *temp_5;

    temp_5 = M2C_FIELD(arg0, void **, 0);
    if ((temp_5 == NULL) || (M2C_FIELD(arg0, s32 *, 4) != M2C_FIELD(temp_5, s32 *, 0x18)) || !(M2C_FIELD(temp_5, s32 *, 0x10) & 1)) {
        return 0;
    }
    return 1;
}
