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

s32 Allocate__13VIColorBuffer(void *);              /* extern */
s32 CalcDataSize__13VIColorBufferR12VIPrimBuffer(void *, s32); /* extern */
s32 PrimBuffer__8VIRasteri(s32, s32);               /* extern */
s32 SharePrimBuffer__8VIRasteri(s32);               /* extern */

s32 Init__13VIColorBufferiR8VIRaster(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_5;

    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    if ((SharePrimBuffer__8VIRasteri(arg2) >= 0) && (CalcDataSize__13VIColorBufferR12VIPrimBuffer(arg0, PrimBuffer__8VIRasteri(arg2, arg1)) >= 0)) {
        if (Allocate__13VIColorBuffer(arg0) >= 0) {
            temp_5 = M2C_FIELD(arg0, s32 *, 0x34);
            M2C_FIELD(arg0, s32 *, 0x24) = (s32) (temp_5 + M2C_FIELD(arg0, s32 *, 0x24));
            M2C_FIELD(arg0, s32 *, 0x28) = (s32) (temp_5 + M2C_FIELD(arg0, s32 *, 0x28));
            M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_5 + M2C_FIELD(arg0, s32 *, 0x2C));
            return 0;
        }
        goto block_5;
    }
block_5:
    return -1;
}
