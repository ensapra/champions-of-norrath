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

M2C_UNK BufferClear__6VIFile(void *);               /* extern */
s64 sceLseek(s32, s64, M2C_UNK);                    /* extern */
s32 sceWrite(s32, s32, s64);                        /* extern */

s32 BufferedSeek__6VIFilelQ26VIFile10SeekOrigin(void *arg0, s64 arg1, s32 arg2) {
    s32 temp_2_3;
    s32 var_2;
    s64 temp_17;
    s64 temp_18;
    s64 temp_2;
    s64 temp_2_2;
    s64 temp_3;
    s64 temp_4;
    s64 temp_4_2;
    s64 temp_5;
    u32 var_2_2;

    switch (arg2) {                                 /* irregular */
    case 1:
        M2C_FIELD(arg0, s64 *, 0x10) = arg1;
block_9:
        temp_4 = M2C_FIELD(arg0, s64 *, 0xB0);
        if (temp_4 != 0) {
            temp_3 = M2C_FIELD(arg0, s64 *, 0x10);
            temp_5 = M2C_FIELD(arg0, s64 *, 0x88);
            if ((temp_3 < temp_5) || (temp_3 >= (temp_5 + temp_4))) {
                temp_2 = M2C_FIELD(arg0, s64 *, 0x90);
                temp_4_2 = M2C_FIELD(arg0, s64 *, 0x98);
                temp_17 = temp_5 + temp_2;
                if ((temp_2 != temp_4_2) && ((temp_18 = (s64) ((temp_4_2 - temp_2) << 0x20) >> 0x20, (temp_17 == M2C_FIELD(arg0, s64 *, 0x18))) || (temp_2_2 = sceLseek(M2C_FIELD(arg0, s32 *, 0), (s64) (temp_17 << 0x20) >> 0x20, 0), M2C_FIELD(arg0, s64 *, 0x18) = temp_2_2, (temp_17 == temp_2_2)))) {
                    temp_2_3 = sceWrite(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 0xBC) + (s32) M2C_FIELD(arg0, s64 *, 0x90), temp_18);
                    M2C_FIELD(arg0, s64 *, 0x18) = (s64) (temp_2_3 + M2C_FIELD(arg0, s64 *, 0x18));
                    if (temp_2_3 == temp_18) {
                        M2C_FIELD(arg0, s64 *, 0x90) = 0;
                        M2C_FIELD(arg0, s64 *, 0x98) = 0;
                    }
                }
                BufferClear__6VIFile(arg0);
            } else {
                M2C_FIELD(arg0, s64 *, 0xA0) = (s64) (temp_3 - temp_5);
            }
        }
        M2C_FIELD(arg0, s32 *, 8) = 0;
        var_2 = 0;
        break;
    case 0:
        var_2_2 = (u32) M2C_FIELD(arg0, s64 *, 0x10);
block_8:
        M2C_FIELD(arg0, s64 *, 0x10) = (s64) (var_2_2 + arg1);
        goto block_9;
    default:
        var_2 = -1;
        if (arg2 == 2) {
            var_2_2 = M2C_FIELD(arg0, u32 *, 0x4C);
            goto block_8;
        }
        break;
    }
    return var_2;
}
