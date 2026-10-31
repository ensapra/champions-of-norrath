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

s32 Clear__10VIZoneTree(void *);                    /* extern */
s32 Clear__17VIZoneRadialFlora(s32, void *);        /* extern */
s32 Clear__t7VIArray1Z10VIZoneRoom(void *);         /* extern */
s32 Clear__t7VIArray1Z14VIResourceElem(void *);     /* extern */
s32 Clear__t7VIArray1Z7VIVect3(void *);             /* extern */

s32 Clear__6VIZone(void *arg0) {
    void *temp_2;
    void *temp_3;
    void *temp_5;

    temp_2 = arg0 + 0x20;
    temp_3 = arg0 + 0x2C;
    temp_5 = arg0 + 0x38;
    M2C_FIELD(temp_2, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x20) = 0.0f;
    M2C_FIELD(temp_2, f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(temp_3, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x2C) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, s64 *, 0x10) = 0;
    M2C_FIELD(temp_5, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = -1;
    M2C_FIELD(arg0, f32 *, 0x38) = 0.0f;
    M2C_FIELD(temp_5, f32 *, 4) = 0.0f;
    if (Clear__17VIZoneRadialFlora(arg0 + 0x74, temp_5) >= 0) {
        if (Clear__t7VIArray1Z7VIVect3(arg0 + 0x54) < 0) {
            return -1;
        }
        if ((Clear__t7VIArray1Z10VIZoneRoom(arg0 + 0x5C) < 0) || (Clear__10VIZoneTree(arg0 + 0x44) < 0)) {
            goto block_6;
        }
        return (Clear__t7VIArray1Z14VIResourceElem(arg0 + 0x64) >= 0) ? 0 : -1;
    }
block_6:
    return -1;
}
