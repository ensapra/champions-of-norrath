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

s32 Clear__t7VIArray1Zi(s32);                       /* extern */
M2C_UNK __builtin_vec_delete(s32);                  /* extern */

s32 Clear__10VIZoneRoom(void *arg0) {
    s32 temp_2;
    void *temp_3;
    void *temp_5;

    if (Clear__t7VIArray1Zi(arg0 + 0x3C) >= 0) {
        if (Clear__t7VIArray1Zi(arg0 + 0x44) >= 0) {
            temp_2 = M2C_FIELD(arg0, s32 *, 0x74);
            if (temp_2 != 0) {
                __builtin_vec_delete(temp_2);
            }
            temp_3 = arg0 + 4;
            temp_5 = arg0 + 0x10;
            M2C_FIELD(temp_3, f32 *, 8) = 0.0f;
            M2C_FIELD(arg0, f32 *, 4) = 0.0f;
            M2C_FIELD(temp_3, f32 *, 4) = 0.0f;
            M2C_FIELD(arg0, s32 *, 0x6C) = -1;
            M2C_FIELD(arg0, s32 *, 0x74) = 0;
            M2C_FIELD(temp_5, f32 *, 8) = 0.0f;
            M2C_FIELD(arg0, s32 *, 0) = 0;
            M2C_FIELD(arg0, f32 *, 0x10) = 0.0f;
            M2C_FIELD(temp_5, f32 *, 4) = 0.0f;
            M2C_FIELD(arg0, s32 *, 0x1C) = -1;
            M2C_FIELD(arg0, s32 *, 0x20) = 0;
            M2C_FIELD(arg0, s32 *, 0x24) = 0;
            M2C_FIELD(arg0, s32 *, 0x28) = 0;
            M2C_FIELD(arg0, s32 *, 0x2C) = -1;
            M2C_FIELD(arg0, s32 *, 0x30) = 0;
            M2C_FIELD(arg0, s32 *, 0x34) = -1;
            M2C_FIELD(arg0, s32 *, 0x38) = -1;
            M2C_FIELD(arg0, s32 *, 0x4C) = 0;
            M2C_FIELD(arg0, s32 *, 0x50) = 0;
            M2C_FIELD(arg0, s32 *, 0x54) = 0;
            M2C_FIELD(arg0, s32 *, 0x58) = 0;
            M2C_FIELD(arg0, s32 *, 0x5C) = 0;
            M2C_FIELD(arg0, s32 *, 0x60) = 0;
            M2C_FIELD(arg0, s32 *, 0x64) = -1;
            M2C_FIELD(arg0, s32 *, 0x68) = -1;
            M2C_FIELD(arg0, s32 *, 0x70) = 0;
            return 0;
        }
        goto block_4;
    }
block_4:
    return -1;
}
