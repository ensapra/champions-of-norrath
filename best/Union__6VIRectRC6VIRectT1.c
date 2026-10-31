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

void Union__6VIRectRC6VIRectT1(void *arg0, void *arg1, void *arg2) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_3;
    s32 temp_5;
    s32 temp_7;
    s32 temp_8;
    s32 temp_8_2;

    temp_8 = M2C_FIELD(arg1, s32 *, 0);
    temp_2 = M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((temp_2 >= temp_8) ? temp_8 : temp_2);
    temp_8_2 = M2C_FIELD(arg1, s32 *, 4);
    temp_2_2 = M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((temp_2_2 >= temp_8_2) ? temp_8_2 : temp_2_2);
    temp_3 = M2C_FIELD(arg1, s32 *, 8);
    temp_7 = M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 8) = (s32) ((temp_7 >= temp_3) ? temp_7 : temp_3);
    temp_2_3 = M2C_FIELD(arg1, s32 *, 0xC);
    temp_5 = M2C_FIELD(arg2, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) ((temp_5 >= temp_2_3) ? temp_5 : temp_2_3);
}
