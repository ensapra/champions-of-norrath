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

M2C_UNK ExitDeleteThread_2();                       /* extern */
M2C_UNK WaitSema_2(s32);                            /* extern */
M2C_UNK func_002D70D0(M2C_UNK *, M2C_UNK (*)(s32), s32); /* extern */
extern s32 D_00446090;
extern s32 D_00446094;
extern s32 D_004460A0;
extern s32 D_004460B4;
extern s32 D_004460D8;
extern s32 D_004460DC;
extern M2C_UNK D_0047BA80;
extern M2C_UNK (*D_008E8140)(s32);
extern s32 D_008E8154;

void func_002E2498(void) {
    s32 temp_2;

loop_1:
    WaitSema_2(D_004460A0);
    temp_2 = D_00446090;
    if (D_004460D8 == -1) {
        D_004460B4 = 0;
        D_004460D8 = 0;
        D_00446094 = 0;
        D_008E8154 = 0;
        ExitDeleteThread_2();
    }
    if (temp_2 > 0) {
        func_002D70D0(&D_0047BA80, D_008E8140, D_004460DC);
    }
    if ((D_008E8140 != NULL) && (D_004460DC != 0)) {
        D_008E8140(D_004460DC);
    }
    D_004460B4 = 0;
    goto loop_1;
}
