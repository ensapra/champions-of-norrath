/* machine draft (m2c) for ee-gcc-2.96 -O2 -G8, tried by autopilot */
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

M2C_UNK func_001959B8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00195A78(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00196B88();                            /* extern */
M2C_UNK func_00196E00(void *, s32);                 /* extern */
M2C_UNK func_00198C24(M2C_UNK);                     /* extern */

void func_00195794(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x52) = (u8) (M2C_FIELD((unsigned)arg0, u8 *, 0x52) ^ 2);
    func_00196B88();
    func_00196E00(arg0, M2C_FIELD(arg0, s32 *, 0x54));
    if (M2C_FIELD(arg0, u8 *, 0x52) & 2) {
        func_001959B8(arg0, 1, 2);
    } else {
        func_00195A78(arg0, 1, 2);
    }
    func_00198C24(0xB);
}
