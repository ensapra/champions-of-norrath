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

M2C_UNK __builtin_delete(void *);                   /* extern */
M2C_UNK __wrap_free(void *);                        /* extern */
extern M2C_UNK D_011F290C;
extern M2C_UNK D_011FDDA8;

void ___Q212RealmService13GameAttrsNode(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 temp_2_3;
    s32 temp_3;
    s32 temp_3_2;
    void **temp_2_2;
    void **temp_2_4;
    void *temp_4;
    void *temp_4_2;

    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &D_011FDDA8;
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
    temp_4_2 = M2C_FIELD(arg0, s32 *, 4) - 0x10;
    temp_2_3 = M2C_FIELD(temp_4_2, s32 *, 8) - 1;
    M2C_FIELD(temp_4_2, s32 *, 8) = temp_2_3;
    if (temp_2_3 == 0) {
        temp_3_2 = M2C_FIELD(temp_4_2, s32 *, 4) * 2;
        if ((u32) (temp_3_2 + 0x10) < 0x81U) {
            temp_2_4 = &D_011F290C + (((u32) (temp_3_2 + 0x17) >> 3) * 4);
            M2C_FIELD(temp_4_2, void **, 0) = (void *) *temp_2_4;
            *temp_2_4 = temp_4_2;
        } else {
            __wrap_free(temp_4_2);
        }
    }
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
