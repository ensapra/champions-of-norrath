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

extern M2C_UNK xmlListSize;

void func_00107AF0(void) {
    s32 *var_3;
    s32 var_5;
    s32 var_7;
    s32 var_8;
    s32 var_9;
    void *temp_2;
    void *temp_4;

    temp_2 = &xmlListSize + 0x18;
    var_9 = 0;
    var_3 = temp_2 + 0xC;
    var_8 = 1;
    do {
        var_7 = 0;
        if (*var_3 > 0) {
            var_5 = 0;
            temp_4 = var_9 + temp_2;
            do {
                M2C_FIELD((M2C_FIELD(temp_4, s32 *, 0) + var_5), s32 *, 0x18) = 0;
                var_7 += 1;
                var_5 += 0x1C;
            } while (var_7 < M2C_FIELD(temp_4, s32 *, 0xC));
        }
        var_8 -= 1;
        var_9 += 0x14;
        var_3 += 0x14;
    } while (var_8 >= 0);
}
