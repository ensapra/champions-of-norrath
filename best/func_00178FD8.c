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

M2C_UNK func_00179520(s32, M2C_UNK, void *, void *, s32, s32 *); /* extern */
extern M2C_UNK xmlParseConditionalSections;

s32 func_00178FD8(s32 arg0, u32 arg1) {
    s32 *var_10;
    s32 temp_3;
    u32 temp_3_2;
    u32 var_5;

    var_5 = arg1;
    temp_3 = 4 - (arg0 & 3);
    if (temp_3 != 0) {
        var_10 = &xmlParseConditionalSections + 0x364;
        var_5 -= temp_3;
        M2C_FIELD(&xmlParseConditionalSections, s32 *, 0x364) = (s32) (arg0 - temp_3);
    } else {
        var_10 = &xmlParseConditionalSections + 0x364;
    }
    temp_3_2 = var_5 >> 2;
    M2C_FIELD(&xmlParseConditionalSections, s32 *, 0x368) = (s32) (arg0 + (temp_3_2 * 4));
    *var_10 = arg0;
    M2C_FIELD(&xmlParseConditionalSections, u32 *, 0x36C) = temp_3_2;
    func_00179520(temp_3_2 - 1, 0, &xmlParseConditionalSections + 0x368, &xmlParseConditionalSections + 0x36C, arg0, var_10);
    return 0;
}
