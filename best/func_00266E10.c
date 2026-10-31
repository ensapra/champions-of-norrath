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

void func_00266E10(void *arg0) {
    s32 var_4;
    void *temp_3;

    temp_3 = M2C_FIELD(arg0, void **, 4);
    var_4 = 0;
    if (M2C_FIELD(temp_3, u8 *, 0x58) != 0) {
loop_2:
        var_4 += 1;
        if (var_4 < (s32) M2C_FIELD(temp_3, u8 *, 0x58)) {
            goto loop_2;
        }
    }
}
