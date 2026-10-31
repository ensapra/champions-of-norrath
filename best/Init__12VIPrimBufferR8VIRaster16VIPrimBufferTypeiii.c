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

s32 Allocate__12VIPrimBuffer(void *);               /* extern */
s32 CalcDataSize__12VIPrimBufferiii(s32, s32, s32); /* extern */

s32 Init__12VIPrimBufferR8VIRaster16VIPrimBufferTypeiii(void *arg0, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_5;

    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0x44) = arg3;
    M2C_FIELD(arg0, s32 *, 0x4C) = arg4;
    if (CalcDataSize__12VIPrimBufferiii(arg3, arg4, arg5) >= 0) {
        if (Allocate__12VIPrimBuffer(arg0) >= 0) {
            temp_5 = M2C_FIELD(arg0, s32 *, 0x68);
            M2C_FIELD(arg0, s32 *, 0x58) = (s32) (temp_5 + M2C_FIELD(arg0, s32 *, 0x58));
            M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (temp_5 + M2C_FIELD(arg0, s32 *, 0x5C));
            M2C_FIELD(arg0, s32 *, 0x60) = (s32) (temp_5 + M2C_FIELD(arg0, s32 *, 0x60));
            return 0;
        }
        goto block_4;
    }
block_4:
    return -1;
}
