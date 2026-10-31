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

M2C_UNK AddTail__7VILListP7VILNode(void *, M2C_UNK *); /* extern */
M2C_UNK Remove__7VILNode(M2C_UNK *);                /* extern */

void MergeFreeXmMem__13VISoundDevice(void *arg0) {
    M2C_UNK *temp_2;
    M2C_UNK *var_16;
    M2C_UNK *var_17;
    s32 temp_4;

    var_16 = M2C_FIELD(arg0, M2C_UNK **, 0xD0C);
    var_17 = *var_16;
    if (var_17 != NULL) {
        do {
            if (M2C_FIELD(var_17, M2C_UNK **, 0) != NULL) {
                temp_4 = M2C_FIELD(var_16, s32 *, 0x10);
                if ((temp_4 + M2C_FIELD(var_16, s32 *, 0x14)) == M2C_FIELD(var_17, s32 *, 0x10)) {
                    M2C_FIELD(var_17, s32 *, 0x10) = temp_4;
                    M2C_FIELD(var_17, s32 *, 0x14) = (s32) (M2C_FIELD(var_17, s32 *, 0x14) + M2C_FIELD(var_16, s32 *, 0x14));
                    Remove__7VILNode(var_16);
                    AddTail__7VILListP7VILNode(arg0 + 0xD18, var_16);
                }
            }
            var_16 = var_17;
            temp_2 = M2C_FIELD(var_16, M2C_UNK **, 0);
            var_17 = temp_2;
        } while (temp_2 != NULL);
    }
}
