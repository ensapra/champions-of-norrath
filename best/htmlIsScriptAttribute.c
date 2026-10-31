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

s32 xmlStrEqual(void *, s32);                       /* extern */
extern M2C_UNK D_0118FDE8;

s32 htmlIsScriptAttribute(void *arg0) {
    s32 temp_2;
    s32 var_2;
    u32 var_16;

    var_2 = 0;
    if (arg0 != NULL) {
        var_2 = 0;
        if (M2C_FIELD(arg0, u8 *, 0) == 0x6F) {
            var_16 = 0;
            if (M2C_FIELD(arg0, u8 *, 1) != 0x6E) {
                goto block_7;
            }
loop_6:
            temp_2 = var_16 * 4;
            if (var_16 >= 0x12U) {
block_7:
                var_2 = 0;
            } else {
                var_16 += 1;
                var_2 = 1;
                if (xmlStrEqual(arg0, *(&D_0118FDE8 + temp_2)) == 0) {
                    goto loop_6;
                }
            }
        }
    }
    return var_2;
}
