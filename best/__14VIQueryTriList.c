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

M2C_UNK __t7VIArray1Z7VIVect3(s32);                 /* extern */

void __14VIQueryTriList(void *arg0) {
    s32 var_4;
    void *temp_3;
    void *var_2;

    __t7VIArray1Z7VIVect3(arg0 + 0xC);
    __t7VIArray1Z7VIVect3(arg0 + 0x14);
    temp_3 = arg0 + 0x1C;
    var_2 = arg0 + 0x2C;
    var_4 = 5;
    M2C_FIELD(temp_3, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x1C) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 4) = 0.0f;
    do {
        var_4 -= 1;
        M2C_FIELD(var_2, f32 *, 0) = 0.0f;
        M2C_FIELD(var_2, f32 *, 4) = 0.0f;
        M2C_FIELD(var_2, f32 *, 8) = 0.0f;
        M2C_FIELD(var_2, f32 *, 0xC) = 0.0f;
        var_2 += 0x10;
    } while (var_4 != -1);
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
