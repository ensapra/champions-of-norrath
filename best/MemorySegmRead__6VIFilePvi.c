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

M2C_UNK memcpy(s32, s32, s64, s64, s64, s32);       /* extern */

s32 MemorySegmRead__6VIFilePvi(void *arg0, s32 arg1, s64 arg2) {
    s32 temp_5;
    s32 var_19;
    s64 temp_16;
    s64 temp_16_2;
    s64 temp_20;
    s64 temp_2;
    s64 temp_4;
    s64 temp_6;
    s64 temp_7;
    s64 temp_8;
    s64 var_18;
    void *temp_2_2;

    M2C_FIELD(arg0, s32 *, 8) = 0;
    temp_2 = M2C_FIELD(arg0, s64 *, 0x28) - M2C_FIELD(arg0, s64 *, 0x10);
    temp_20 = (s64) (((temp_2 < arg2) ? temp_2 : arg2) << 0x20) >> 0x20;
    var_19 = arg1;
    if (temp_20 > 0) {
        var_18 = temp_20;
        do {
            temp_7 = var_18;
            temp_8 = M2C_FIELD(arg0, s64 *, 0x40);
            temp_2_2 = (M2C_FIELD(arg0, s32 *, 0x3C) * 0x18) + M2C_FIELD(arg0, s32 *, 0x38);
            temp_16 = M2C_FIELD(temp_2_2, s64 *, 8) - temp_8;
            temp_16_2 = (s64) (((temp_7 < temp_16) ? temp_7 : temp_16) << 0x20) >> 0x20;
            temp_6 = temp_16_2;
            var_18 -= temp_16_2;
            memcpy(var_19, M2C_FIELD(temp_2_2, s32 *, 0x10) + (s32) M2C_FIELD(arg0, s64 *, 0x40), temp_6, temp_7, temp_8, M2C_FIELD(arg0, s32 *, 0x38));
            temp_5 = M2C_FIELD(arg0, s32 *, 0x3C);
            temp_4 = temp_16_2 + M2C_FIELD(arg0, s64 *, 0x40);
            M2C_FIELD(arg0, s64 *, 0x40) = temp_4;
            var_19 += temp_16_2;
            if ((temp_4 >= M2C_FIELD(((temp_5 * 0x18) + M2C_FIELD(arg0, s32 *, 0x38)), s64 *, 8)) && (temp_5 != M2C_FIELD(arg0, s32 *, 0x34))) {
                M2C_FIELD(arg0, s64 *, 0x40) = 0;
                M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (temp_5 + 1);
            }
        } while (var_18 > 0);
    }
    M2C_FIELD(arg0, s64 *, 0x10) = (s64) (temp_20 + M2C_FIELD(arg0, s64 *, 0x10));
    if (temp_20 < arg2) {
        M2C_FIELD(arg0, s32 *, 8) = 1;
        return -1;
    }
    return 0;
}
