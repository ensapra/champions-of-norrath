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

M2C_UNK func_0019449C();                            /* extern */
extern void *D_00480488;
extern M2C_UNK xmlCreatePushParserCtxt;

void func_00197004(void) {
    s32 var_16;
    void *temp_4;

    var_16 = 0;
    func_0019449C();
    do {
        temp_4 = &xmlCreatePushParserCtxt + 0x140 + (var_16 << 6);
        var_16 += 1;
        M2C_FIELD(D_00480488, M2C_UNK (**)(void *), 0x114)(temp_4);
    } while (var_16 < 6);
}
