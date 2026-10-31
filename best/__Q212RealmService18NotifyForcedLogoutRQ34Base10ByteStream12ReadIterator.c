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

M2C_UNK __Q210GenericAPI14GenericMessages(M2C_UNK); /* extern */
M2C_UNK get__CQ24Base10ByteStreamPvRQ34Base10ByteStream12ReadIteratorUl(s32, s32, void *, M2C_UNK); /* extern */
extern M2C_UNK D_0120EED0;

void __Q212RealmService18NotifyForcedLogoutRQ34Base10ByteStream12ReadIterator(void *arg0, void *arg1) {
    __Q210GenericAPI14GenericMessages(0x41);
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_0120EED0;
    get__CQ24Base10ByteStreamPvRQ34Base10ByteStream12ReadIteratorUl(M2C_FIELD(arg1, s32 *, 4), arg0 + 8, arg1, 2);
    M2C_FIELD(arg1, s32 *, 0) = (s32) (M2C_FIELD(arg1, s32 *, 0) + 2);
    M2C_FIELD(arg0, s16 *, 8) = (s16) M2C_FIELD(arg0, s16 *, 8);
}
