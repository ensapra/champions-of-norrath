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

s32 SetDMAHeaders__9VISurface(void *arg0) {
    s32 *temp_5;
    s32 var_6;
    s32 var_7;
    void **temp_4;
    void *temp_2;
    void *temp_2_2;
    void *temp_9;
    void *temp_9_2;
    void *temp_9_3;
    void *temp_9_4;

    if (M2C_FIELD(arg0, s32 *, 0x28) != 0) {
        temp_2 = M2C_FIELD(arg0, s32 *, 0x138) + M2C_FIELD(arg0, void **, 0x38);
        M2C_FIELD(arg0, void **, 0x38) = temp_2;
        M2C_FIELD(temp_2, s32 *, 0) = 0;
        M2C_FIELD(temp_2, s32 *, 4) = 0;
        M2C_FIELD(temp_2, s32 *, 8) = 0;
        M2C_FIELD(temp_2, s32 *, 0xC) = (s32) ((M2C_FIELD(arg0, s32 *, 0x3C) - 1) | 0x50000000);
        temp_9 = temp_2 + 0x10;
        M2C_FIELD(temp_2, s64 *, 0x10) = (s64) ((0x10000000 << 0x20) | 1);
        M2C_FIELD(temp_9, s64 *, 8) = 0xE;
        temp_9_2 = temp_9 + 0x10;
        M2C_FIELD(temp_9_2, s64 *, 8) = 0x53;
        M2C_FIELD(temp_9, s64 *, 0x10) = 0;
        M2C_FIELD((temp_9_2 + 0x10), s64 *, 8) = 0;
        M2C_FIELD(temp_9_2, s64 *, 0x10) = (s64) ((M2C_FIELD(arg0, s32 *, 0x3C) - 4) | 0x8000 | (0x8000 << 0x2C));
    }
    var_7 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x40) > 0) {
        var_6 = 0x50;
        do {
            temp_4 = arg0 + 4 + var_6;
            temp_5 = arg0 + 8 + var_6;
            var_7 += 1;
            temp_2_2 = M2C_FIELD(arg0, s32 *, 0x138) + *temp_4;
            *temp_4 = temp_2_2;
            M2C_FIELD(temp_2_2, s32 *, 0) = 0;
            M2C_FIELD(temp_2_2, s32 *, 4) = 0;
            M2C_FIELD(temp_2_2, s32 *, 8) = 0;
            M2C_FIELD(temp_2_2, s32 *, 0xC) = (s32) ((*temp_5 - 1) | 0x50000000);
            temp_9_3 = temp_2_2 + 0x10;
            M2C_FIELD(temp_2_2, s64 *, 0x10) = (s64) ((0x10000000 << 0x20) | 1);
            M2C_FIELD(temp_9_3, s64 *, 8) = 0xE;
            temp_9_4 = temp_9_3 + 0x10;
            M2C_FIELD(temp_9_3, s64 *, 0x10) = 0;
            M2C_FIELD(temp_9_4, s64 *, 8) = 0x53;
            M2C_FIELD((temp_9_4 + 0x10), s64 *, 8) = 0;
            M2C_FIELD(temp_9_4, s64 *, 0x10) = (s64) ((*temp_5 - 4) | 0x8000 | (0x8000 << 0x2C));
            var_6 += 0x18;
        } while (var_7 < M2C_FIELD(arg0, s32 *, 0x40));
    }
    return 0;
}
