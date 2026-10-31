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

s32 SetGSScissoring__8VIRaster(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp10;
    s32 sp14;
    s32 temp_11;
    s32 temp_7;
    void *temp_3;
    void *temp_7_2;

    temp_7 = M2C_FIELD(arg0, s32 *, 0x4534);
    temp_11 = M2C_FIELD(arg0, s32 *, 0x4538);
    sp0 = 0;
    sp4 = 0;
    sp10 = 0;
    sp0 = temp_7;
    sp14 = 0;
    sp4 = temp_11;
    sp10 = (temp_7 + M2C_FIELD(arg0, s32 *, 0x453C)) - 1;
    sp14 = (temp_11 + M2C_FIELD(arg0, s32 *, 0x4540)) - 1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C24), s8 *, 3) = 0x10;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C24), s32 *, 4) = 0;
    temp_7_2 = M2C_FIELD(arg0, void **, 0x4C24);
    temp_3 = temp_7_2 + 0x10;
    M2C_FIELD(temp_7_2, s16 *, 0) = 4;
    M2C_FIELD(arg0, void **, 0x4C24) = (void *) (temp_7_2 + 0x50);
    M2C_FIELD(temp_3, s32 *, 8) = 0x10000000;
    M2C_FIELD(temp_3, s32 *, 0xC) = 0x50000003;
    M2C_FIELD(temp_7_2, s32 *, 0x10) = 0;
    M2C_FIELD(temp_3, s32 *, 4) = 0;
    M2C_FIELD((temp_7_2 + 0x20), s64 *, 8) = 0xE;
    M2C_FIELD(temp_7_2, s64 *, 0x20) = (s64) ((0x10000000 << 0x20) | 0x8002);
    M2C_FIELD((temp_7_2 + 0x30), s64 *, 8) = 0x40;
    M2C_FIELD(temp_7_2, s64 *, 0x30) = (s64) (sp0 | ((s64) sp14 << 0x30) | (((s64) sp4 << 0x20) | ((s64) sp10 << 0x10)));
    M2C_FIELD(temp_7_2, s64 *, 0x40) = (s64) (sp0 | ((s64) sp14 << 0x30) | (((s64) sp4 << 0x20) | ((s64) sp10 << 0x10)));
    M2C_FIELD((temp_7_2 + 0x40), s64 *, 8) = 0x41;
    return 0;
}
