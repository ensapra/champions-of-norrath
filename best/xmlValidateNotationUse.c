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

s32 xmlHashLookup(s32, s32);                        /* extern */
extern M2C_UNK D_011CC640;

s32 xmlValidateNotationUse(void *arg0, void *arg1, s32 arg2) {
    M2C_UNK (*temp_2)(s32, M2C_UNK *, s32);
    s32 temp_4_2;
    s32 temp_4_4;
    s32 var_2;
    s32 var_2_2;
    void *temp_4;
    void *temp_4_3;

    if (arg1 != NULL) {
        temp_4 = M2C_FIELD(arg1, void **, 0x2C);
        if (temp_4 != NULL) {
            temp_4_2 = M2C_FIELD(temp_4, s32 *, 0x24);
            var_2_2 = 0;
            if (temp_4_2 != 0) {
                var_2_2 = xmlHashLookup(temp_4_2, arg2);
            }
            if (var_2_2 != 0) {
                return 1;
            }
            temp_4_3 = M2C_FIELD(arg1, void **, 0x30);
            if (temp_4_3 != NULL) {
                temp_4_4 = M2C_FIELD(temp_4_3, s32 *, 0x24);
                if (temp_4_4 != 0) {
                    var_2_2 = xmlHashLookup(temp_4_4, arg2);
                }
            }
            var_2 = 1;
            if (var_2_2 == 0) {
                var_2 = 0;
                if (arg0 != NULL) {
                    temp_2 = M2C_FIELD(arg0, M2C_UNK (**)(s32, M2C_UNK *, s32), 4);
                    if (temp_2 != NULL) {
                        temp_2(M2C_FIELD(arg0, s32 *, 0), &D_011CC640, arg2);
                    }
                    var_2 = 0;
                }
            }
            return var_2;
        }
        goto block_4;
    }
block_4:
    return -1;
}
