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

M2C_UNK sceSdRemote(M2C_UNK, M2C_UNK, s32, s32);    /* extern */

void changeMasterVolume(s32 arg0) {
    s32 temp_6;
    s32 var_16;
    s32 var_6;

    var_16 = 0;
    var_6 = 0x980;
    do {
        sceSdRemote(1, 0x8010, var_6, arg0);
        temp_6 = var_16 | 0xA80;
        var_16 += 1;
        sceSdRemote(1, 0x8010, temp_6, arg0);
        var_6 = var_16 | 0x980;
    } while (var_16 < 2);
}
