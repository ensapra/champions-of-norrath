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

s32 xmlCreateIntSubset(void *, s32, s32, s32);      /* extern */
M2C_UNK xmlFreeDtd(s32);                            /* extern */
s32 xmlGetIntSubset(void *);                        /* extern */
M2C_UNK xmlUnlinkNode(s32);                         /* extern */

void internalSubset(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_2_2;
    void *temp_2;

    temp_2 = M2C_FIELD(arg0, void **, 8);
    if (temp_2 != NULL) {
        temp_2_2 = xmlGetIntSubset(temp_2);
        if (temp_2_2 == 0) {
            goto block_6;
        }
        if (M2C_FIELD(arg0, s32 *, 0x20) == 0) {
            xmlUnlinkNode(temp_2_2);
            xmlFreeDtd(temp_2_2);
            M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x2C) = 0;
block_6:
            M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x2C) = xmlCreateIntSubset(M2C_FIELD(arg0, void **, 8), arg1, arg2, arg3);
        }
    }
}
