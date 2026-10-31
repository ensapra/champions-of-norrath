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

M2C_UNK printf(M2C_UNK *, u8, u8, u8, u8, s32);     /* extern */
s32 sceInetRecvFrom(s32, s32, s32, void *, s32 *, s32); /* extern */
extern M2C_UNK D_011C5C88;

s32 RecvFrom__11VIUDPSocketP13VIInetAddressPiPciT2i(void *arg0, void *arg1, s32 *arg2, s32 arg6) {
    s32 temp_2;
    s32 temp_3;
    s32 var_2;

    temp_3 = M2C_FIELD(arg0, s32 *, 0x44);
    var_2 = -1;
    if (temp_3 != -1) {
        temp_2 = sceInetRecvFrom(arg0 + 8, M2C_FIELD(arg0, s32 *, 4), temp_3, arg1, arg2, arg6);
        if (temp_2 > 0) {
            printf(&D_011C5C88, M2C_FIELD(arg1, u8 *, 7), M2C_FIELD(arg1, u8 *, 6), M2C_FIELD(arg1, u8 *, 5), M2C_FIELD(arg1, u8 *, 4), *arg2);
        }
        var_2 = temp_2;
        M2C_FIELD(arg1, s32 *, 0x10) = 1;
    }
    return var_2;
}
