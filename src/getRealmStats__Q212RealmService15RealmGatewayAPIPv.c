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

M2C_UNK __Q212RealmService16ReqGetRealmStatsUi(s32, s32); /* extern */
M2C_UNK __Q212RealmService16ResGetRealmStatsPv(s32, s32); /* extern */
s32 __builtin_new(M2C_UNK);                         /* extern */
M2C_UNK submitRequest__Q210GenericAPI14GenericAPICorePQ210GenericAPI14GenericRequestPQ210GenericAPI15GenericResponse(s32, s32, s32); /* extern */

void getRealmStats__Q212RealmService15RealmGatewayAPIPv(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 temp_2_2;

    temp_2 = __builtin_new(0x20);
    if (temp_2 != 0) {
        __Q212RealmService16ReqGetRealmStatsUi(temp_2, M2C_FIELD(arg0, s32 *, 4));
    }
    temp_2_2 = __builtin_new(0x40);
    if (temp_2_2 != 0) {
        __Q212RealmService16ResGetRealmStatsPv(temp_2_2, arg1);
    }
    submitRequest__Q210GenericAPI14GenericAPICorePQ210GenericAPI14GenericRequestPQ210GenericAPI15GenericResponse(M2C_FIELD(arg0, s32 *, 0), temp_2, temp_2_2);
}
