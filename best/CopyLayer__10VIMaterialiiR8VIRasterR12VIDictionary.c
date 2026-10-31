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

M2C_UNK ReleaseSurface__8VIRasteriR12VIDictionary(s32, s32, s32, s32, void *, void *, void *, void *); /* extern */
M2C_UNK ShareSurface__8VIRasteri(s32, s32);         /* extern */
M2C_UNK __as__10VIMatrix33RC10VIMatrix33(s32, s32, s32); /* extern */

s32 CopyLayer__10VIMaterialiiR8VIRasterR12VIDictionary(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_16_2;
    s32 temp_19;
    s32 temp_21;
    s32 temp_7;
    void *temp_16;
    void *temp_17;
    void *temp_20;
    void *temp_22;
    void *temp_8;
    void *temp_9;

    temp_19 = arg1 * 0x90;
    temp_21 = arg2 * 0x90;
    temp_16 = temp_19 + arg0;
    temp_17 = temp_21 + arg0;
    temp_20 = arg0 + (temp_19 + 0x30);
    temp_22 = arg0 + (temp_21 + 0x30);
    if (arg1 != arg2) {
        M2C_FIELD(temp_22, s32 *, 4) = (s32) M2C_FIELD(temp_20, s32 *, 4);
        M2C_FIELD(temp_17, M2C_UNK *, 0x38) = M2C_UNALIGNED32(M2C_FIELD(temp_16, M2C_UNK *, 0x38));
        M2C_FIELD(temp_22, s32 *, 0xC) = (s32) M2C_FIELD(temp_20, s32 *, 0xC);
        __as__10VIMatrix33RC10VIMatrix33(temp_17 + 0x40, temp_16 + 0x40, arg1);
        temp_8 = temp_16 + 0x70;
        temp_9 = temp_17 + 0x70;
        M2C_FIELD(temp_17, f32 *, 0x68) = (f32) M2C_FIELD(temp_16, f32 *, 0x68);
        temp_7 = M2C_FIELD(temp_22, s32 *, 0);
        temp_16_2 = M2C_FIELD(temp_20, s32 *, 0);
        M2C_FIELD((temp_17 + 0x68), f32 *, 4) = (f32) M2C_FIELD((temp_16 + 0x68), f32 *, 4);
        M2C_FIELD(temp_17, f32 *, 0x70) = (f32) M2C_FIELD(temp_16, f32 *, 0x70);
        M2C_FIELD(temp_9, f32 *, 4) = (f32) M2C_FIELD(temp_8, f32 *, 4);
        M2C_FIELD(temp_17, f32 *, 0x64) = (f32) M2C_FIELD(temp_16, f32 *, 0x64);
        if (temp_7 != -1) {
            ReleaseSurface__8VIRasteriR12VIDictionary(arg3, temp_7, arg4, temp_7, temp_8, temp_9, temp_17, temp_16);
        }
        M2C_FIELD(temp_22, s32 *, 0) = temp_16_2;
        if (temp_16_2 != -1) {
            ShareSurface__8VIRasteri(arg3, temp_16_2);
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
    }
    return 0;
}
