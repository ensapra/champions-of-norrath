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

s32 SetLayerWrapMode__10VIMateriali18VIMaterialWrapMode(void *arg0, s32 arg1, s32 arg2) {
    s32 var_3;
    void *var_2;

    if (arg2 != 1) {
        if (arg2 < 2) {
            if (arg2 == 0) {
                var_2 = arg0 + ((arg1 * 0x90) + 0x30);
                var_3 = M2C_FIELD(var_2, s32 *, 4) & ~6;
                /* Duplicate return node #18. Try simplifying control flow for better match */
                M2C_FIELD(var_2, s32 *, 4) = var_3;
                M2C_FIELD(arg0, s32 *, 0x20) = 1;
                return 0;
            }
            return -1;
        }
        switch (arg2) {                             /* irregular */
        case 3:
            var_2 = arg0 + ((arg1 * 0x90) + 0x30);
            var_3 = M2C_FIELD(var_2, s32 *, 4) | 6;
            /* Duplicate return node #18. Try simplifying control flow for better match */
            M2C_FIELD(var_2, s32 *, 4) = var_3;
            M2C_FIELD(arg0, s32 *, 0x20) = 1;
            return 0;
        default:
            return -1;
        case 2:
            var_2 = arg0 + ((arg1 * 0x90) + 0x30);
            var_3 = (M2C_FIELD(var_2, s32 *, 4) & ~6) | 4;
            /* Duplicate return node #18. Try simplifying control flow for better match */
            M2C_FIELD(var_2, s32 *, 4) = var_3;
            M2C_FIELD(arg0, s32 *, 0x20) = 1;
            return 0;
        }
    } else {
        var_2 = arg0 + ((arg1 * 0x90) + 0x30);
        var_3 = (M2C_FIELD(var_2, s32 *, 4) & ~6) | 2;
        M2C_FIELD(var_2, s32 *, 4) = var_3;
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
        return 0;
    }
}
