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

M2C_UNK inflate_codes_free(s32, void *);            /* extern */

void inflate_blocks_reset(void *arg0, void *arg1, s32 *arg2) {
    s32 (*temp_3)(M2C_UNK, M2C_UNK, M2C_UNK);
    s32 temp_2;
    s32 temp_2_2;

    if (arg2 != NULL) {
        *arg2 = M2C_FIELD(arg0, s32 *, 0x3C);
    }
    if ((u32) (M2C_FIELD(arg0, s32 *, 0) - 4) < 2U) {
        M2C_FIELD(arg1, M2C_UNK (**)(s32, s32), 0x24)(M2C_FIELD(arg1, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0xC));
    }
    if (M2C_FIELD(arg0, s32 *, 0) == 6) {
        inflate_codes_free(M2C_FIELD(arg0, s32 *, 4), arg1);
    }
    temp_2 = M2C_FIELD(arg0, s32 *, 0x28);
    temp_3 = M2C_FIELD(arg0, s32 (**)(M2C_UNK, M2C_UNK, M2C_UNK), 0x38);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = temp_2;
    M2C_FIELD(arg0, s32 *, 0x34) = temp_2;
    if (temp_3 != NULL) {
        temp_2_2 = temp_3(0, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x3C) = temp_2_2;
        M2C_FIELD(arg1, s32 *, 0x30) = temp_2_2;
    }
}
