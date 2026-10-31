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

s32 Init__10VIZoneRoomiiUiUiR6VIBBox(s32 *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, void *); /* extern */
s32 Init__10VIZoneTreeii(s32, M2C_UNK, M2C_UNK);    /* extern */
s32 Init__t7VIArray1Z10VIZoneRoomi(void *, M2C_UNK); /* extern */

s32 Init__6VIZone(void *arg0) {
    s32 *temp_4;
    void *temp_17;
    void *temp_2;

    temp_17 = arg0 + 0x5C;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 1);
    if ((Init__10VIZoneTreeii(arg0 + 0x44, 0, 1) >= 0) && (Init__t7VIArray1Z10VIZoneRoomi(temp_17, 1) >= 0)) {
        temp_2 = M2C_FIELD(arg0, void **, 0x50);
        M2C_FIELD(temp_2, s32 *, 4) = 0;
        M2C_FIELD(temp_2, s32 *, 0) = 0;
        if (Init__10VIZoneRoomiiUiUiR6VIBBox(M2C_FIELD(temp_17, s32 **, 4), 0, 0, 0, 0, arg0 + 0x2C) >= 0) {
            temp_4 = M2C_FIELD(temp_17, s32 **, 4);
            *temp_4 |= 1;
            return 0;
        }
        goto block_5;
    }
block_5:
    return -1;
}
