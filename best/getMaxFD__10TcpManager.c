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

s32 getMaxFD__10TcpManager(void *arg0) {
    s32 temp_3;
    s32 var_6;
    void *var_4;

    var_6 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x78) != 0) {
        var_6 = M2C_FIELD(arg0, s32 *, 0x74) + 1;
    }
    var_4 = M2C_FIELD(arg0, void **, 0x6C);
    if (var_4 != NULL) {
        do {
            if (M2C_FIELD(var_4, s32 *, 0x10) != 2) {
                temp_3 = M2C_FIELD(M2C_FIELD(var_4, void **, 8), s32 *, 0x4C);
                var_6 = (var_6 < temp_3) ? (temp_3 + 1) : var_6;
            }
            var_4 = M2C_FIELD(var_4, void **, 0);
        } while (var_4 != NULL);
    }
    return var_6;
}
