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

extern s32 D_011B1AA0;
extern M2C_UNK D_011B1AB8;

s32 xmlRegisterInputCallbacks(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_4;
    s32 temp_8;
    s32 var_2;
    void *temp_6;

    var_2 = -1;
    temp_4 = D_011B1AA0;
    temp_8 = temp_4 * 0x10;
    if (temp_4 < 0xF) {
        D_011B1AA0 = temp_4 + 1;
        var_2 = temp_4;
        temp_6 = &D_011B1AB8 + temp_8;
        *(temp_8 + &D_011B1AB8) = arg0;
        M2C_FIELD(temp_6, s32 *, 4) = arg1;
        M2C_FIELD(temp_6, s32 *, 8) = arg2;
        M2C_FIELD(temp_6, s32 *, 0xC) = arg3;
    }
    return var_2;
}
