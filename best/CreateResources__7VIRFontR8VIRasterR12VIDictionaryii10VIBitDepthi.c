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

s32 CreateMaterial__8VIRasteri(s32, M2C_UNK);       /* extern */
s32 CreateSurface__8VIRasteri(s32, M2C_UNK);        /* extern */
M2C_UNK Init__10VIMateriali(s32, M2C_UNK);          /* extern */
s32 Init__9VISurfaceR8VIRasterii10VIBitDepthi(void *, s32, M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
s32 Material__8VIRasteri(s32, s32);                 /* extern */
M2C_UNK SetDither__10VIMateriali(s32, M2C_UNK);     /* extern */
M2C_UNK SetLayerBlendMode__10VIMateriali16VIAlphaBlendMode(s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK SetLayerColor__10VIMaterialiRC9VIColor32(s32, M2C_UNK, s8 *); /* extern */
M2C_UNK SetLayerTexture__10VIMaterialiiR8VIRasterR12VIDictionary(s32, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK SetLayerWrapMode__10VIMateriali18VIMaterialWrapMode(s32, M2C_UNK, M2C_UNK); /* extern */
s32 ShareMaterial__8VIRasteri(s32, s32);            /* extern */
s32 ShareSurface__8VIRasteri(s32, s32);             /* extern */
void *Surface__8VIRasteri(s32, s32, s32);           /* extern */

s32 CreateResources__7VIRFontR8VIRasterR12VIDictionaryii10VIBitDepthi(void *arg0, s32 arg1, s32 arg2, s32 arg4, s32 arg5, s32 arg6) {
    s8 sp10;
    s8 sp11;
    s8 sp12;
    s8 sp13;
    s32 temp_2;
    s32 temp_2_3;
    s32 temp_2_4;
    s32 temp_3;
    s32 temp_4;
    s32 temp_5;
    s32 temp_lo;
    s32 var_2;
    void *temp_2_2;

    temp_2 = CreateSurface__8VIRasteri(arg1, 0);
    var_2 = -1;
    M2C_FIELD(arg0, s32 *, 0xC) = temp_2;
    if (temp_2 >= 0) {
        if (ShareSurface__8VIRasteri(arg1, temp_2) >= 0) {
            temp_3 = M2C_FIELD(arg0, s32 *, 0x18);
            temp_lo = 0x100 / arg4;
            var_2 = -1;
            temp_5 = (0x100 / (s32) ((arg4 >= temp_3) ? arg4 : temp_3)) * temp_lo;
            M2C_FIELD(arg0, s32 *, 0x30) = temp_5;
            if (temp_5 > 0) {
                temp_2_2 = Surface__8VIRasteri(arg1, M2C_FIELD(arg0, s32 *, 0xC), temp_lo);
                var_2 = -1;
                if (Init__9VISurfaceR8VIRasterii10VIBitDepthi(temp_2_2, arg1, 0x100, 0x100, arg5, 1) >= 0) {
                    temp_4 = M2C_FIELD(temp_2_2, s32 *, 0x10);
                    M2C_FIELD(arg0, s32 *, 0x1C) = temp_4;
                    if (M2C_FIELD(temp_2_2, s32 *, 0x28) != 0) {
                        M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(temp_2_2, s32 *, 0x34);
                        if (temp_4 == 0) {
                            M2C_FIELD(arg0, s32 *, 0x34) = 0x10;
                            goto block_11;
                        }
                        var_2 = -1;
                        if (temp_4 == 1) {
                            M2C_FIELD(arg0, s32 *, 0x34) = 0x100;
                            goto block_11;
                        }
                        /* Duplicate return node #21. Try simplifying control flow for better match */
                        return var_2;
                    }
                    M2C_FIELD(arg0, s32 *, 0x34) = 0;
block_11:
                    temp_2_3 = CreateMaterial__8VIRasteri(arg1, 0);
                    var_2 = -1;
                    M2C_FIELD(arg0, s32 *, 0x10) = temp_2_3;
                    if (temp_2_3 >= 0) {
                        if (ShareMaterial__8VIRasteri(arg1, temp_2_3) >= 0) {
                            temp_2_4 = Material__8VIRasteri(arg1, M2C_FIELD(arg0, s32 *, 0x10));
                            Init__10VIMateriali(temp_2_4, 1);
                            SetLayerTexture__10VIMaterialiiR8VIRasterR12VIDictionary(temp_2_4, 0, M2C_FIELD(arg0, s32 *, 0xC), arg1, arg2);
                            SetLayerWrapMode__10VIMateriali18VIMaterialWrapMode(temp_2_4, 0, 3);
                            if (arg6 == 0) {
                                SetLayerBlendMode__10VIMateriali16VIAlphaBlendMode(temp_2_4, 0, 3);
                            } else {
                                SetLayerBlendMode__10VIMateriali16VIAlphaBlendMode(temp_2_4, 0, 0);
                            }
                            sp10 = -1;
                            sp13 = -1;
                            sp11 = -1;
                            sp12 = -1;
                            SetLayerColor__10VIMaterialiRC9VIColor32(temp_2_4, 0, &sp10);
                            SetDither__10VIMateriali(temp_2_4, 0);
                            var_2 = 0;
                            /* Duplicate return node #21. Try simplifying control flow for better match */
                            return var_2;
                        }
                        goto block_15;
                    }
                    /* Duplicate return node #21. Try simplifying control flow for better match */
                    return var_2;
                }
            }
            /* Duplicate return node #21. Try simplifying control flow for better match */
            return var_2;
        }
block_15:
        return -1;
    }
    return var_2;
}
