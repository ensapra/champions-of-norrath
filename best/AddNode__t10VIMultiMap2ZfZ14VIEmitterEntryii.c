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

s32 Allocate__t10VIMultiMap2ZfZ14VIEmitterEntry(void *, s32); /* extern */

s32 AddNode__t10VIMultiMap2ZfZ14VIEmitterEntryii(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_7;
    s32 var_2;
    void *temp_2_3;
    void *temp_4;

    temp_7 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_7 == -1) {
        temp_2 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_2 != 0) {
            var_2 = temp_2 * 2;
        } else {
            var_2 = 2;
        }
        M2C_FIELD(arg0, s32 *, 4) = var_2;
        if (Allocate__t10VIMultiMap2ZfZ14VIEmitterEntry(arg0, temp_7) >= 0) {
            goto block_9;
        }
        return -1;
    }
block_9:
    temp_2_2 = M2C_FIELD(arg0, s32 *, 0x10) * 0x70;
    temp_4 = temp_2_2 + M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(temp_4, s32 *, 4);
    M2C_FIELD(temp_4, s32 *, 8) = 0;
    M2C_FIELD(temp_4, s32 *, 0) = 1;
    temp_2_3 = temp_2_2 + M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(temp_2_3, s32 *, 4) = arg1;
    M2C_FIELD(temp_2_3, s32 *, 0xC) = 0;
    if (arg1 != 0) {
        if (arg2 != 0) {
            M2C_FIELD(((arg1 * 0x70) + M2C_FIELD(arg0, s32 *, 8)), s32 *, 8) = M2C_FIELD(arg0, s32 *, 0x10);
        } else {
            M2C_FIELD(((arg1 * 0x70) + M2C_FIELD(arg0, s32 *, 8)), s32 *, 0xC) = M2C_FIELD(arg0, s32 *, 0x10);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0xC) = M2C_FIELD(arg0, s32 *, 0x10);
    }
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
    return M2C_FIELD(arg0, s32 *, 0x10);
}
