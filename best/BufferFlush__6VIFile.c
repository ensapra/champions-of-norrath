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

s64 sceLseek(s32, s64, M2C_UNK);                    /* extern */
s32 sceWrite(s32, s32, s64);                        /* extern */

s32 BufferFlush__6VIFile(void *arg0) {
    s32 temp_2_3;
    s32 var_2;
    s64 temp_17;
    s64 temp_18;
    s64 temp_2;
    s64 temp_2_2;
    s64 temp_5;

    var_2 = 0;
    if (M2C_FIELD(arg0, s64 *, 0xB0) != 0) {
        temp_5 = M2C_FIELD(arg0, s64 *, 0x90);
        temp_2 = M2C_FIELD(arg0, s64 *, 0x98);
        if (temp_5 != temp_2) {
            temp_18 = (s64) ((temp_2 - temp_5) << 0x20) >> 0x20;
            temp_17 = M2C_FIELD(arg0, s64 *, 0x88) + temp_5;
            if ((temp_17 == M2C_FIELD(arg0, s64 *, 0x18)) || (temp_2_2 = sceLseek(M2C_FIELD(arg0, s32 *, 0), (s64) (temp_17 << 0x20) >> 0x20, 0), var_2 = -1, M2C_FIELD(arg0, s64 *, 0x18) = temp_2_2, (temp_17 == temp_2_2))) {
                temp_2_3 = sceWrite(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 0xBC) + (s32) M2C_FIELD(arg0, s64 *, 0x90), temp_18);
                var_2 = -1;
                M2C_FIELD(arg0, s64 *, 0x18) = (s64) (temp_2_3 + M2C_FIELD(arg0, s64 *, 0x18));
                if (temp_2_3 == temp_18) {
                    M2C_FIELD(arg0, s64 *, 0x98) = 0;
                    M2C_FIELD(arg0, s64 *, 0x90) = 0;
                    goto block_6;
                }
            }
        } else {
block_6:
            var_2 = 0;
        }
    }
    return var_2;
}
