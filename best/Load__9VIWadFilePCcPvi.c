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

void *LookupEntry__9VIWadFilePCc();                 /* extern */
s32 Read__6VIFilePvi(s32, s32, s32);                /* extern */
s32 Seek__6VIFilelQ26VIFile10SeekOrigin(s32, s32, M2C_UNK); /* extern */

s32 Load__9VIWadFilePCcPvi(s32 arg0, s32 arg2, s32 arg3) {
    s32 var_2;
    void *temp_2;

    temp_2 = LookupEntry__9VIWadFilePCc();
    var_2 = -1;
    if (temp_2 != NULL) {
        var_2 = 0;
        if (arg3 >= M2C_FIELD(temp_2, s32 *, 8)) {
            if (Seek__6VIFilelQ26VIFile10SeekOrigin(arg0, M2C_FIELD(temp_2, s32 *, 4) + 0x100, 1) >= 0) {
                if (Read__6VIFilePvi(arg0, arg2, M2C_FIELD(temp_2, s32 *, 8)) >= 0) {
                    return M2C_FIELD(temp_2, s32 *, 8);
                }
                goto block_6;
            }
block_6:
            var_2 = -1;
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return var_2;
        }
    }
    return var_2;
}
