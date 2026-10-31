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

M2C_UNK func_001AD730(s32);                         /* extern */
extern s32 D_0048048C;
extern M2C_UNK xmlCreatePushParserCtxt;

void func_00197244(void *arg0) {
    s32 temp_2;
    void *temp_3;

    temp_2 = D_0048048C;
    if (M2C_FIELD(arg0, s32 *, 0x40) != 0) {
        M2C_FIELD(arg0, M2C_UNK (**)(), 8)();
        M2C_FIELD(arg0, s32 *, 0x40) = 0;
        temp_3 = &xmlCreatePushParserCtxt + 0x138;
        M2C_FIELD(temp_3, s32 *, 4) = (s32) (M2C_FIELD(temp_3, s32 *, 4) - 1);
    }
    if (temp_2 != 0) {
        func_001AD730(temp_2);
        D_0048048C = 0;
    }
}
