/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G8, tried by autopilot */
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

M2C_UNK SignalSema_2(s32, M2C_UNK);                 /* extern */
M2C_UNK WaitSema_2(s32);                            /* extern */
M2C_UNK func_002D8998();                            /* extern */
extern s32 D_00444A00;
extern M2C_UNK D_008E19C0;

M2C_UNK *func_002D89F8(void) {
    M2C_UNK *var_16;
    s32 var_2;
    void *temp_3;

    func_002D8998();
    WaitSema_2(D_00444A00);
    var_16 = &D_008E19C0;
    temp_3 = &D_008E19C0 + 0x200;
    if ((u32) &D_008E19C0 < (u32) temp_3) {
        var_2 = M2C_FIELD(&D_008E19C0, s32 *, 4);
loop_2:
        if (var_2 != 0) {
            var_16 += 0x10;
            if ((u32) var_16 < (u32) temp_3) {
                var_2 = M2C_FIELD(var_16, s32 *, 4);
                goto loop_2;
            }
            goto block_9;
        }
        M2C_FIELD(var_16, s32 *, 4) = 0x10000000;
        SignalSema_2(D_00444A00, 0x10000000);
        return var_16;
    }
block_9:
    SignalSema_2(D_00444A00, 0x10000000);
    return NULL;
}
