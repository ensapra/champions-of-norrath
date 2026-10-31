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
M2C_UNK printf(M2C_UNK *);                          /* extern */
M2C_UNK strcpy(M2C_UNK *, s32);                     /* extern */
extern M2C_UNK D_011B20C8;
extern s32 D_011B20E0;
extern M2C_UNK D_011D94C8;

void notifyGameDiscovered__16VIRealmInterfacePCci(void *arg0, s32 arg1, s32 arg2) {
    printf(&D_011D94C8);
    strcpy(&D_011B20C8, arg1);
    D_011B20E0 = arg2;
    strcpy(arg0 + 0x92C, arg1);
    M2C_FIELD(arg0, s32 *, 0xD2C) = arg2;
    M2C_FIELD(arg0, s32 *, 0xD8C) = 2;
    GetInetAddress__11VIUDPSocketP13VIInetAddressPCci(arg0 + 0xD44, arg0 + 0x947C, &D_011B20C8, 0x3E8);
}
