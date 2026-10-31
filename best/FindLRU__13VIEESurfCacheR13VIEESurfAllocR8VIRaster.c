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

s32 Deallocate__13VIEESurfCacheR13VIEESurfAlloc(void *, void *, s32); /* extern */
s32 Erase__t5VIMap2ZiZ17VIEESurfCacheInfoi(void *, s32); /* extern */
s32 FindFree__13VIEESurfCacheR13VIEESurfAlloc(void *, s32); /* extern */
s32 *Key__Ct5VIMap2ZiZ17VIEESurfCacheInfoi(void *, s32); /* extern */
s32 RemoveFromLRU__13VIEESurfCachei(void *, s32);   /* extern */
void *Surface__8VIRasteri(s32, s32);                /* extern */

s32 FindLRU__13VIEESurfCacheR13VIEESurfAllocR8VIRaster(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_16;
    s32 temp_6;
    s32 var_2;
    void *temp_18;
    void *temp_3;

loop_11:
    var_2 = FindFree__13VIEESurfCacheR13VIEESurfAlloc(arg0, arg1);
    if (var_2 != 0) {
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return var_2;
    }
    temp_6 = M2C_FIELD(arg0, s32 *, 8);
    var_2 = -1;
    if (temp_6 != -1) {
        temp_18 = arg0 + 0x38;
        temp_3 = M2C_FIELD(temp_18, s32 *, 8) + (temp_6 * 0x68) + 0x14;
        if (M2C_FIELD(temp_3, s32 *, 8) != 0) {
            var_2 = -1;
            if (Deallocate__13VIEESurfCacheR13VIEESurfAlloc(arg0, temp_3, temp_6) >= 0) {
                goto block_6;
            }
            /* Duplicate return node #12. Try simplifying control flow for better match */
            return var_2;
        }
block_6:
        if ((Deallocate__13VIEESurfCacheR13VIEESurfAlloc(arg0, M2C_FIELD(temp_18, s32 *, 8) + (M2C_FIELD(arg0, s32 *, 8) * 0x68) + 0x24, M2C_FIELD(arg0, s32 *, 8)) < 0) || (temp_16 = M2C_FIELD(arg0, s32 *, 8), (RemoveFromLRU__13VIEESurfCachei(arg0, temp_16) < 0)) || (M2C_FIELD(Surface__8VIRasteri(arg2, *Key__Ct5VIMap2ZiZ17VIEESurfCacheInfoi(temp_18, temp_16)), s32 *, 0x18) = -1, (Erase__t5VIMap2ZiZ17VIEESurfCacheInfoi(temp_18, temp_16) < 0))) {
            return -1;
        }
        goto loop_11;
    }
    return var_2;
}
