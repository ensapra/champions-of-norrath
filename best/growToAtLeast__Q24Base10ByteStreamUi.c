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

M2C_UNK __builtin_vec_delete(s32);                  /* extern */
s32 __builtin_vec_new(s64, s64);                    /* extern */
M2C_UNK memcpy(s32, s32, s32);                      /* extern */

void growToAtLeast__Q24Base10ByteStreamUi(void *arg0, u32 arg1) {
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_2_4;
    s32 temp_4;
    s64 temp_5;
    u32 temp_2;
    u64 temp_18;

    temp_2 = M2C_FIELD(arg0, u32 *, 0);
    temp_5 = (temp_2 * 2) + arg1;
    if (temp_2 < arg1) {
        temp_18 = temp_5 << 0x20;
        M2C_FIELD(arg0, u32 *, 0) = (u32) temp_5;
        if ((u64) M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), u64 *, 8) < (u64) (temp_18 >> 0x20)) {
            temp_2_2 = __builtin_vec_new(temp_5, temp_5);
            temp_2_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0);
            temp_4 = temp_2_2;
            if (temp_2_3 != 0) {
                memcpy(temp_4, temp_2_3, M2C_FIELD(arg0, s32 *, 0x10));
                temp_2_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0);
                if (temp_2_4 != 0) {
                    __builtin_vec_delete(temp_2_4);
                }
            }
            M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0) = temp_2_2;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), u64 *, 8) = (u64) (temp_18 >> 0x20);
        }
    }
}
