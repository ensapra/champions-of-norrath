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

s64 GetTime__7VITimer();                            /* extern */
u64 __udivdi3(u64, u64);                            /* extern */

u64 GetFraction__Q24Base15CStatisticTimerUi(void *arg0, s64 arg1) {
    u64 var_17;
    u64 var_2;

    var_17 = M2C_FIELD(arg0, u64 *, 0);
    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        var_17 += (GetTime__7VITimer() * 0x3E8) - M2C_FIELD(arg0, s64 *, 8);
    }
    var_2 = var_17;
    if (arg1 != 0) {
        var_2 = __udivdi3(var_17, __udivdi3(0xF4240U, (u64) (arg1 << 0x20) >> 0x20));
    }
    return var_2;
}
