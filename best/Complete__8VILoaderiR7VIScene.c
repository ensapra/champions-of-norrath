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

s32 Close__9VIObjFile(void *);                      /* extern */
M2C_UNK FileType__9VIObjFileUi(void *, M2C_UNK);    /* extern */
s32 OpenObject__9VIObjFilePCvUi(void *, s32, s32, void *); /* extern */
s32 ParseZoneResource__10VIESFParseR9VIObjFileiR7VIScene(void *, void *, s32, s32); /* extern */
s32 Parse__10VIESFParseR9VIObjFileR7VIScene(void *, void *, s32); /* extern */
s32 ShareResource__7VISceneUi(s32, s32);            /* extern */

s32 Complete__8VILoaderiR7VIScene(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_21;
    s32 temp_5;
    s32 temp_6;
    s32 var_2;
    s32 var_2_2;
    void *temp_17;
    void *temp_19;
    void *temp_3;
    void *temp_4;
    void *temp_7;

    temp_19 = arg0 + 0x684;
    temp_21 = arg1 * 0x38;
    temp_7 = M2C_FIELD(temp_19, s32 *, 8) + temp_21;
    var_2 = -1;
    if (M2C_FIELD(temp_7, s32 *, 0) == 2) {
        temp_17 = arg0 + 8;
        if (OpenObject__9VIObjFilePCvUi(temp_17, M2C_FIELD(arg0, s32 *, 0x6BC) + M2C_FIELD(temp_7, s32 *, 0x1C), M2C_FIELD(temp_7, s32 *, 0x18), temp_7) < 0) {
            return -1;
        }
        FileType__9VIObjFileUi(temp_17, 0xAB4F);
        temp_6 = M2C_FIELD((M2C_FIELD(temp_19, s32 *, 8) + temp_21), s32 *, 0x28);
        temp_4 = arg0 + 0x258;
        if (temp_6 != -1) {
            var_2_2 = ParseZoneResource__10VIESFParseR9VIObjFileiR7VIScene(temp_4, temp_17, temp_6, arg2);
        } else {
            var_2_2 = Parse__10VIESFParseR9VIObjFileR7VIScene(temp_4, temp_17, arg2);
        }
        var_2 = -1;
        if ((var_2_2 >= 0) && ((temp_3 = M2C_FIELD(temp_19, s32 *, 8) + (arg1 * 0x38), temp_5 = M2C_FIELD(temp_3, s32 *, 8), M2C_FIELD(temp_3, s32 *, 0) = 3, (temp_5 == 0)) || (var_2 = -1, (ShareResource__7VISceneUi(arg2, temp_5) >= 0)))) {
            var_2 = (Close__9VIObjFile(temp_17) >= 0) ? 0 : -1;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
