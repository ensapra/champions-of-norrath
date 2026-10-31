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

s32 xmlNewInputFromFile(void **, s32);              /* extern */
extern M2C_UNK D_011DBC68;

s32 xmlDefaultExternalEntityLoader(s32 arg0, s32 arg1, void **arg2) {
    M2C_UNK (*temp_2_3)(void **, M2C_UNK *, s32);
    M2C_UNK (*temp_2_5)(void **, M2C_UNK *, s32);
    s32 temp_2;
    void *temp_2_2;
    void *temp_2_4;

    if (arg0 == 0) {
        temp_2_2 = *arg2;
        if (temp_2_2 == NULL) {
            return 0;
        }
        temp_2_3 = M2C_FIELD(temp_2_2, M2C_UNK (**)(void **, M2C_UNK *, s32), 0x54);
        if (temp_2_3 != NULL) {
            temp_2_3(arg2, &D_011DBC68, arg1);
        }
        return 0;
    }
    temp_2 = xmlNewInputFromFile(arg2, arg0);
    if (temp_2 == 0) {
        temp_2_4 = *arg2;
        if (temp_2_4 != NULL) {
            temp_2_5 = M2C_FIELD(temp_2_4, M2C_UNK (**)(void **, M2C_UNK *, s32), 0x54);
            if (temp_2_5 != NULL) {
                temp_2_5(arg2, &D_011DBC68, arg0);
            }
        }
    }
    return temp_2;
}
