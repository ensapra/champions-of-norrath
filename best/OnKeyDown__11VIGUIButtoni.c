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

M2C_UNK ActionOccured__20VIWndGenericRendererPCc(s32, s32); /* extern */
M2C_UNK AddPage__20VIWndGenericRendererPCc(s32, s32); /* extern */
s32 GetAppPtr__5VIWnd(s32);                         /* extern */
M2C_UNK SoundPlay__4VIUI11VIUISoundId(s32, M2C_UNK); /* extern */

s32 OnKeyDown__11VIGUIButtoni(void *arg0, s32 arg1) {
    s32 temp_17;
    s32 temp_3;
    s32 var_2;

    var_2 = 0;
    temp_3 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_3 != 0) {
        var_2 = GetAppPtr__5VIWnd(temp_3);
        temp_17 = var_2 + 0xB3F0;
        if (var_2 != 0) {
            var_2 = 0;
            if (arg1 == 0x86) {
                if (M2C_FIELD(arg0, s32 *, 0x104) != 0) {
                    SoundPlay__4VIUI11VIUISoundId(temp_17, 0xD);
                    AddPage__20VIWndGenericRendererPCc(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x104));
                }
                if (M2C_FIELD(arg0, s32 *, 0x108) != 0) {
                    SoundPlay__4VIUI11VIUISoundId(temp_17, 0xD);
                    ActionOccured__20VIWndGenericRendererPCc(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x108));
                }
                var_2 = 0;
            }
        }
    }
    return var_2;
}
