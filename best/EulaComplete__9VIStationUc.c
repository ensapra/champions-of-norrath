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

M2C_UNK End__9VIStation(s32);                       /* extern */
M2C_UNK RemoveChild__5VIWndP5VIWnd(void *, void *); /* extern */
M2C_UNK SetFocus__5VIWndP5VIWndb(void *, s32, M2C_UNK); /* extern */

void EulaComplete__9VIStationUc(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 temp_5;

    temp_5 = arg1 & 0xFF;
    if (temp_5 == 1) {
        temp_2 = arg0 + 0xB820;
        M2C_FIELD(arg0, s32 *, 0x15424) = 0;
        M2C_FIELD(arg0, s32 *, 0xB81C) = temp_2;
        SetFocus__5VIWndP5VIWndb(arg0 + 0xB798, temp_2, 1);
    } else {
        End__9VIStation(temp_5);
        M2C_FIELD(arg0, s32 *, 0xB81C) = 0;
        SetFocus__5VIWndP5VIWndb(arg0 + 0xB798, 0, 1);
        M2C_FIELD(arg0, s32 *, 0xBD98) = 2;
    }
    RemoveChild__5VIWndP5VIWnd(arg0 + 0xB820, arg0 + 0x15408);
}
