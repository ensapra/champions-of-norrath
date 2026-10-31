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

M2C_UNK inflate_blocks_reset(s32, void *, M2C_UNK, void *); /* extern */

s32 inflateReset(void *arg0) {
    void *temp_7;

    if (arg0 != NULL) {
        temp_7 = M2C_FIELD(arg0, void **, 0x1C);
        if (temp_7 != NULL) {
            M2C_FIELD(arg0, s32 *, 0x14) = 0;
            M2C_FIELD(arg0, s32 *, 8) = 0;
            M2C_FIELD(arg0, s32 *, 0x18) = 0;
            M2C_FIELD(temp_7, s32 *, 0) = (s32) ((M2C_FIELD(temp_7, s32 *, 0xC) == 0) ? 0 : 7);
            inflate_blocks_reset(M2C_FIELD(temp_7, s32 *, 0x14), arg0, 0, temp_7);
            return 0;
        }
        goto block_4;
    }
block_4:
    return -2;
}
