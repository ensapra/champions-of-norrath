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

s32 Begin__Ct6VIList1Z7VIActor(s32);                /* extern */
s32 End__Ct6VIList1Z7VIActor(s32);                  /* extern */
s32 Next__Ct6VIList1Z7VIActori(s32, s32);           /* extern */
M2C_UNK RemoveActor__7VIScenei(s32, s32);           /* extern */

s32 RemoveAllActors__7VIScene(s32 arg0) {
    s32 temp_17;
    s32 var_2;

    temp_17 = arg0 + 0x3CC;
    var_2 = Begin__Ct6VIList1Z7VIActor(temp_17);
loop_3:
    if (var_2 != End__Ct6VIList1Z7VIActor(temp_17)) {
        RemoveActor__7VIScenei(arg0, var_2);
        var_2 = Next__Ct6VIList1Z7VIActori(temp_17, var_2);
        goto loop_3;
    }
    return 0;
}
