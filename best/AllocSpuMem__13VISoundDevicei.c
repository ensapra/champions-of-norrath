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
M2C_UNK Remove__7VILNode(M2C_UNK *, s32);           /* extern */
M2C_UNK printf(M2C_UNK *, s32);                     /* extern */
extern M2C_UNK D_011D9DC8;

s32 AllocSpuMem__13VISoundDevicei(void *arg0, s32 arg1) {
    M2C_UNK *temp_2_2;
    M2C_UNK *var_16;
    M2C_UNK *var_4;
    s32 temp_17;
    s32 temp_2;
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_6;

    temp_2 = arg1 + 0x3F;
    var_16 = M2C_FIELD(arg0, M2C_UNK **, 0xCF0);
    var_4 = *var_16;
    temp_6 = ((s32) ((temp_2 < 0) ? (arg1 + 0x7E) : temp_2) >> 6) << 6;
    if (var_4 != NULL) {
loop_2:
        temp_3 = M2C_FIELD(var_16, s32 *, 0x14);
        if (temp_3 < temp_6) {
            var_16 = var_4;
            temp_2_2 = *var_16;
            var_4 = temp_2_2;
            if (temp_2_2 == NULL) {
                goto block_10;
            }
            goto loop_2;
        }
        temp_17 = M2C_FIELD(var_16, s32 *, 0x10);
        temp_3_2 = temp_3 - temp_6;
        M2C_FIELD(var_16, s32 *, 0x14) = temp_3_2;
        M2C_FIELD(var_16, s32 *, 0x10) = (s32) (temp_17 + temp_6);
        if (temp_3_2 == 0) {
            Remove__7VILNode(var_16, temp_6);
            AddTail__7VILListP7VILNode(arg0 + 0xCFC, var_16);
        }
        return temp_17;
    }
block_10:
    printf(&D_011D9DC8, temp_6);
    return 0;
}
