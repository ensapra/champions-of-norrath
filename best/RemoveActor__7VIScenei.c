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

s32 Erase__t6VIList1ZQ27VIScene12VISceneOccupi(s32, s16 *, s16 *, s16, s32); /* extern */

s32 RemoveActor__7VIScenei(s32 arg0, void *arg1) {
    s16 *temp_17;
    s16 *var_6;
    s16 temp_7;
    s16 var_2;
    s32 temp_8;
    void *temp_16;
    void *temp_3;
    void *temp_5;

    var_6 = M2C_FIELD(arg1, s16 **, 0x98);
    temp_16 = arg0 + 0x4C;
    if (var_6 != (s16 *)-1) {
        var_2 = *var_6;
loop_2:
        temp_5 = M2C_FIELD(var_6, void **, 0x10);
        temp_17 = M2C_FIELD(var_6, s16 **, 8);
        temp_7 = M2C_FIELD(var_6, s16 *, 2);
        temp_8 = var_2 * 0x250;
        if (temp_5 != (void *)-1) {
            M2C_FIELD(temp_5, void **, 0x14) = (void *) M2C_FIELD(var_6, void **, 0x14);
        } else {
            M2C_FIELD((M2C_FIELD((M2C_FIELD(temp_16, s32 *, 4) + temp_8), s32 *, 0x60) + (temp_7 * 0x78)), void **, 0x6C) = (void *) M2C_FIELD(var_6, void **, 0x14);
        }
        temp_3 = M2C_FIELD(var_6, void **, 0x14);
        if (temp_3 == (void *)-1) {
            M2C_FIELD((M2C_FIELD((M2C_FIELD(temp_16, s32 *, 4) + temp_8), s32 *, 0x60) + (temp_7 * 0x78)), void **, 0x68) = (void *) M2C_FIELD(var_6, void **, 0x10);
        } else {
            M2C_FIELD(temp_3, void **, 0x10) = (void *) M2C_FIELD(var_6, void **, 0x10);
        }
        if (Erase__t6VIList1ZQ27VIScene12VISceneOccupi(arg0 + 0x3D8, var_6, var_6, temp_7, temp_8) >= 0) {
            var_6 = temp_17;
            if (var_6 != (s16 *)-1) {
                var_2 = *var_6;
                goto loop_2;
            }
            goto block_20;
        }
        return -1;
    }
block_20:
    M2C_FIELD(arg1, s32 *, 0x9C) = -1;
    M2C_FIELD(arg1, s16 **, 0x98) = (s16 *)-1;
    return 0;
}
