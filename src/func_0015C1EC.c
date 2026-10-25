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

s32 func_0014B41C(s32, s32);                        /* extern */
M2C_UNK func_001517DC(s32, void *, M2C_UNK);        /* extern */
M2C_UNK func_00155104(s32, void *, M2C_UNK);        /* extern */
extern s32 D_0047FD48;

void func_0015C1EC(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 temp_4;

    if (M2C_FIELD(arg0, s32 *, 0x918) != arg1) {
        temp_2 = M2C_FIELD(arg0, s32 *, 0x91C);
        M2C_FIELD(arg0, s32 *, 0x918) = arg1;
        if (temp_2 != 0) {
            func_001517DC(temp_2, arg0, 0);
        }
        if ((M2C_FIELD(arg0, s32 *, (unsigned short)0x92C) == 0) && (arg1 != 0) && (arg1 == 1)) {
            temp_4 = M2C_FIELD(arg0, s32 *, 0x50);
            if ((temp_4 != 0) && (func_0014B41C(temp_4, D_0047FD48) != 0)) {
                func_00155104(M2C_FIELD(arg0, s32 *, 0x50), arg0, 0);
            }
        }
    }
}
