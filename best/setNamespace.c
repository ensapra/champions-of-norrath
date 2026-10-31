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

s32 xmlSearchNs(s32, s32, s32);                     /* extern */
M2C_UNK xmlSetNs(s32, s32, s32);                    /* extern */

void setNamespace(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 temp_3;
    s32 var_6;

    var_6 = xmlSearchNs(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x34), arg1);
    if (var_6 == 0) {
        temp_2 = M2C_FIELD(arg0, s32 *, 0x38);
        if (temp_2 >= 2) {
            temp_3 = M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x40) + (temp_2 * 4)), s32 *, -8);
            if (temp_3 != 0) {
                var_6 = xmlSearchNs(M2C_FIELD(arg0, s32 *, 8), temp_3, arg1);
            }
        }
    }
    xmlSetNs(M2C_FIELD(arg0, s32 *, 0x34), var_6, var_6);
}
