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

void SetTextColor__6VIFontRC9VIColor32(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) ((f32) M2C_FIELD(arg1, u8 *, 0) * 0.0039215684f);
    M2C_FIELD(arg0, f32 *, 4) = (f32) ((f32) M2C_FIELD(arg1, u8 *, 1) * 0.0039215684f);
    M2C_FIELD(arg0, f32 *, 8) = (f32) ((f32) M2C_FIELD(arg1, u8 *, 2) * 0.0039215684f);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) ((f32) M2C_FIELD(arg1, u8 *, 3) * 0.0039215684f);
}
