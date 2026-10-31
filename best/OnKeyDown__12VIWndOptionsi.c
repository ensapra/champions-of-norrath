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

s32 Back__12VIWndOptions(void *);                   /* extern */
M2C_UNK Decrement__12VIWndOptions(void *);          /* extern */
s32 GetString__13VIStringTableii(void *, M2C_UNK, s32); /* extern */
M2C_UNK Increment__12VIWndOptions(void *);          /* extern */
M2C_UNK Next__12VIWndOptions(void *);               /* extern */
M2C_UNK Prev__12VIWndOptions(void *);               /* extern */
s32 Select__12VIWndOptions(void *);                 /* extern */
M2C_UNK SetFocus__5VIWndP5VIWndb(void *, void *, M2C_UNK); /* extern */
M2C_UNK SetSoundClassVolume__13VISoundDevice12VISOUNDCLASSf(s32, M2C_UNK, f32); /* extern */
M2C_UNK Setup__12VIWndMessagePCUsT115VIMESSAGEPROMPTRC8VIVect2Ii(void *, s32, s32, M2C_UNK, s32 *, M2C_UNK, s32 *, s32); /* extern */
void *VIGetGameOptions__Fv();                       /* extern */
extern void *D_01192C70;

void OnKeyDown__12VIWndOptionsi(void *arg0, s32 arg1) {
    s32 sp10;
    s32 sp14;
    f32 temp_f12;
    s32 temp_11;
    s32 temp_18;
    s32 temp_2;
    s32 temp_2_2;
    void *temp_17;
    void *temp_17_2;

    temp_17 = VIGetGameOptions__Fv();
    if (M2C_FIELD(arg0, s64 *, 0x4A0) == 0) {
        if (M2C_FIELD(arg0, s32 *, 0x4A8) != 0) {
            if ((arg1 == 0xD) || (arg1 == 0x86)) {
                M2C_FIELD(arg0, s32 *, 0x4A8) = 0;
                M2C_FIELD(arg0, s32 *, 0x4A4) = 0;
            }
        } else {
            switch (arg1) {                         /* irregular */
            case 0x8A:
            case 0x13:
                Prev__12VIWndOptions(arg0);
                break;
            case 0x8B:
            case 0x14:
                Next__12VIWndOptions(arg0);
                break;
            case 0x88:
            case 0x11:
                Decrement__12VIWndOptions(arg0);
                break;
            case 0x89:
            case 0x12:
                Increment__12VIWndOptions(arg0);
                break;
            case 0x86:
            case 0xD:
                temp_2 = Select__12VIWndOptions(arg0);
                if (temp_2 == 1) {
                    temp_17_2 = arg0 + 0x4D0;
                    temp_18 = GetString__13VIStringTableii(D_01192C70, 0x661, M2C_FIELD(D_01192C70, s32 *, 0x30));
                    temp_2_2 = GetString__13VIStringTableii(D_01192C70, 0x662, M2C_FIELD(D_01192C70, s32 *, 0x30));
                    temp_11 = M2C_FIELD(arg0, s32 *, 0x34);
                    sp10 = temp_11;
                    sp14 = M2C_FIELD((arg0 + 0x34), s32 *, 4);
                    Setup__12VIWndMessagePCUsT115VIMESSAGEPROMPTRC8VIVect2Ii(temp_17_2, temp_18, temp_2_2, 2, &sp10, 0x12C, &sp10, temp_11);
                    M2C_FIELD(temp_17_2, s32 *, 0x1C) = temp_2;
                    SetFocus__5VIWndP5VIWndb(arg0, temp_17_2, 1);
                }
                break;
            case 0x1B:
            case 0x84:
                if (Back__12VIWndOptions(arg0) == 1) {
                    M2C_FIELD(temp_17, s8 *, 6) = (s8) M2C_FIELD(arg0, s32 *, 0x484);
                    M2C_FIELD(temp_17, u8 *, 7) = (u8) M2C_FIELD(arg0, u8 *, 0x488);
                    M2C_FIELD(temp_17, u8 *, 4) = (u8) M2C_FIELD(arg0, u8 *, 0x489);
                    M2C_FIELD(temp_17, u8 *, 5) = (u8) M2C_FIELD(arg0, u8 *, 0x48A);
                    temp_f12 = M2C_FIELD(arg0, f32 *, 0x48C);
                    M2C_FIELD(temp_17, f32 *, 8) = temp_f12;
                    M2C_FIELD(temp_17, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 0x490);
                    M2C_FIELD(temp_17, u8 *, 0x91) = (u8) M2C_FIELD(arg0, u8 *, 0x494);
                    M2C_FIELD(temp_17, s8 *, 0x92) = (s8) (M2C_FIELD(arg0, u8 *, 0x495) == 0);
                    SetSoundClassVolume__13VISoundDevice12VISOUNDCLASSf(M2C_FIELD(D_01192C70, s32 *, 0x4C), 0, temp_f12);
                    SetSoundClassVolume__13VISoundDevice12VISOUNDCLASSf(M2C_FIELD(D_01192C70, s32 *, 0x4C), 1, M2C_FIELD(temp_17, f32 *, 0xC));
                    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
                    SetFocus__5VIWndP5VIWndb(arg0, M2C_FIELD(arg0, void **, 0x14), 1);
                }
                break;
            }
        }
    }
}
