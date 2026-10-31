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

M2C_UNK func_001959B8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00195A78(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00196B88(void *);                      /* extern */
s32 func_00197958(void *);                          /* extern */
M2C_UNK func_00198C24(M2C_UNK);                     /* extern */
M2C_UNK func_1967D8(void *, s32);                   /* extern */
extern void *D_00480488;

void func_00195854(void *arg0) {
    u8 temp_2;

    if (M2C_FIELD(arg0, s32 *, 0x44) == 0) {
        return;
    }
    temp_2 = M2C_FIELD(arg0, u8 *, 0x52) ^ 4;
    M2C_FIELD(arg0, u8 *, 0x52) = temp_2;
    if (temp_2 & 4) {
        func_001959B8(0xB, 2);
    } else {
        func_00195A78(0xB, 2);
    }
    M2C_FIELD(D_00480488, M2C_UNK (**)(s32), 0xC)(func_00197958(arg0));
    func_00196B88(arg0);
    func_1967D8(arg0, M2C_FIELD(arg0, s32 *, 0x54));
    func_00198C24(8);
}
