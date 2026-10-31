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

M2C_UNK __Q212RealmService19RealmGatewayAPICorePCcsPQ212RealmService15RealmGatewayAPI(s32, s32, s16, void *); /* extern */
s32 __builtin_new(M2C_UNK);                         /* extern */
extern M2C_UNK D_01214760;

void __Q212RealmService15RealmGatewayAPIUiPCcs(void *arg0, s32 arg1, s32 arg2, s16 arg3) {
    s32 temp_2;

    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_01214760;
    temp_2 = __builtin_new(0x90);
    if (temp_2 != 0) {
        __Q212RealmService19RealmGatewayAPICorePCcsPQ212RealmService15RealmGatewayAPI(temp_2, arg2, arg3, arg0);
    }
    M2C_FIELD(arg0, s32 *, 0) = temp_2;
}
