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

s32 close_key_t_cmp__FPC11close_key_tT0(void *arg0, void *arg1) {
    s32 var_6;
    u32 temp_2_2;
    u32 temp_3_2;
    u64 temp_2;
    u64 temp_3;

    temp_3 = M2C_FIELD(arg0, u64 *, 0);
    temp_2 = M2C_FIELD(arg1, u64 *, 0);
    var_6 = 1;
    if (temp_2 >= temp_3) {
        var_6 = -1;
        if (temp_3 >= temp_2) {
            temp_2_2 = M2C_FIELD(arg0, u32 *, 8);
            var_6 = 1;
            temp_3_2 = M2C_FIELD(arg1, u32 *, 8);
            if (temp_3_2 >= temp_2_2) {
                var_6 = (temp_2_2 >= temp_3_2) ? 0 : -1;
            }
        }
    }
    return var_6;
}
