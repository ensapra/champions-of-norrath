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

M2C_UNK ActionOccured__20VIWndGenericRendererPCc(s32, void *); /* extern */
M2C_UNK Close__10VIUIWindowb(void *, M2C_UNK);      /* extern */
s32 GetAppPtr__5VIWnd(s32);                         /* extern */
M2C_UNK SoundPlay__4VIUI11VIUISoundId(s32, M2C_UNK); /* extern */
s32 strcmp(void *, M2C_UNK *);                      /* extern */
extern M2C_UNK D_011C60D8;

void OnKeyDown__11VIGUIDialogi(void *arg0, s32 arg1) {
    s32 temp_18;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_3;
    s32 temp_4;
    u32 var_2;
    void *temp_17;

    temp_4 = M2C_FIELD(arg0, s32 *, 0x64);
    if ((temp_4 != 0) && (temp_2 = GetAppPtr__5VIWnd(temp_4), (temp_2 != 0))) {
        temp_18 = temp_2 + 0xB3F0;
        if (M2C_FIELD(arg0, s32 *, 0xDF0) != 0) {
            switch (arg1) {                         /* irregular */
            case 0x87:
                M2C_FIELD(arg0, s32 *, 0xDF0) = 0;
                SoundPlay__4VIUI11VIUISoundId(temp_18, 8);
                Close__10VIUIWindowb(arg0 + 0x80, 0);
                return;
            case 0x86:
                temp_17 = arg0 + 0x9F0;
                if (strcmp(temp_17, &D_011C60D8) == 0) {
                    ActionOccured__20VIWndGenericRendererPCc(M2C_FIELD(arg0, s32 *, 0x64), temp_17);
                    return;
                }
                break;
            }
        } else {
            if ((arg1 == 0x86) || (var_2 = arg1 - 0x86, (strcmp(arg0 + 0x9F0, &D_011C60D8) == 0))) {
                if (M2C_FIELD(arg0, s8 *, 0x9F0) != 0) {
                    ActionOccured__20VIWndGenericRendererPCc(M2C_FIELD(arg0, s32 *, 0x64), arg0 + 0x9F0);
                    return;
                }
                var_2 = arg1 - 0x86;
                goto block_18;
            }
block_18:
            if (var_2 < 2U) {
                SoundPlay__4VIUI11VIUISoundId(temp_18, 8);
                Close__10VIUIWindowb(arg0 + 0x80, 0);
            }
            if (arg1 == 0x8A) {
                temp_2_2 = M2C_FIELD(arg0, s32 *, 0xDF8);
                if (temp_2_2 > 0) {
                    M2C_FIELD(arg0, s32 *, 0xDF8) = (s32) (temp_2_2 - 1);
                    SoundPlay__4VIUI11VIUISoundId(temp_18, 0xB);
                } else {
                    SoundPlay__4VIUI11VIUISoundId(temp_18, 9);
                }
            }
            if (arg1 == 0x8B) {
                temp_3 = M2C_FIELD(arg0, s32 *, 0xDF8);
                if (temp_3 < (M2C_FIELD(arg0, s32 *, 0xDF4) - 7)) {
                    M2C_FIELD(arg0, s32 *, 0xDF8) = (s32) (temp_3 + 1);
                    SoundPlay__4VIUI11VIUISoundId(temp_18, 0xB);
                    return;
                }
                SoundPlay__4VIUI11VIUISoundId(temp_18, 9);
            }
        }
    }
}
