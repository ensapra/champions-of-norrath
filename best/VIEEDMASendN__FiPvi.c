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

s32 sceDmaGetChan();                                /* extern */
M2C_UNK sceDmaSendN(s32, s32, s32, s32);            /* extern */

void VIEEDMASendN__FiPvi(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_4;
    s32 temp_7;

    temp_7 = sceDmaGetChan();
    temp_4 = temp_7;
    if (arg0 == 1) {
        *(s32 *)0x1000E010 = 2;
        sceDmaSendN(temp_4, arg1, arg2, temp_7);
        return;
    }
    sceDmaSendN(temp_7, arg1, arg2, temp_7);
}
