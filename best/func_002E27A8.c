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

M2C_UNK DeleteSema_2(s32);                          /* extern */
M2C_UNK SignalSema_2(s32);                          /* extern */
M2C_UNK func_002D7508(M2C_UNK);                     /* extern */
s32 func_002DD640();                                /* extern */
M2C_UNK func_002DD698();                            /* extern */
extern s32 D_00446094;
extern s32 D_004460A0;
extern s32 D_004460A8;
extern s32 D_004460AC;
extern s32 D_004460B0;
extern s32 D_004460D8;

void func_002E27A8(void) {
    s32 temp_16;

    if (D_00446094 != 0) {
        D_004460D8 = -1;
        SignalSema_2(D_004460A0);
    }
    DeleteSema_2(D_004460A8);
    DeleteSema_2(D_004460AC);
    DeleteSema_2(D_004460B0);
    DeleteSema_2(D_004460A0);
    temp_16 = func_002DD640();
    func_002D7508(0x80000012);
    if (temp_16 != 0) {
        func_002DD698();
    }
}
