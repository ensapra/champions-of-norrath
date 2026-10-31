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

s32 Add__t6VIList1ZQ27VIScene12VISceneOccup(s32);   /* extern */

s32 InsertActor__7VISceneiii(void *arg0, void *arg1, s16 arg2, s16 arg3) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 var_2;
    void *temp_4;

    temp_2 = Add__t6VIList1ZQ27VIScene12VISceneOccup(arg0 + 0x3D8);
    var_2 = -1;
    if (temp_2 >= 0) {
        temp_4 = M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x50) + (arg2 * 0x250)), s32 *, 0x60) + (arg3 * 0x78);
        temp_2_2 = M2C_FIELD(temp_4, s32 *, 0x68);
        if (temp_2_2 == -1) {
            M2C_FIELD(temp_2, s32 *, 0x14) = temp_2_2;
            M2C_FIELD(temp_4, s32 *, 0x68) = temp_2;
        } else {
            M2C_FIELD(M2C_FIELD(temp_4, void **, 0x6C), s32 *, 0x10) = temp_2;
            M2C_FIELD(temp_2, s32 *, 0x14) = (s32) M2C_FIELD(temp_4, void **, 0x6C);
        }
        M2C_FIELD(temp_4, void **, 0x6C) = (void *) temp_2;
        M2C_FIELD(temp_2, s32 *, 0x10) = -1;
        temp_2_3 = M2C_FIELD(arg1, s32 *, 0x98);
        if (temp_2_3 == -1) {
            M2C_FIELD(temp_2, s32 *, 0xC) = temp_2_3;
            M2C_FIELD(arg1, s32 *, 0x98) = temp_2;
        } else {
            M2C_FIELD(M2C_FIELD(arg1, void **, 0x9C), s32 *, 8) = temp_2;
            M2C_FIELD(temp_2, s32 *, 0xC) = (s32) M2C_FIELD(arg1, void **, 0x9C);
        }
        M2C_FIELD(arg1, void **, 0x9C) = (void *) temp_2;
        M2C_FIELD(temp_2, s16 *, 0) = arg2;
        var_2 = 0;
        M2C_FIELD(temp_2, s16 *, 2) = arg3;
        M2C_FIELD(temp_2, void **, 4) = arg1;
        M2C_FIELD(temp_2, s32 *, 8) = -1;
    }
    return var_2;
}
