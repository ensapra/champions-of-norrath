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

M2C_UNK Add__t8VIVector1ZiRCi(s32, s32);            /* extern */
s32 Begin__Ct10VIMultiMap2ZfZi(void *);             /* extern */
s32 End__Ct10VIMultiMap2ZfZi(void *);               /* extern */
s32 Next__Ct10VIMultiMap2ZfZii(void *, s32);        /* extern */

s32 EndQuery__12VISceneQuery(s32 arg0) {
    s32 var_2;
    void *temp_17;

    temp_17 = arg0 + 0x10;
    var_2 = Begin__Ct10VIMultiMap2ZfZi(temp_17);
loop_3:
    if (var_2 != End__Ct10VIMultiMap2ZfZi(temp_17)) {
        Add__t8VIVector1ZiRCi(arg0 + 4, M2C_FIELD(temp_17, s32 *, 8) + (var_2 * 0x18) + 0x14);
        var_2 = Next__Ct10VIMultiMap2ZfZii(temp_17, var_2);
        goto loop_3;
    }
    return 0;
}
