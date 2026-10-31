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

s32 Allocate__7VIRFont(void *);                     /* extern */
s32 CalcDataSize__7VIRFontPUc(void *, s32);         /* extern */
s32 CalcMaxWidth__7VIRFontiPUc(s32, s32);           /* extern */
s32 CreateResources__7VIRFontR8VIRasterR12VIDictionaryii10VIBitDepthi(void *, s32, s32, s32, s32, s32, s32); /* extern */
s32 InitChars__7VIRFontPUc(void *, s32);            /* extern */
s32 InitSlots__7VIRFontR8VIRaster(void *, s32, s32, s32, s32); /* extern */

s32 Init__7VIRFontR8VIRasterR12VIDictionaryiPUci10VIBitDepthi(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 temp_2;
    s32 temp_6;
    s32 temp_7;
    s32 temp_8;

    M2C_FIELD(arg0, s32 *, 0x14) = arg5;
    M2C_FIELD(arg0, s32 *, 0x28) = arg3;
    if ((CalcMaxWidth__7VIRFontiPUc(arg3, arg4) >= 0) && (CreateResources__7VIRFontR8VIRasterR12VIDictionaryii10VIBitDepthi(arg0, arg1, arg2, arg3, M2C_FIELD(arg0, s32 *, 0x14), arg6, arg7) >= 0)) {
        if (CalcDataSize__7VIRFontPUc(arg0, arg4) < 0) {
            return -1;
        }
        if ((Allocate__7VIRFont(arg0) < 0) || (temp_2 = M2C_FIELD(arg0, s32 *, 0x54), temp_8 = M2C_FIELD(arg0, s32 *, 0x48), temp_6 = temp_2 + M2C_FIELD(arg0, s32 *, 0x44), temp_7 = temp_2 + M2C_FIELD(arg0, s32 *, 0x4C), M2C_FIELD(arg0, s32 *, 0x40) = (s32) (temp_2 + M2C_FIELD(arg0, s32 *, 0x40)), M2C_FIELD(arg0, s32 *, 0x44) = temp_6, M2C_FIELD(arg0, s32 *, 0x4C) = temp_7, M2C_FIELD(arg0, s32 *, 0x48) = (s32) (temp_2 + temp_8), (InitSlots__7VIRFontR8VIRaster(arg0, arg1, temp_6, temp_7, temp_8) < 0))) {
            goto block_7;
        }
        return (InitChars__7VIRFontPUc(arg0, arg4) >= 0) ? 0 : -1;
    }
block_7:
    return -1;
}
