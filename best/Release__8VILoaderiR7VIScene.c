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

s32 End__Ct5VIMap2ZUiZi(s32);                       /* extern */
s32 Erase__t5VIMap2ZUiZii(s32, s32);                /* extern */
s32 Erase__t6VIPool1Z13VILoaderTransi(void *, s32); /* extern */
s32 Find__Ct5VIMap2ZUiZiRCUi(s32, void *);          /* extern */
s32 Next__Ct6VIPool1Z13VILoaderTransi(void *, s32); /* extern */
s32 ReleaseResource__7VISceneUi(s32, s32);          /* extern */

s32 Release__8VILoaderiR7VIScene(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_16;
    s32 temp_17;
    s32 temp_3;
    s32 temp_5;
    s32 var_2;
    void *temp_20;
    void *temp_2;
    void *temp_4;

    temp_20 = arg0 + 0x684;
    temp_4 = M2C_FIELD(temp_20, s32 *, 8) + (arg1 * 0x38);
    temp_3 = M2C_FIELD(temp_4, s32 *, 4) - 1;
    M2C_FIELD(temp_4, s32 *, 4) = temp_3;
    if (temp_3 == 0) {
        temp_16 = arg0 + 0x69C;
        if (((M2C_FIELD(temp_4, s32 *, 8) == 0) || (temp_17 = Find__Ct5VIMap2ZUiZiRCUi(temp_16, temp_4 + 8), (temp_17 == End__Ct5VIMap2ZUiZi(temp_16))) || (var_2 = -1, (Erase__t5VIMap2ZUiZii(temp_16, temp_17) >= 0))) && ((temp_2 = M2C_FIELD(temp_20, s32 *, 8) + (arg1 * 0x38), (M2C_FIELD(temp_2, s32 *, 0) != 3)) || (temp_5 = M2C_FIELD(temp_2, s32 *, 8), (temp_5 == 0)) || (var_2 = -1, (ReleaseResource__7VISceneUi(arg2, temp_5) >= 0)))) {
            if (M2C_FIELD(arg0, s32 *, 0x680) == arg1) {
                M2C_FIELD(arg0, s32 *, 0x680) = Next__Ct6VIPool1Z13VILoaderTransi(temp_20, arg1);
            }
            if (Erase__t6VIPool1Z13VILoaderTransi(temp_20, arg1) < 0) {
                return -1;
            }
            goto block_12;
        }
        /* Duplicate return node #13. Try simplifying control flow for better match */
        return var_2;
    }
block_12:
    var_2 = 0;
    return var_2;
}
