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
M2C_UNK func_001A24AC(void *, s32, s32);            /* extern */
extern void *D_00480488;
extern M2C_UNK jtbl_004C006C;
extern M2C_UNK xmlCreatePushParserCtxt;

void func_001972AC(s32 arg0, s32 arg1) {
    s32 temp_6;
    void *temp_16;

    temp_6 = arg1 * 4;
    if (arg1 >= 0xA) {
        M2C_FIELD(D_00480488, M2C_UNK (**)(void *, s32), 0xF4)(&jtbl_004C006C + 0xF104, temp_6);
        return;
    }
    temp_16 = &xmlCreatePushParserCtxt + 0x340;
    func_001A24AC(temp_16, arg0, temp_6);
    M2C_FIELD(temp_16, s32 *, -0x208) = arg1;
    func_00197BC4();
}
