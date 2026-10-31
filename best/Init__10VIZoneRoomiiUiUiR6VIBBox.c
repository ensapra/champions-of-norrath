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

s32 Allocate__10VIZoneRoom(void *);                 /* extern */
s32 CalcDataSize__10VIZoneRoom(M2C_UNK, void *);    /* extern */

s32 Init__10VIZoneRoomiiUiUiR6VIBBox(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, void *arg5) {
    s32 temp_3_2;
    void *temp_11;
    void *temp_12;
    void *temp_3;

    temp_3 = arg0 + 4;
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg5, f32 *, 0);
    temp_11 = arg5 + 0xC;
    temp_12 = arg0 + 0x10;
    M2C_FIELD(arg0, s32 *, 0x1C) = -1;
    M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(arg5, f32 *, 4);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 2);
    M2C_FIELD(arg0, s32 *, 0x28) = arg3;
    M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(arg5, f32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x30) = arg4;
    M2C_FIELD(arg0, s32 *, 0x50) = arg1;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg5, f32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x58) = arg2;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(temp_12, f32 *, 4) = (f32) M2C_FIELD(temp_11, f32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(temp_12, f32 *, 8) = (f32) M2C_FIELD(temp_11, f32 *, 8);
    if (CalcDataSize__10VIZoneRoom(-1, temp_11) >= 0) {
        if (Allocate__10VIZoneRoom(arg0) >= 0) {
            temp_3_2 = M2C_FIELD(arg0, s32 *, 0x74);
            M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (temp_3_2 + M2C_FIELD(arg0, s32 *, 0x5C));
            M2C_FIELD(arg0, s32 *, 0x60) = (s32) (temp_3_2 + M2C_FIELD(arg0, s32 *, 0x60));
            return 0;
        }
        goto block_4;
    }
block_4:
    return -1;
}
