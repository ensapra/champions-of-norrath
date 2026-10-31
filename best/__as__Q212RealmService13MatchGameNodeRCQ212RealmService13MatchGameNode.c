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

M2C_UNK __wrap_free(void *);                        /* extern */
s32 clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(void *); /* extern */
extern M2C_UNK D_011F290C;

void *__as__Q212RealmService13MatchGameNodeRCQ212RealmService13MatchGameNode(void *arg0, void *arg1) {
    s32 temp_2;
    s32 temp_3;
    s32 var_3;
    void **temp_2_2;
    void *temp_4;
    void *temp_4_2;

    if (arg0 != arg1) {
        M2C_FIELD(arg0, u16 *, 0) = (u16) M2C_FIELD(arg1, u16 *, 0);
        M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
        if ((arg1 + 8) != (arg0 + 8)) {
            temp_4 = M2C_FIELD(arg0, s32 *, 8) - 0x10;
            temp_2 = M2C_FIELD(temp_4, s32 *, 8) - 1;
            M2C_FIELD(temp_4, s32 *, 8) = temp_2;
            if (temp_2 == 0) {
                temp_3 = M2C_FIELD(temp_4, s32 *, 4) * 2;
                if ((u32) (temp_3 + 0x10) >= 0x81U) {
                    __wrap_free(temp_4);
                } else {
                    temp_2_2 = &D_011F290C + (((u32) (temp_3 + 0x17) >> 3) * 4);
                    M2C_FIELD(temp_4, void **, 0) = (void *) *temp_2_2;
                    *temp_2_2 = temp_4;
                }
            }
            var_3 = M2C_FIELD(arg1, s32 *, 8);
            temp_4_2 = var_3 - 0x10;
            if (M2C_FIELD(temp_4_2, s32 *, 0xC) == 0) {
                M2C_FIELD(temp_4_2, s32 *, 8) = (s32) (M2C_FIELD(temp_4_2, s32 *, 8) + 1);
            } else {
                var_3 = clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(temp_4_2);
            }
            M2C_FIELD(arg0, s32 *, 8) = var_3;
        }
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    }
    return arg0;
}
