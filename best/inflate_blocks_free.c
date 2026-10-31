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

s32 inflate_blocks_free(void *arg0, void *arg1) {
    s32 (*temp_2)(M2C_UNK, M2C_UNK, M2C_UNK);
    s32 temp_2_2;
    void *temp_5;

    if ((u32) (M2C_FIELD(arg0, s32 *, 0) - 4) < 2U) {
        M2C_FIELD(arg1, M2C_UNK (**)(s32, void *), 0x24)(M2C_FIELD(arg1, s32 *, 0x28), M2C_FIELD(arg0, void **, 0xC));
    }
    if (M2C_FIELD(arg0, s32 *, 0) == 6) {
        inflate_codes_free(M2C_FIELD(arg0, s32 *, 4), arg1);
    }
    temp_5 = M2C_FIELD(arg0, void **, 0x28);
    temp_2 = M2C_FIELD(arg0, s32 (**)(M2C_UNK, M2C_UNK, M2C_UNK), 0x38);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, void **, 0x34) = temp_5;
    M2C_FIELD(arg0, void **, 0x30) = temp_5;
    if (temp_2 != NULL) {
        temp_2_2 = temp_2(0, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x3C) = temp_2_2;
        M2C_FIELD(arg1, s32 *, 0x30) = temp_2_2;
    }
    M2C_FIELD(arg1, M2C_UNK (**)(s32, void *), 0x24)(M2C_FIELD(arg1, s32 *, 0x28), M2C_FIELD(arg0, void **, 0x28));
    M2C_FIELD(arg1, M2C_UNK (**)(s32, void *), 0x24)(M2C_FIELD(arg1, s32 *, 0x28), M2C_FIELD(arg0, void **, 0x24));
    M2C_FIELD(arg1, M2C_UNK (**)(s32, void *), 0x24)(M2C_FIELD(arg1, s32 *, 0x28), arg0);
    return 0;
}
