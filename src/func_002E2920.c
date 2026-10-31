/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

M2C_UNK func_002D7490(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
s32 func_002DD640();                                /* extern */
M2C_UNK func_002DD698();                            /* extern */
extern s32 D_004460A4;
extern s32 D_004460C0;
extern M2C_UNK func_002E28C8;

s32 func_002E2920(void) {
    s32 temp_16;

    D_004460A4 = 1;
    temp_16 = func_002DD640();
    func_002D7490(0x80000012, &func_002E28C8, 0);
    if (temp_16 != 0) {
        func_002DD698();
    }
    D_004460A4 = 0;
    D_004460C0 = 1;
    return 1;
}
