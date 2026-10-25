/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

void func_0018D2F0(void *arg0) {
    void *var_2;

    var_2 = M2C_FIELD(arg0, void **, 0x37C);
    M2C_FIELD(arg0, s32 *, 0x370) = 0;
    do {
        M2C_FIELD(var_2, s32 *, 4) = 0;
        var_2 = M2C_FIELD(var_2, void **, 0xC);
    } while (var_2 != NULL);
}
