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

s32 FileType__9VIObjFile(s32, s32, s32, s32, s32);  /* extern */
s32 NumObjects__9VIObjFile(s32);                    /* extern */
s32 ParseZoneResource__10VIESFParse(void *);        /* extern */

s32 ParseZoneResource__10VIESFParseR9VIObjFileiR7VIScene(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 temp_10;
    s32 temp_2;
    s32 temp_6;
    s32 temp_8;
    s32 temp_9;
    s32 var_18;

    M2C_FIELD(arg0, void **, 0x18) = arg3;
    temp_10 = M2C_FIELD(arg3, s32 *, 0x4B98);
    temp_8 = M2C_FIELD(arg3, s32 *, 0x4B9C);
    temp_9 = M2C_FIELD(arg3, s32 *, 0x4BA4);
    temp_6 = M2C_FIELD(arg3, s32 *, 0x4BA0);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg3, s32 *, 0x50) + (arg2 * 0x250));
    M2C_FIELD(arg0, s32 *, 0x20) = temp_10;
    M2C_FIELD(arg0, s32 *, 0xC) = temp_8;
    M2C_FIELD(arg0, s32 *, 0x14) = temp_9;
    M2C_FIELD(arg0, s32 *, 0x10) = temp_6;
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    if (FileType__9VIObjFile(arg1, temp_6, temp_8, temp_9, temp_10) == 0xAB4F) {
        var_18 = 0;
        temp_2 = NumObjects__9VIObjFile(arg1);
        if (temp_2 > 0) {
loop_6:
            var_18 += 1;
            if (ParseZoneResource__10VIESFParse(arg0) >= 0) {
                if (var_18 >= temp_2) {
                    goto block_8;
                }
                goto loop_6;
            }
            goto block_3;
        }
block_8:
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, void **, 0x18) = NULL;
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        return 0;
    }
block_3:
    return -1;
}
