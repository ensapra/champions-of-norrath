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

s64 dpmul(s64, s32);                                /* extern */

void Mul__11VIMatrix44DRC11VIMatrix44Dd(void *arg0, void *arg1, s32 arg2) {
    void *temp_19;
    void *temp_20;
    void *temp_21;
    void *temp_22;
    void *temp_23;
    void *temp_30;

    temp_19 = arg0 + 0x20;
    temp_20 = arg1 + 0x20;
    temp_21 = arg1 + 0x40;
    temp_22 = arg0 + 0x40;
    temp_23 = arg1 + 0x60;
    temp_30 = arg0 + 0x60;
    M2C_FIELD(arg0, s64 *, 0) = dpmul(M2C_FIELD(arg1, s64 *, 0), arg2);
    M2C_FIELD(arg0, s64 *, 8) = dpmul(M2C_FIELD(arg1, s64 *, 8), arg2);
    M2C_FIELD(arg0, s64 *, 0x10) = dpmul(M2C_FIELD(arg1, s64 *, 0x10), arg2);
    M2C_FIELD(arg0, s64 *, 0x18) = dpmul(M2C_FIELD(arg1, s64 *, 0x18), arg2);
    M2C_FIELD(arg0, s64 *, 0x20) = dpmul(M2C_FIELD(arg1, s64 *, 0x20), arg2);
    M2C_FIELD(temp_19, s64 *, 8) = dpmul(M2C_FIELD(temp_20, s64 *, 8), arg2);
    M2C_FIELD(temp_19, s64 *, 0x10) = dpmul(M2C_FIELD(temp_20, s64 *, 0x10), arg2);
    M2C_FIELD(temp_19, s64 *, 0x18) = dpmul(M2C_FIELD(temp_20, s64 *, 0x18), arg2);
    M2C_FIELD(arg0, s64 *, 0x40) = dpmul(M2C_FIELD(arg1, s64 *, 0x40), arg2);
    M2C_FIELD(temp_22, s64 *, 8) = dpmul(M2C_FIELD(temp_21, s64 *, 8), arg2);
    M2C_FIELD(temp_22, s64 *, 0x10) = dpmul(M2C_FIELD(temp_21, s64 *, 0x10), arg2);
    M2C_FIELD(temp_22, s64 *, 0x18) = dpmul(M2C_FIELD(temp_21, s64 *, 0x18), arg2);
    M2C_FIELD(arg0, s64 *, 0x60) = dpmul(M2C_FIELD(arg1, s64 *, 0x60), arg2);
    M2C_FIELD(temp_30, s64 *, 8) = dpmul(M2C_FIELD(temp_23, s64 *, 8), arg2);
    M2C_FIELD(temp_30, s64 *, 0x10) = dpmul(M2C_FIELD(temp_23, s64 *, 0x10), arg2);
    M2C_FIELD(temp_30, s64 *, 0x18) = dpmul(M2C_FIELD(temp_23, s64 *, 0x18), arg2);
}
