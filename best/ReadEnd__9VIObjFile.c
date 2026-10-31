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

M2C_UNK Seek__6VIFilelQ26VIFile10SeekOrigin(s32, M2C_UNK); /* extern */

s32 ReadEnd__9VIObjFile(void *arg0) {
    s32 temp_2;
    s32 temp_3;
    s32 temp_3_2;
    s32 var_2;
    void *temp_2_2;
    void *temp_4;

    var_2 = -1;
    if (M2C_FIELD(arg0, s32 *, 0x240) != 0) {
        temp_3 = M2C_FIELD((arg0 + ((M2C_FIELD(arg0, s32 *, 0xE8) << 5) + 0x100)), s32 *, 8);
        if (temp_3 > 0) {
            Seek__6VIFilelQ26VIFile10SeekOrigin(temp_3, 0);
            M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0xE8) << 5) + arg0), s32 *, 0x108) = 0;
        }
        temp_2 = M2C_FIELD(arg0, s32 *, 0xE8) - 1;
        temp_3_2 = temp_2 << 5;
        M2C_FIELD(arg0, s32 *, 0xE8) = temp_2;
        temp_4 = arg0 + (temp_3_2 + 0x100);
        if (temp_2 < 0) {
            M2C_FIELD(arg0, s32 *, 0x240) = 0;
        } else {
            M2C_FIELD(temp_4, s32 *, 8) = (s32) (M2C_FIELD(temp_4, s32 *, 8) - M2C_FIELD((temp_3_2 + arg0), s32 *, 0x114));
            temp_2_2 = arg0 + ((M2C_FIELD(arg0, s32 *, 0xE8) << 5) + 0x100);
            M2C_FIELD(temp_2_2, s32 *, 8) = (s32) (M2C_FIELD(temp_2_2, s32 *, 8) - 0xC);
        }
        M2C_FIELD(arg0, s32 *, 0x248) = 0;
        var_2 = 0;
    }
    return var_2;
}
