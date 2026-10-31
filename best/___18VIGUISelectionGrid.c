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

M2C_UNK __builtin_delete(void *);                   /* extern */
M2C_UNK __builtin_vec_delete(s32, s32, s32);        /* extern */
extern M2C_UNK D_01200690;

void ___18VIGUISelectionGrid(void *arg0, s32 arg1) {
    s32 *var_2;
    s32 temp_17;
    s32 temp_3;
    s32 var_18;

    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_01200690;
    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        var_18 = 0;
        if (M2C_FIELD(arg0, s32 *, 0) > 0) {
            do {
                temp_17 = var_18 * 4;
                var_18 += 1;
                var_2 = temp_17 + M2C_FIELD(arg0, s32 *, 0x10);
                temp_3 = *var_2;
                if (temp_3 != 0) {
                    __builtin_vec_delete(temp_3, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 0x10));
                    var_2 = temp_17 + M2C_FIELD(arg0, s32 *, 0x10);
                }
                *var_2 = 0;
            } while (var_18 < M2C_FIELD(arg0, s32 *, 0));
        }
        if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
            __builtin_vec_delete(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 0x10));
        }
    }
    M2C_FIELD(arg0, s32 *, 4) = -1;
    M2C_FIELD(arg0, s32 *, 0) = -1;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
