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

M2C_UNK func_00197BC4();                            /* extern */
extern void *D_00480488;
extern M2C_UNK xmlCreatePushParserCtxt;

void func_001978B8(s32 arg1) {
    void *temp_16;

    temp_16 = &xmlCreatePushParserCtxt + 0x138;
    M2C_FIELD(temp_16, s32 *, 0x230) = M2C_FIELD(D_00480488, s32 (**)(), 0xE8)();
    M2C_FIELD(temp_16, s32 *, 0x234) = M2C_FIELD(D_00480488, s32 (**)(s32), 0xE4)(arg1);
    func_00197BC4();
}
