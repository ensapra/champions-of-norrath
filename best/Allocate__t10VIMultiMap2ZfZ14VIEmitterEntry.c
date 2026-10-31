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

s32 DestroyPool__t10VIMultiMap2ZfZ14VIEmitterEntry(void *); /* extern */
s32 LinkFreeChain__t10VIMultiMap2ZfZ14VIEmitterEntryi(void *, s32, M2C_UNK); /* extern */
M2C_UNK __10VIMatrix44RC10VIMatrix44(void *, void *, void *, void *, void *, void *); /* extern */
M2C_UNK __builtin_vec_delete(void *);               /* extern */
void *__builtin_vec_new(s32);                       /* extern */

s32 Allocate__t10VIMultiMap2ZfZ14VIEmitterEntry(void *arg0) {
    s32 temp_3;
    s32 temp_5;
    s32 var_17;
    s32 var_19;
    s32 var_2;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_3_2;
    void *temp_4;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    temp_3 = M2C_FIELD(arg0, s32 *, 4);
    var_2 = 0;
    if (temp_3 != 0) {
        if (M2C_FIELD(arg0, void **, 8) == NULL) {
            temp_2 = __builtin_vec_new(temp_3 * 0x70);
            var_2 = -1;
            M2C_FIELD(arg0, void **, 8) = temp_2;
            if (temp_2 != NULL) {
                M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
                goto block_14;
            }
            /* Duplicate return node #18. Try simplifying control flow for better match */
            return var_2;
        }
        temp_2_2 = __builtin_vec_new(temp_3 * 0x70);
        var_2 = -1;
        if (temp_2_2 != NULL) {
            var_19 = 0;
            if (M2C_FIELD(arg0, s32 *, 0) > 0) {
                var_17 = 0;
                do {
                    temp_8 = temp_2_2 + var_17;
                    temp_9 = temp_8 + 0x20;
                    if (temp_8 != NULL) {
                        temp_6 = M2C_FIELD(arg0, void **, 8) + var_17;
                        temp_7 = temp_6 + 0x20;
                        M2C_FIELD(temp_8, s32 *, 0) = (s32) M2C_FIELD(temp_6, s32 *, 0);
                        M2C_FIELD(temp_8, s32 *, 4) = (s32) M2C_FIELD(temp_6, s32 *, 4);
                        M2C_FIELD(temp_8, s32 *, 8) = (s32) M2C_FIELD(temp_6, s32 *, 8);
                        M2C_FIELD(temp_8, s32 *, 0xC) = (s32) M2C_FIELD(temp_6, s32 *, 0xC);
                        M2C_FIELD(temp_8, f32 *, 0x10) = (f32) M2C_FIELD(temp_6, f32 *, 0x10);
                        M2C_FIELD(temp_8, s32 *, 0x20) = (s32) M2C_FIELD(temp_6, s32 *, 0x20);
                        M2C_FIELD(temp_9, s32 *, 4) = (s32) M2C_FIELD(temp_7, s32 *, 4);
                        __10VIMatrix44RC10VIMatrix44(temp_8 + 0x30, temp_6 + 0x30, temp_6, temp_7, temp_8, temp_9);
                    }
                    var_19 += 1;
                    var_17 += 0x70;
                } while (var_19 < M2C_FIELD(arg0, s32 *, 0));
            }
            var_2 = -1;
            if (DestroyPool__t10VIMultiMap2ZfZ14VIEmitterEntry(arg0) >= 0) {
                temp_4 = M2C_FIELD(arg0, void **, 8);
                if (temp_4 != NULL) {
                    __builtin_vec_delete(temp_4);
                }
                M2C_FIELD(arg0, void **, 8) = temp_2_2;
block_14:
                temp_3_2 = M2C_FIELD(arg0, void **, 8);
                M2C_FIELD(temp_3_2, s32 *, 8) = 0;
                M2C_FIELD(temp_3_2, s32 *, 0) = 0;
                temp_2_3 = M2C_FIELD(arg0, void **, 8);
                M2C_FIELD(temp_2_3, s32 *, 4) = 0;
                M2C_FIELD(temp_2_3, s32 *, 0xC) = 0;
                temp_5 = M2C_FIELD(arg0, s32 *, 0);
                if (LinkFreeChain__t10VIMultiMap2ZfZ14VIEmitterEntryi(arg0, (temp_5 < 1) ? 1 : temp_5, 1) >= 0) {
                    return 0;
                }
                var_2 = -1;
                /* Duplicate return node #18. Try simplifying control flow for better match */
                return var_2;
            }
            /* Duplicate return node #18. Try simplifying control flow for better match */
            return var_2;
        }
        /* Duplicate return node #18. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
