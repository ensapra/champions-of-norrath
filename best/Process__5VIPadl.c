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

M2C_UNK scePadSetActDirect(s32, s32, void *);       /* extern */

s32 Process__5VIPadl(void *arg0, s64 arg1) {
    s64 temp_2;
    s64 temp_2_2;

    M2C_FIELD(arg0, s64 *, 8) = arg1;
    if (((s64) ((M2C_FIELD(arg0, s64 *, 0x20) == 2) << 0x20) >> 0x20) != 0) {
        temp_2 = M2C_FIELD(arg0, s64 *, 0x10);
        if ((temp_2 != 0) && (temp_2 < arg1)) {
            M2C_FIELD(arg0, s8 *, 0x29) = 0;
            M2C_FIELD(arg0, s64 *, 0x10) = 0;
            M2C_FIELD(arg0, s32 *, 0x30) = 1;
        }
        temp_2_2 = M2C_FIELD(arg0, s64 *, 0x18);
        if ((temp_2_2 != 0) && (temp_2_2 < arg1)) {
            M2C_FIELD(arg0, s8 *, 0x28) = 0;
            M2C_FIELD(arg0, s64 *, 0x18) = 0;
            M2C_FIELD(arg0, s32 *, 0x30) = 1;
        }
        if (M2C_FIELD(arg0, s32 *, 0x30) != 0) {
            scePadSetActDirect(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), arg0 + 0x28);
            M2C_FIELD(arg0, s32 *, 0x30) = 0;
        }
    }
    return 0;
}
