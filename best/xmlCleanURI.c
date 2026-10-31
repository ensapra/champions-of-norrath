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

extern M2C_UNK (*D_011B1E18)(s32);

void xmlCleanURI(void *arg0) {
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_4_4;
    s32 temp_4_5;
    s32 temp_4_6;
    s32 temp_4_7;
    s32 temp_4_8;

    if (arg0 != NULL) {
        temp_4 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_4 != 0) {
            D_011B1E18(temp_4);
        }
        temp_4_2 = M2C_FIELD(arg0, s32 *, 0xC);
        M2C_FIELD(arg0, s32 *, 0) = 0;
        if (temp_4_2 != 0) {
            D_011B1E18(temp_4_2);
        }
        temp_4_3 = M2C_FIELD(arg0, s32 *, 0x10);
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
        if (temp_4_3 != 0) {
            D_011B1E18(temp_4_3);
        }
        temp_4_4 = M2C_FIELD(arg0, s32 *, 0x18);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        if (temp_4_4 != 0) {
            D_011B1E18(temp_4_4);
        }
        temp_4_5 = M2C_FIELD(arg0, s32 *, 0x20);
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        if (temp_4_5 != 0) {
            D_011B1E18(temp_4_5);
        }
        temp_4_6 = M2C_FIELD(arg0, s32 *, 4);
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        if (temp_4_6 != 0) {
            D_011B1E18(temp_4_6);
        }
        temp_4_7 = M2C_FIELD(arg0, s32 *, 8);
        M2C_FIELD(arg0, s32 *, 4) = 0;
        if (temp_4_7 != 0) {
            D_011B1E18(temp_4_7);
        }
        temp_4_8 = M2C_FIELD(arg0, s32 *, 0x1C);
        M2C_FIELD(arg0, s32 *, 8) = 0;
        if (temp_4_8 != 0) {
            D_011B1E18(temp_4_8);
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
}
