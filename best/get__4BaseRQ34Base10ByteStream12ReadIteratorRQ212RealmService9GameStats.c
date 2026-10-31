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

M2C_UNK __Q212RealmService12GameStatsImp(void *);   /* extern */
void *__builtin_new(M2C_UNK);                       /* extern */
M2C_UNK get__4BaseRQ34Base10ByteStream12ReadIteratorRQ212RealmService12GameStatsImp(s32, void *); /* extern */

void get__4BaseRQ34Base10ByteStream12ReadIteratorRQ212RealmService9GameStats(s32 arg0, void **arg1) {
    void *temp_2;
    void *temp_2_2;
    void *temp_6;

    temp_6 = *arg1;
    if (temp_6 != NULL) {
        temp_2 = M2C_FIELD(temp_6, void **, 0xC);
        M2C_FIELD((temp_2 + 8), M2C_UNK (**)(void *, M2C_UNK, void *), 4)(temp_6 + M2C_FIELD(temp_2, s16 *, 8), 3, temp_6);
    }
    temp_2_2 = __builtin_new(0x10);
    if (temp_2_2 != NULL) {
        __Q212RealmService12GameStatsImp(temp_2_2);
    }
    *arg1 = temp_2_2;
    get__4BaseRQ34Base10ByteStream12ReadIteratorRQ212RealmService12GameStatsImp(arg0, temp_2_2);
}
