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

s32 inflate_blocks_sync_point(s32);                 /* extern */

s32 inflateSyncPoint(void *arg0) {
    s32 temp_2;
    void *temp_4;

    if (arg0 != NULL) {
        temp_4 = M2C_FIELD(arg0, void **, 0x1C);
        if (temp_4 != NULL) {
            temp_2 = M2C_FIELD(temp_4, s32 *, 0x14);
            if (temp_2 == 0) {
                goto block_3;
            }
            return inflate_blocks_sync_point(temp_2);
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return -2;
    }
block_3:
    return -2;
}
