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

M2C_UNK Precalc__12VICollSphere();                  /* extern */

s32 Init__12VICollSphereR7VIVect3T1f(void *arg0, void *arg1, void *arg2, f32 fparg0) {
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_4;

    temp_2 = arg0 + 0xC;
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(temp_2, f32 *, 4) = (f32) M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(temp_2, f32 *, 8) = (f32) M2C_FIELD(arg2, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x58) = fparg0;
    Precalc__12VICollSphere();
    temp_2_2 = arg0 + 0x4C;
    M2C_FIELD(arg0, f32 *, 0x44) = 1.0f;
    temp_4 = arg0 + 0x24;
    M2C_FIELD(temp_2_2, f32 *, 8) = 0.0f;
    temp_3 = arg0 + 0x38;
    M2C_FIELD(arg0, f32 *, 0x4C) = 0.0f;
    M2C_FIELD(temp_2_2, f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x48) = -1;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x24);
    M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(temp_4, f32 *, 4);
    M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(temp_4, f32 *, 8);
    return 0;
}
