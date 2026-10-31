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

void Union__6VIRectRC6VIRect(void *arg0, void *arg1) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_7;

    temp_7 = M2C_FIELD(arg0, s32 *, 0);
    temp_3 = M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((temp_3 >= temp_7) ? temp_7 : temp_3);
    temp_4 = M2C_FIELD(arg0, s32 *, 4);
    temp_2 = M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((temp_2 >= temp_4) ? temp_4 : temp_2);
    temp_4_2 = M2C_FIELD(arg1, s32 *, 8);
    temp_3_2 = M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 8) = (s32) ((temp_4_2 >= temp_3_2) ? temp_4_2 : temp_3_2);
    temp_4_3 = M2C_FIELD(arg1, s32 *, 0xC);
    temp_2_2 = M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) ((temp_4_3 >= temp_2_2) ? temp_4_3 : temp_2_2);
}
