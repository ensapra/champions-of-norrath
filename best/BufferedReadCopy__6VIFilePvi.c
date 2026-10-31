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

M2C_UNK memcpy(s32, s32, s64);                      /* extern */
extern s32 D_01192C84;

s64 BufferedReadCopy__6VIFilePvi(void *arg0, s32 arg1, s64 arg2) {
    s64 temp_2;
    s64 temp_3;
    s64 var_17;

    var_17 = 0;
    temp_3 = M2C_FIELD(arg0, s64 *, 0xB0);
    if (temp_3 != 0) {
        temp_2 = temp_3 - M2C_FIELD(arg0, s64 *, 0xA0);
        var_17 = (s64) (((arg2 < temp_2) ? arg2 : temp_2) << 0x20) >> 0x20;
        if (var_17 != 0) {
            if (D_01192C84 != 0) {
                memcpy(arg1, (M2C_FIELD(arg0, s32 *, 0xBC) + (s32) M2C_FIELD(arg0, s64 *, 0xA0)) | 0x20000000, var_17);
            } else {
                memcpy(arg1, M2C_FIELD(arg0, s32 *, 0xBC) + (s32) M2C_FIELD(arg0, s64 *, 0xA0), var_17);
            }
            M2C_FIELD(arg0, s64 *, 0xA0) = (s64) (M2C_FIELD(arg0, s64 *, 0xA0) + var_17);
            M2C_FIELD(arg0, s64 *, 0x10) = (s64) (M2C_FIELD(arg0, s64 *, 0x10) + var_17);
        }
    }
    return var_17;
}
