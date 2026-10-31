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

s32 GetString__13VIStringTableii(void *, M2C_UNK, s32); /* extern */
s64 GetTime__7VITimer();                            /* extern */
M2C_UNK SetText__11VIGUIDialogPCUsb(s32, s32, M2C_UNK); /* extern */
M2C_UNK Show__11VIGUIDialogPCUsPCc(s32, s32, M2C_UNK); /* extern */
extern void *D_01192C70;

void cancelGame__16VIRealmInterface(void *arg0) {
    s32 *var_2;
    s32 temp_16;
    s32 temp_17;
    s32 var_3;

    M2C_FIELD(arg0, s32 *, 0xD8C) = 4;
    var_3 = M2C_FIELD(arg0, s32 *, 0xD94);
    if (var_3 > 0) {
        var_2 = arg0 + 0x17F8;
        do {
            var_3 -= 1;
            *var_2 = 0xA;
            var_2 += 0x478;
        } while (var_3 != 0);
    }
    temp_17 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38);
    Show__11VIGUIDialogPCUsPCc(temp_17, GetString__13VIStringTableii(D_01192C70, 0x72E, M2C_FIELD(D_01192C70, s32 *, 0x30)), 0);
    temp_16 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38);
    SetText__11VIGUIDialogPCUsb(temp_16, GetString__13VIStringTableii(D_01192C70, 0x72D, M2C_FIELD(D_01192C70, s32 *, 0x30)), 1);
    M2C_FIELD(arg0, s64 *, 0x25C0) = GetTime__7VITimer();
}
