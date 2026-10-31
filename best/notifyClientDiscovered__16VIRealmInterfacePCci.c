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

M2C_UNK GetInetAddress__11VIUDPSocketP13VIInetAddressPCci(void *, void *, M2C_UNK *, M2C_UNK); /* extern */
s32 GetString__13VIStringTableii(void *, M2C_UNK, s32); /* extern */
s64 GetTime__7VITimer();                            /* extern */
M2C_UNK SetStringValue__9VIGUIPagePCcPCUsb(s32, M2C_UNK *, s32, M2C_UNK); /* extern */
M2C_UNK printf(M2C_UNK *);                          /* extern */
M2C_UNK strcpy(M2C_UNK *, s32);                     /* extern */
extern void *D_01192C70;
extern M2C_UNK D_011B20C8;
extern s32 D_011B20E0;
extern M2C_UNK D_011D8E00;
extern M2C_UNK D_011D94F8;

void notifyClientDiscovered__16VIRealmInterfacePCci(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_16;

    printf(&D_011D94F8);
    strcpy(&D_011B20C8, arg1);
    D_011B20E0 = arg2;
    M2C_FIELD(arg0, s64 *, 0x25F8) = GetTime__7VITimer();
    M2C_FIELD(arg0, s32 *, 0xD8C) = 0xB;
    temp_16 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x34);
    SetStringValue__9VIGUIPagePCcPCUsb(temp_16, &D_011D8E00, GetString__13VIStringTableii(D_01192C70, 0x740, M2C_FIELD(D_01192C70, s32 *, 0x30)), 1);
    GetInetAddress__11VIUDPSocketP13VIInetAddressPCci(arg0 + 0xD44, arg0 + 0x947C, &D_011B20C8, 0x3E8);
}
