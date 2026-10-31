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

s32 Erase__t6VIList1Z7VIActori(s32, void *);        /* extern */
s32 ReleaseSprite__7VIScenei(s32, s32);             /* extern */
s32 ReleaseStaticLighting__7VIScenei(s32, s32);     /* extern */
s32 RemoveActor__7VIScenei();                       /* extern */

s32 ReleaseActor__7VIScenei(s32 arg0, void *arg1) {
    s32 temp_2;
    s32 temp_5;
    s32 var_4;

    if (RemoveActor__7VIScenei() >= 0) {
        temp_2 = M2C_FIELD(arg1, s32 *, 0x60);
        if ((temp_2 == -1) || (ReleaseSprite__7VIScenei(arg0, temp_2) >= 0)) {
            temp_5 = M2C_FIELD(arg1, s32 *, 0x6C);
            var_4 = arg0 + 0x3CC;
            if (temp_5 != -1) {
                if (ReleaseStaticLighting__7VIScenei(arg0, temp_5) >= 0) {
                    var_4 = arg0 + 0x3CC;
                    /* Duplicate return node #8. Try simplifying control flow for better match */
                    return Erase__t6VIList1Z7VIActori(var_4, arg1);
                }
                goto block_7;
            }
            return Erase__t6VIList1Z7VIActori(var_4, arg1);
        }
        return -1;
    }
block_7:
    return -1;
}
