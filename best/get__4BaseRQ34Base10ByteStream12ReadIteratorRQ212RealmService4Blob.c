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
s32 __builtin_vec_new(u32);                         /* extern */
M2C_UNK get__CQ24Base10ByteStreamPvRQ34Base10ByteStream12ReadIteratorUl(s32, s32, void *, u32); /* extern */

void get__4BaseRQ34Base10ByteStream12ReadIteratorRQ212RealmService4Blob(void *arg0, void *arg1) {
    s32 temp_2;
    s32 temp_2_2;
    u32 temp_16;
    u32 temp_3;

    temp_2 = M2C_FIELD(arg1, s32 *, 0);
    if (temp_2 != 0) {
        __builtin_vec_delete(temp_2);
        M2C_FIELD(arg1, s32 *, 0) = 0;
        M2C_FIELD(arg1, u32 *, 4) = 0U;
    }
    get__CQ24Base10ByteStreamPvRQ34Base10ByteStream12ReadIteratorUl(M2C_FIELD(arg0, s32 *, 4), arg1 + 4, arg0, 4U);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 4);
    temp_3 = M2C_FIELD(arg1, u32 *, 4);
    if (temp_3 != 0) {
        temp_2_2 = __builtin_vec_new(temp_3);
        M2C_FIELD(arg1, s32 *, 0) = temp_2_2;
        temp_16 = M2C_FIELD(arg1, u32 *, 4);
        get__CQ24Base10ByteStreamPvRQ34Base10ByteStream12ReadIteratorUl(M2C_FIELD(arg0, s32 *, 4), temp_2_2, arg0, temp_16);
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + ((s64) ((s64) temp_16 << 0x20) >> 0x20));
    }
}
