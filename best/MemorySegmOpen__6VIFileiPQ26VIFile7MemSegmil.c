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

M2C_UNK MemorySegmCalcSegm__6VIFile(void *);        /* extern */
s32 __builtin_vec_new(s32);                         /* extern */

s32 MemorySegmOpen__6VIFileiPQ26VIFile7MemSegmil(void *arg0, s32 arg1, void *arg2, s32 arg3, s64 arg4) {
    s32 temp_2;
    s32 var_2;
    s32 var_5;
    s32 var_7;
    s32 var_8;
    s64 temp_3_2;
    void *temp_3;
    void *temp_4;
    void *var_6;

    var_2 = -1;
    M2C_FIELD(arg0, s32 *, 4) = arg3;
    if (arg3 & 7) {
        M2C_FIELD(arg0, s32 *, 0x34) = arg1;
        temp_2 = __builtin_vec_new(arg1 * 0x18);
        var_2 = -1;
        M2C_FIELD(arg0, s32 *, 0x38) = temp_2;
        if (temp_2 != 0) {
            M2C_FIELD(arg0, s64 *, 0x20) = 0;
            if (arg1 > 0) {
                var_5 = temp_2;
                var_6 = arg2;
                var_8 = arg1;
                var_7 = 0;
                do {
                    temp_3 = var_7 + var_5;
                    var_8 -= 1;
                    M2C_FIELD(temp_3, s64 *, 0) = (s64) M2C_FIELD(arg0, s64 *, 0x20);
                    M2C_FIELD(temp_3, s64 *, 8) = (s64) M2C_FIELD(var_6, s64 *, 0);
                    temp_3_2 = M2C_FIELD(var_6, s64 *, 8);
                    var_6 += 0x10;
                    M2C_FIELD((temp_3 + 8), s64 *, 8) = temp_3_2;
                    var_5 = M2C_FIELD(arg0, s32 *, 0x38);
                    temp_4 = var_7 + var_5;
                    var_7 += 0x18;
                    M2C_FIELD(arg0, s64 *, 0x20) = (s64) (M2C_FIELD(arg0, s64 *, 0x20) + M2C_FIELD(temp_4, s64 *, 8));
                } while (var_8 != 0);
            }
            M2C_FIELD(arg0, s64 *, 0x28) = arg4;
            if (arg3 & 8) {
                M2C_FIELD(arg0, s64 *, 0x28) = 0;
                goto block_11;
            }
            if ((arg3 & 0x10) && (arg3 & 6)) {
                M2C_FIELD(arg0, s64 *, 0x10) = arg4;
            } else {
block_11:
                M2C_FIELD(arg0, s64 *, 0x10) = 0;
            }
            MemorySegmCalcSegm__6VIFile(arg0);
            M2C_FIELD(arg0, s32 *, 8) = 0;
            var_2 = 0;
        }
    }
    return var_2;
}
