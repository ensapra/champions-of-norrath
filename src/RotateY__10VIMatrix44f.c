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

M2C_UNK Identity__10VIMatrix44(void *);             /* extern */
f32 cosf(f32);                                      /* extern */
f32 sinf();                                         /* extern */

void RotateY__10VIMatrix44f(void *arg0, f32 fparg0) {
    f32 temp_f20;
    f32 temp_f21;

    temp_f21 = sinf();
    temp_f20 = cosf(fparg0);
    Identity__10VIMatrix44(arg0);
    M2C_FIELD(arg0, f32 *, 0) = temp_f20;
    M2C_FIELD(arg0, f32 *, 0x28) = temp_f20;
    M2C_FIELD(arg0, f32 *, 0x20) = temp_f21;
    M2C_FIELD(arg0, f32 *, 8) = (f32) -temp_f21;
}
