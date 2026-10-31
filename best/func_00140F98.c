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

M2C_UNK func_001B08B0(void *, M2C_UNK, M2C_UNK, void *, M2C_UNK, void *, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK OnDrawSelf__16VIWndReadMessage;
extern M2C_UNK __Q212RealmService26NotifyModeratorRemovedRoomRQ34Base10ByteStream12ReadIterator;

void func_00140F98(void) {
    void *temp_7;

    temp_7 = &__Q212RealmService26NotifyModeratorRemovedRoomRQ34Base10ByteStream12ReadIterator + 0xF0;
    func_001B08B0(&OnDrawSelf__16VIWndReadMessage + 0xF8, 1, 1, temp_7, 0x1000, temp_7, 0x1000, 0, 0);
}
