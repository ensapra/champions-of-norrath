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

s32 fwrite(s32, M2C_UNK, s32, s32);                 /* extern */
extern void *_impure_ptr;

s32 xmlBufferDump(s32 arg0, void *arg1) {
    s32 temp_3;
    s32 var_7;

    var_7 = arg0;
    if (arg1 != NULL) {
        temp_3 = M2C_FIELD(arg1, s32 *, 0);
        if (temp_3 != 0) {
            if (var_7 == 0) {
                var_7 = M2C_FIELD(_impure_ptr, s32 *, 8);
            }
            return fwrite(temp_3, 1, M2C_FIELD(arg1, s32 *, 4), var_7);
        }
    }
    return 0;
}
