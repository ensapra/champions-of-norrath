/* machine draft (m2c) for ee-gcc-2.96 -O2 -G8, tried by autopilot */
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

M2C_UNK func_00187C98(void *, s32, s32);            /* extern */
M2C_UNK func_00187DD0(void *, s32, s32);            /* extern */
M2C_UNK func_001A1568(void *, M2C_UNK, void *);     /* extern */
extern M2C_UNK func_01000000;
extern M2C_UNK jtbl_004C006C;

void func_00187620(void *arg0, void *arg1) {
    s32 temp_16;
    s32 temp_19;
    s32 temp_20;
    s32 temp_21;
    s32 var_4;

    if (arg0 == NULL) {
        func_001A1568(&jtbl_004C006C + 0xE09C, 0xFB, &jtbl_004C006C + 0xE0BC);
    }
    if (arg1 == NULL) {
        func_001A1568(&jtbl_004C006C + 0xE09C, 0xFC, &jtbl_004C006C + 0xE0CC);
    }
    var_4 = M2C_FIELD(arg1, s32 *, 0);
    if (var_4 < 0) {
        M2C_FIELD(arg1, s32 *, 0) = 0;
        var_4 = 0;
    }
    if (M2C_FIELD(arg1, s32 *, 4) < 0) {
        M2C_FIELD(arg1, s32 *, 4) = 0;
    }
    if (M2C_FIELD(arg1, s32 *, 8) < 0) {
        M2C_FIELD(arg1, s32 *, 8) = 0x20;
    }
    if (M2C_FIELD(arg1, s32 *, 0xC) < 0) {
        M2C_FIELD(arg1, s32 *, 0xC) = 0;
    }
    temp_21 = M2C_FIELD(M2C_FIELD(&func_01000000, void **, 0xF4530), s32 (**)(s32), 0xE8)(var_4);
    temp_20 = M2C_FIELD(M2C_FIELD(&func_01000000, void **, 0xF4530), s32 (**)(s32), 0xE4)(M2C_FIELD(arg1, s32 *, 4));
    temp_19 = M2C_FIELD(M2C_FIELD(&func_01000000, void **, 0xF4530), s32 (**)(s32), 0xE8)(M2C_FIELD(arg1, s32 *, 8));
    temp_16 = M2C_FIELD(M2C_FIELD(&func_01000000, void **, 0xF4530), s32 (**)(s32), 0xE4)(M2C_FIELD(arg1, s32 *, 0xC));
    if (temp_21 == M2C_FIELD(arg0, s32 *, 0x10)) {
        if ((temp_20 == M2C_FIELD(arg0, s32 *, 0x14)) && (temp_19 == M2C_FIELD(arg0, s32 *, 0x18))) {
            if (temp_16 == M2C_FIELD(arg0, s32 *, 0x1C)) {
                return;
            }
            goto block_18;
        }
        /* Duplicate return node #19. Try simplifying control flow for better match */
        func_00187C98(arg0, temp_21, temp_20);
        func_00187DD0(arg0, temp_19, temp_16);
        return;
    }
block_18:
    func_00187C98(arg0, temp_21, temp_20);
    func_00187DD0(arg0, temp_19, temp_16);
}
