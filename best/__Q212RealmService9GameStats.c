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

M2C_UNK __Q212RealmService12GameStatsImp(s32);      /* extern */
s32 __builtin_new(M2C_UNK);                         /* extern */
extern M2C_UNK D_011FF310;

void __Q212RealmService9GameStats(void *arg0) {
    s32 temp_2;

    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_011FF310;
    temp_2 = __builtin_new(0x10);
    if (temp_2 != 0) {
        __Q212RealmService12GameStatsImp(temp_2);
    }
    M2C_FIELD(arg0, s32 *, 0) = temp_2;
}
