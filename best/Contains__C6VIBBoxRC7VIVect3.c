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

s32 Contains__C6VIBBoxRC7VIVect3(void *arg0, void *arg1) {
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    s32 var_2;

    temp_f3 = M2C_FIELD(arg1, f32 *, 0);
    var_2 = 0;
    if (M2C_FIELD(arg0, f32 *, 0) <= temp_f3) {
        temp_f2 = M2C_FIELD(arg1, f32 *, 4);
        var_2 = 0;
        if (M2C_FIELD(arg0, f32 *, 4) <= temp_f2) {
            temp_f1 = M2C_FIELD(arg1, f32 *, 8);
            var_2 = 0;
            if ((M2C_FIELD(arg0, f32 *, 8) <= temp_f1) && (temp_f3 <= M2C_FIELD(arg0, f32 *, 0xC)) && (temp_f2 <= M2C_FIELD(arg0, f32 *, 0x10))) {
                var_2 = 1;
                if (!(temp_f1 <= M2C_FIELD(arg0, f32 *, 0x14))) {
                    var_2 = 0;
                }
            }
        }
    }
    return var_2;
}
