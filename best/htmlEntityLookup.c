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

void *xmlStrEqual(s32, s32);                        /* extern */
extern M2C_UNK D_0118FE38;

void *htmlEntityLookup(s32 arg0) {
    s32 var_16;
    u32 var_17;
    void *temp_2;

    var_16 = 0;
    var_17 = 0;
loop_1:
    temp_2 = xmlStrEqual(arg0, *(var_16 + (&D_0118FE38 + 4)));
    var_17 += 1;
    if (temp_2 != NULL) {
        return var_16 + &D_0118FE38;
    }
    var_16 += 0xC;
    if (var_17 >= 0xFDU) {
        return temp_2;
    }
    goto loop_1;
}
