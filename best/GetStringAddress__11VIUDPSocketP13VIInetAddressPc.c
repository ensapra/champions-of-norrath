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

M2C_UNK printf(M2C_UNK *, s32);                     /* extern */
s32 sceInetAddress2String(void *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK D_011C5C18;

s32 GetStringAddress__11VIUDPSocketP13VIInetAddressPc(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_17;

    temp_17 = sceInetAddress2String(arg0 + 8, M2C_FIELD(arg0, s32 *, 4), 0x20, arg1);
    printf(&D_011C5C18, arg2);
    return temp_17;
}
