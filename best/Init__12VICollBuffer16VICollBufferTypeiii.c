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

s32 Allocate__12VICollBuffer(void *);               /* extern */
s32 CalcDataSize__12VICollBuffer();                 /* extern */

s32 Init__12VICollBuffer16VICollBufferTypeiii(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_5;

    M2C_FIELD(arg0, s32 *, 0x30) = arg2;
    M2C_FIELD(arg0, s32 *, 0x38) = arg3;
    M2C_FIELD(arg0, s32 *, 0x40) = arg4;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    if (arg1 == 2) {
        M2C_FIELD(arg0, s32 *, 8) = 3;
    }
    if (CalcDataSize__12VICollBuffer() >= 0) {
        if (Allocate__12VICollBuffer(arg0) >= 0) {
            temp_5 = M2C_FIELD(arg0, s32 *, 0x58);
            M2C_FIELD(arg0, s32 *, 0x44) = (s32) (temp_5 + M2C_FIELD(arg0, s32 *, 0x44));
            M2C_FIELD(arg0, s32 *, 0x48) = (s32) (temp_5 + M2C_FIELD(arg0, s32 *, 0x48));
            M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (temp_5 + M2C_FIELD(arg0, s32 *, 0x4C));
            return 0;
        }
        goto block_6;
    }
block_6:
    return -1;
}
