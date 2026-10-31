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

M2C_UNK Read__6VIFilePvi();                         /* extern */

s32 Read__9VIObjFilePUci(void *arg0, s32 arg2) {
    void *temp_3;

    if ((M2C_FIELD(arg0, s32 *, 0x248) != 0) && (M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0xE8) << 5) + arg0), s32 *, 0x108) >= arg2)) {
        Read__6VIFilePvi();
        temp_3 = arg0 + ((M2C_FIELD(arg0, s32 *, 0xE8) << 5) + 0x100);
        M2C_FIELD(temp_3, s32 *, 8) = (s32) (M2C_FIELD(temp_3, s32 *, 8) - arg2);
        return 0;
    }
    return -1;
}
