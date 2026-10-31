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

s64 fptodp(f32);                                    /* extern */

void *__as__11VIMatrix44DRC10VIMatrix44(void *arg0, void *arg1) {
    void *temp_18;
    void *temp_19;
    void *temp_20;
    void *temp_21;
    void *temp_22;
    void *temp_23;

    temp_18 = arg1 + 0x10;
    temp_19 = arg0 + 0x20;
    temp_20 = arg1 + 0x20;
    temp_21 = arg0 + 0x40;
    temp_22 = arg1 + 0x30;
    temp_23 = arg0 + 0x60;
    M2C_FIELD(arg0, s64 *, 0) = fptodp(M2C_FIELD(arg1, f32 *, 0));
    M2C_FIELD(arg0, s64 *, 8) = fptodp(M2C_FIELD(arg1, f32 *, 4));
    M2C_FIELD(arg0, s64 *, 0x10) = fptodp(M2C_FIELD(arg1, f32 *, 8));
    M2C_FIELD(arg0, s64 *, 0x18) = fptodp(M2C_FIELD(arg1, f32 *, 0xC));
    M2C_FIELD(arg0, s64 *, 0x20) = fptodp(M2C_FIELD(arg1, f32 *, 0x10));
    M2C_FIELD(temp_19, s64 *, 8) = fptodp(M2C_FIELD(temp_18, f32 *, 4));
    M2C_FIELD(temp_19, s64 *, 0x10) = fptodp(M2C_FIELD(temp_18, f32 *, 8));
    M2C_FIELD(temp_19, s64 *, 0x18) = fptodp(M2C_FIELD(temp_18, f32 *, 0xC));
    M2C_FIELD(arg0, s64 *, 0x40) = fptodp(M2C_FIELD(arg1, f32 *, 0x20));
    M2C_FIELD(temp_21, s64 *, 8) = fptodp(M2C_FIELD(temp_20, f32 *, 4));
    M2C_FIELD(temp_21, s64 *, 0x10) = fptodp(M2C_FIELD(temp_20, f32 *, 8));
    M2C_FIELD(temp_21, s64 *, 0x18) = fptodp(M2C_FIELD(temp_20, f32 *, 0xC));
    M2C_FIELD(arg0, s64 *, 0x60) = fptodp(M2C_FIELD(arg1, f32 *, 0x30));
    M2C_FIELD(temp_23, s64 *, 8) = fptodp(M2C_FIELD(temp_22, f32 *, 4));
    M2C_FIELD(temp_23, s64 *, 0x10) = fptodp(M2C_FIELD(temp_22, f32 *, 8));
    M2C_FIELD(temp_23, s64 *, 0x18) = fptodp(M2C_FIELD(temp_22, f32 *, 0xC));
    return arg0;
}
