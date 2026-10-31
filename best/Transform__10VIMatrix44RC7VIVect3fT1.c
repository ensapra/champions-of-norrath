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
f32 sinf(f32);                                      /* extern */

void Transform__10VIMatrix44RC7VIVect3fT1(void *arg0, void *arg1, void *arg2, f32 fparg0) {
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f25;
    f32 temp_f4;
    f32 temp_f5;

    temp_f22 = sinf(M2C_FIELD(arg1, f32 *, 0));
    temp_f21 = cosf(M2C_FIELD(arg1, f32 *, 0));
    temp_f24 = sinf(M2C_FIELD(arg1, f32 *, 4));
    temp_f25 = cosf(M2C_FIELD(arg1, f32 *, 4));
    temp_f20 = sinf(M2C_FIELD(arg1, f32 *, 8));
    temp_f0 = cosf(M2C_FIELD(arg1, f32 *, 8));
    temp_f4 = temp_f20 * temp_f24;
    temp_f5 = temp_f0 * temp_f24;
    M2C_FIELD(arg0, f32 *, 0) = (f32) (((temp_f0 * temp_f21) + (temp_f4 * temp_f22)) * fparg0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) (temp_f20 * temp_f25 * fparg0);
    M2C_FIELD(arg0, f32 *, 8) = (f32) (((-temp_f0 * temp_f22) + (temp_f4 * temp_f21)) * fparg0);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (temp_f25 * temp_f21 * fparg0);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) (temp_f25 * temp_f22 * fparg0);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) (-temp_f24 * fparg0);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) (((-temp_f20 * temp_f21) + (temp_f5 * temp_f22)) * fparg0);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (temp_f0 * temp_f25 * fparg0);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (((temp_f20 * temp_f22) + (temp_f5 * temp_f21)) * fparg0);
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x3C) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg2, f32 *, 8);
}
