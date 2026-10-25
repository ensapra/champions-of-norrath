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

s32 RemoveIntcHandler_2(M2C_UNK, s32);              /* extern */
M2C_UNK func_002D5BC0(M2C_UNK);                     /* extern */
s32 func_002DD640();                                /* extern */
M2C_UNK func_002DD698();                            /* extern */
M2C_UNK func_002DDF10(M2C_UNK);                     /* extern */
M2C_UNK func_002DDF20(M2C_UNK);                     /* extern */
extern M2C_UNK D_004459A8;

s32 func_002DE098(void) {
    s32 temp_17;

    if (M2C_FIELD(&D_004459A8, s32 *, 8) < 0) {
        return 0x80008001;
    }
    if (M2C_FIELD(&D_004459A8, s32 *, 0x10) != 0) {
        return 0x80000010;
    }
    temp_17 = func_002DD640();
    if (RemoveIntcHandler_2(0xB, M2C_FIELD(&D_004459A8, s32 *, 8)) == 0) {
        func_002D5BC0(0xB);
        func_002DDF20(0xC00);
        func_002DDF10(0);
    }
    M2C_FIELD(&D_004459A8, s64 *, 0) = 0;
    M2C_FIELD(&D_004459A8, s32 *, 8) = -1;
    if (temp_17 != 0) {
        func_002DD698();
    }
    return 0;
}
