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
M2C_UNK Hide__11VIGUIDialog(s32);                   /* extern */
M2C_UNK SendTo__11VIUDPSocketG13VIInetAddressiT1PCciT4iPii(void *, M2C_UNK *, s32, M2C_UNK *, void *, M2C_UNK, s32 *, M2C_UNK, s32, s32); /* extern */
M2C_UNK SetText__11VIGUIDialogPCUsb(s32, s32, M2C_UNK); /* extern */
M2C_UNK Show__11VIGUIDialogPCUsPCc(s32, s32, M2C_UNK); /* extern */
M2C_UNK UpdateNumPlayers__16VIRealmInterfacei(void *, s32, s32, s32); /* extern */
extern void *D_01192C70;

void KickPlayer__16VIRealmInterfacei(void *arg0, s32 arg1) {
    s32 sp10;
    M2C_UNK sp20;
    M2C_UNK sp40;
    s32 temp_16;
    s32 temp_17;
    s32 temp_17_2;
    s32 temp_19;
    s32 temp_7;
    s32 var_16;
    s32 var_20;
    s32 var_6;
    void *temp_3;
    void *var_2;
    void *var_3;
    void *var_4;

    temp_17 = arg1 - 2;
    if (M2C_FIELD(arg0, s32 *, 0xD94) < arg1) {
        temp_17_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38);
        Show__11VIGUIDialogPCUsPCc(temp_17_2, GetString__13VIStringTableii(D_01192C70, 0x74D, M2C_FIELD(D_01192C70, s32 *, 0x30)), 0);
        temp_16 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38);
        SetText__11VIGUIDialogPCUsb(temp_16, GetString__13VIStringTableii(D_01192C70, 0x750, M2C_FIELD(D_01192C70, s32 *, 0x30)), 0);
        return;
    }
    sp10 = 0xE;
    temp_3 = (temp_17 * 0x478) + arg0;
    M2C_ERROR(/* unknown instruction: ldl $v1, 0x17eb($v0) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0x17e4($v0) */);
    M2C_ERROR(/* unknown instruction: ldl $t2, 0x17f3($v0) */);
    M2C_ERROR(/* unknown instruction: ldr $t2, 0x17ec($v0) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($t1) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, ($t1) */);
    M2C_ERROR(/* unknown instruction: sdl $t2, 0xf($t1) */);
    M2C_ERROR(/* unknown instruction: sdr $t2, 0x8($t1) */);
    M2C_FIELD(&sp20, s32 *, 0x10) = (s32) M2C_FIELD(temp_3, s32 *, 0x17F4);
    var_16 = 0;
    M2C_ERROR(/* unknown instruction: ldl $v0, -0x6b7d($at) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, -0x6b84($at) */);
    M2C_ERROR(/* unknown instruction: ldl $v1, -0x6b75($at) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, -0x6b7c($at) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($t0) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, ($t0) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0xf($t0) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x8($t0) */);
    M2C_FIELD(&sp40, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x948C);
    SendTo__11VIUDPSocketG13VIInetAddressiT1PCciT4iPii(arg0 + 0xD44, &sp20, M2C_FIELD(temp_3, s32 *, 0x17E0), &sp40, temp_3 + 0x1808, 0xBB8, &sp10, 4, 0, 0);
    temp_19 = M2C_FIELD(arg0, s32 *, 0xD94) - 1;
    if (temp_19 > 0) {
        var_20 = 0;
        do {
            if (var_16 == temp_17) {
                temp_7 = (temp_19 - var_16) - 1;
                var_6 = 0;
                if (temp_7 > 0) {
                    var_4 = var_20 + arg0;
                    do {
                        var_3 = var_4 + 0x13E0;
                        var_2 = var_4 + 0x1858;
loop_9:
                        M2C_FIELD(var_3, s64 *, 0) = (s64) M2C_FIELD(var_2, s64 *, 0);
                        M2C_FIELD(var_3, s64 *, 8) = (s64) M2C_FIELD(var_2, s64 *, 8);
                        M2C_FIELD(var_3, s64 *, 0x10) = (s64) M2C_FIELD(var_2, s64 *, 0x10);
                        M2C_FIELD(var_3, s64 *, 0x18) = (s64) M2C_FIELD(var_2, s64 *, 0x18);
                        var_2 += 0x20;
                        var_3 += 0x20;
                        if (var_2 != (var_4 + 0x1CB8)) {
                            goto loop_9;
                        }
                        M2C_FIELD(var_3, s64 *, 0) = (s64) M2C_FIELD(var_2, s64 *, 0);
                        M2C_FIELD(var_3, s64 *, 8) = (s64) M2C_FIELD(var_2, s64 *, 8);
                        var_6 += 1;
                        M2C_FIELD(var_3, s64 *, 0x10) = (s64) M2C_FIELD(var_2, s64 *, 0x10);
                        var_4 += 0x478;
                    } while (var_6 < temp_7);
                }
                UpdateNumPlayers__16VIRealmInterfacei(arg0, M2C_FIELD(arg0, s32 *, 0xD94) - 1, var_6, temp_7);
            }
            var_16 += 1;
            var_20 += 0x478;
        } while (var_16 < temp_19);
    }
    Hide__11VIGUIDialog(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x38));
}
