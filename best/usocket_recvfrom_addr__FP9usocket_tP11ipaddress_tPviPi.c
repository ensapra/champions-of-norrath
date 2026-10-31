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

u16 func_002E6390(u16);                             /* extern */
s32 memcmp(void *, M2C_UNK *, M2C_UNK);             /* extern */
s32 usocket_recvfrom_addr_internal__FP9usocket_tP11ipaddress_tPviPi(); /* extern */
extern M2C_UNK D_0118E958;

s32 usocket_recvfrom_addr__FP9usocket_tP11ipaddress_tPviPi(void *arg1, s32 arg2, s32 *arg4) {
    s8 sp0;
    s8 sp1;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_3;
    void *temp_2_3;

    temp_2 = usocket_recvfrom_addr_internal__FP9usocket_tP11ipaddress_tPviPi();
    if ((temp_2 == 0) && (*arg4 >= 8) && (memcmp(arg1, &D_0118E958, 4) == 0) && (M2C_FIELD(arg1, u16 *, 4) == M2C_FIELD(&D_0118E958, u16 *, 4))) {
        temp_2_2 = *arg4 - 4;
        *arg4 = temp_2_2;
        temp_2_3 = arg2 + temp_2_2;
        sp0 = M2C_FIELD(temp_2_3, s8 *, 0);
        sp1 = M2C_FIELD(temp_2_3, s8 *, 1);
        M2C_FIELD(arg1, u16 *, 4) = func_002E6390((u16) sp0);
        temp_3 = *arg4 - 4;
        *arg4 = temp_3;
        M2C_FIELD(arg1, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD((arg2 + temp_3), M2C_UNK *, 0));
    }
    return temp_2;
}
