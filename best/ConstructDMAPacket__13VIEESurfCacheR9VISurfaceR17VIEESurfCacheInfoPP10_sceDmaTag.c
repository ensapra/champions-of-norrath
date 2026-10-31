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

s32 ConstructDMAPacket__13VIEESurfCacheR9VISurfaceR17VIEESurfCacheInfoPP10_sceDmaTag(void *arg1, void *arg2, void **arg3) {
    s32 *temp_6_2;
    s32 *temp_7;
    s32 *var_9;
    s32 temp_3_2;
    s32 temp_3_3;
    s32 var_14;
    s32 var_15;
    s32 var_24;
    s32 var_2;
    s32 var_3_2;
    s32 var_8;
    s64 temp_2;
    s64 var_2_2;
    s64 var_3;
    s64 var_5;
    void *temp_11;
    void *temp_11_2;
    void *temp_11_3;
    void *temp_11_4;
    void *temp_11_5;
    void *temp_3;
    void *temp_3_4;
    void *temp_4;
    void *temp_6;
    void *temp_9;

    if (M2C_FIELD(arg1, s32 *, 0x28) != 0) {
        M2C_FIELD(*arg3, s8 *, 3) = 0x10;
        M2C_FIELD(*arg3, s32 *, 4) = 0;
        temp_9 = *arg3;
        temp_11 = temp_9 + 0x10;
        *arg3 = temp_9 + 0x60;
        M2C_FIELD(temp_9, s16 *, 0) = 5;
        M2C_FIELD(temp_11, s32 *, 0xC) = 0x50000004;
        M2C_FIELD(temp_11, s32 *, 8) = 0x11000000;
        M2C_FIELD(temp_9, s32 *, 0x10) = 0;
        M2C_FIELD(temp_11, s32 *, 4) = 0;
        M2C_FIELD((temp_9 + 0x20), s64 *, 8) = 0xE;
        M2C_FIELD(temp_9, s64 *, 0x20) = (s64) ((0x10000000 << 0x20) | 0x8003);
        temp_11_2 = temp_9 + 0x30;
        if (M2C_FIELD(arg2, s32 *, 0x14) == 0x14) {
            var_5 = 0x8000 << 0x21;
            var_2 = (((s64) M2C_FIELD(arg2, s32 *, 0xC) >> 8) << 0x20) | ((s64) M2C_FIELD(arg2, s32 *, 4) << 0x38);
            var_3 = (2 << 0x20) | 8;
            M2C_FIELD(temp_11_2, s64 *, 8) = 0x50;
        } else {
            var_5 = 0x8000 << 0x21;
            M2C_FIELD(temp_11_2, s64 *, 8) = 0x50;
            var_2 = (((s64) M2C_FIELD(arg2, s32 *, 0xC) >> 8) << 0x20) | ((s64) M2C_FIELD(arg2, s32 *, 4) << 0x38);
            var_3 = (0x10 << 0x20) | 0x10;
        }
        M2C_FIELD(temp_9, s64 *, 0x30) = (s64) (var_2 | var_5);
        M2C_FIELD((temp_9 + 0x40), s64 *, 8) = 0x51;
        M2C_FIELD(temp_9, s64 *, 0x40) = 0;
        M2C_FIELD((temp_9 + 0x50), s64 *, 8) = 0x52;
        M2C_FIELD(temp_9, s64 *, 0x50) = var_3;
        M2C_FIELD(*arg3, s8 *, 3) = 0x30;
        M2C_FIELD(*arg3, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 0x38);
        temp_3 = *arg3;
        M2C_FIELD(temp_3, s16 *, 0) = (s16) M2C_FIELD(arg1, s32 *, 0x3C);
        *arg3 = temp_3 + 0x10;
    }
    var_24 = 0;
    var_8 = M2C_FIELD(arg1, s32 *, 8);
    var_15 = M2C_FIELD(arg1, s32 *, 0xC);
    if (M2C_FIELD(arg2, s32 *, 0x1C) > 0) {
        var_14 = 0x50;
        var_9 = arg2 + 0x20;
        do {
            M2C_FIELD(*arg3, s8 *, 3) = 0x10;
            M2C_FIELD(*arg3, s32 *, 4) = 0;
            temp_6 = *arg3;
            temp_11_3 = temp_6 + 0x10;
            *arg3 = temp_6 + 0x60;
            M2C_FIELD(temp_6, s16 *, 0) = 5;
            M2C_FIELD(temp_6, s32 *, 0x10) = 0;
            M2C_FIELD(temp_11_3, s32 *, 4) = 0;
            M2C_FIELD(temp_11_3, s32 *, 0xC) = 0x50000004;
            M2C_FIELD(temp_11_3, s32 *, 8) = (s32) ((M2C_FIELD(arg1, s32 *, 0x28) != 0) ? 0 : 0x11000000);
            M2C_FIELD((temp_6 + 0x20), s64 *, 8) = 0xE;
            M2C_FIELD(temp_6, s64 *, 0x20) = (s64) ((0x10000000 << 0x20) | 0x8003);
            if ((u32) (M2C_FIELD(arg2, s32 *, 0x14) - 0x13) >= 2U) {
                temp_3_2 = var_8 >> 6;
                var_2_2 = (s64) *var_9 >> 8;
                var_3_2 = (temp_3_2 < 1) ? 1 : temp_3_2;
            } else {
                temp_3_3 = var_8 >> 6;
                var_2_2 = (s64) *var_9 >> 8;
                var_3_2 = (temp_3_3 < 2) ? 2 : temp_3_3;
            }
            M2C_FIELD((temp_6 + 0x30), s64 *, 8) = 0x50;
            M2C_FIELD(temp_6, s64 *, 0x30) = (s64) ((var_2_2 << 0x20) | ((s64) var_3_2 << 0x30) | ((s64) M2C_FIELD(arg2, s32 *, 0x14) << 0x38));
            temp_11_4 = temp_6 + 0x40;
            temp_2 = (s64) var_15 << 0x20;
            var_15 = var_15 >> 1;
            M2C_FIELD(temp_6, s64 *, 0x40) = 0;
            M2C_FIELD(temp_11_4, s64 *, 8) = 0x51;
            M2C_FIELD(temp_11_4, s64 *, 0x10) = (s64) (var_8 | temp_2);
            temp_7 = arg1 + 8 + var_14;
            M2C_FIELD((temp_11_4 + 0x10), s64 *, 8) = 0x52;
            temp_6_2 = arg1 + 4 + var_14;
            var_24 += 1;
            var_8 = var_8 >> 1;
            var_14 += 0x18;
            var_9 += 4;
            M2C_FIELD(*arg3, s8 *, 3) = 0x30;
            M2C_FIELD(*arg3, s32 *, 4) = (s32) *temp_6_2;
            temp_3_4 = *arg3;
            M2C_FIELD(temp_3_4, s16 *, 0) = (s16) *temp_7;
            *arg3 = temp_3_4 + 0x10;
        } while (var_24 < M2C_FIELD(arg2, s32 *, 0x1C));
    }
    M2C_FIELD(*arg3, s8 *, 3) = 0x10;
    M2C_FIELD(*arg3, s32 *, 4) = 0;
    temp_4 = *arg3;
    temp_11_5 = temp_4 + 0x10;
    *arg3 = temp_4 + 0x40;
    M2C_FIELD(temp_4, s16 *, 0) = 3;
    M2C_FIELD(temp_11_5, s32 *, 0xC) = 0x50000002;
    M2C_FIELD(temp_4, s32 *, 0x10) = 0;
    M2C_FIELD(temp_11_5, s32 *, 4) = 0;
    M2C_FIELD(temp_11_5, s32 *, 8) = 0;
    M2C_FIELD((temp_4 + 0x20), s64 *, 8) = 0xE;
    M2C_FIELD(temp_4, s64 *, 0x20) = (s64) ((0x10000000 << 0x20) | 0x8001);
    M2C_FIELD((temp_4 + 0x30), s64 *, 8) = 0x3F;
    M2C_FIELD(temp_4, s64 *, 0x30) = 1;
    return 0;
}
