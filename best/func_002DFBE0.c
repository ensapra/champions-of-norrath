/* machine draft (m2c) for ee-gcc-2.96 -O2 -G8, tried by autopilot */
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

M2C_UNK Copy_10(M2C_UNK, M2C_UNK *, M2C_UNK);       /* extern */
M2C_UNK FlushCache_2(M2C_UNK);                      /* extern */
s32 GetEntryAddress_8(s32);                         /* extern */
M2C_UNK SetSyscall_12(s32, s32);                    /* extern */
extern M2C_UNK D_004459D0;
extern s32 D_00445D48;
extern M2C_UNK D_00445D50;

void func_002DFBE0(void) {
    s32 *var_17;
    s32 temp_4;
    s32 var_4;
    u32 var_18;

    var_18 = 3;
    var_17 = &D_00445D50 + 0x18;
    SetSyscall_12(M2C_FIELD(&D_00445D50, s32 *, 0), M2C_FIELD(&D_00445D50, s32 *, 4));
    Copy_10(0x80075000, &D_004459D0, 0x330);
    FlushCache_2(0);
    FlushCache_2(2);
    SetSyscall_12(M2C_FIELD(&D_00445D50, s32 *, 8), M2C_FIELD(&D_00445D50, s32 *, 0xC));
    SetSyscall_12(M2C_FIELD(&D_00445D50, s32 *, 0x10), M2C_FIELD(&D_00445D50, s32 *, 0x14));
    var_4 = M2C_FIELD(&D_00445D50, s32 *, 0x18);
loop_1:
    var_18 += 1;
    temp_4 = *var_17;
    var_17 += 8;
    SetSyscall_12(temp_4, GetEntryAddress_8(var_4));
    if (var_18 < 8U) {
        var_4 = *var_17;
        goto loop_1;
    }
    D_00445D48 = GetEntryAddress_8(3);
}
