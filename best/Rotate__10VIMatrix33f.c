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

f32 cosf(f32);                                      /* extern */
f32 sinf();                                         /* extern */

void Rotate__10VIMatrix33f(void *arg0, f32 fparg0) {
    f32 temp_f0;
    f32 temp_f21;
    void *temp_2;
    void *temp_3;

    temp_f21 = sinf();
    temp_f0 = cosf(fparg0);
    temp_3 = arg0 + 0xC;
    temp_2 = arg0 + 0x18;
    M2C_FIELD(arg0, f32 *, 0) = 0.0f;
    M2C_FIELD(arg0, f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xC) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 8) = 0.0f;
    M2C_FIELD(temp_2, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x18) = 0.0f;
    M2C_FIELD(temp_2, f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x10) = 1.0f;
    M2C_FIELD(arg0, f32 *, 4) = temp_f21;
    M2C_FIELD(arg0, f32 *, 0x20) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0) = temp_f0;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) -temp_f21;
    M2C_FIELD(arg0, f32 *, 0x10) = temp_f0;
}
