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
s32 __builtin_vec_new(s32);                         /* extern */
M2C_UNK memcpy(s32, s32, s32);                      /* extern */

void *__as__Q212RealmService4BlobRCQ212RealmService4Blob(void *arg0, void *arg1) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;

    if (arg0 != arg1) {
        temp_2 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_2 != 0) {
            __builtin_vec_delete(temp_2);
            M2C_FIELD(arg0, s32 *, 0) = 0;
        }
        temp_2_2 = M2C_FIELD(arg1, s32 *, 4);
        M2C_FIELD(arg0, s32 *, 4) = temp_2_2;
        if (temp_2_2 != 0) {
            temp_2_3 = __builtin_vec_new(temp_2_2);
            M2C_FIELD(arg0, s32 *, 0) = temp_2_3;
            memcpy(temp_2_3, M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
        }
    }
    return arg0;
}
