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

M2C_UNK ___9Encryptor(void *, M2C_UNK);             /* extern */
M2C_UNK ___Q210GenericAPI14GenericAPICore(void *, M2C_UNK); /* extern */
M2C_UNK __builtin_delete(void *);                   /* extern */
M2C_UNK __wrap_free(void *);                        /* extern */
extern M2C_UNK D_011F290C;
extern M2C_UNK D_01213F90;

void ___Q212RealmService19RealmGatewayAPICore(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 temp_2_2;
    void **temp_3;
    void *temp_4;

    M2C_FIELD(arg0, M2C_UNK **, 0x64) = &D_01213F90;
    temp_4 = M2C_FIELD(arg0, s32 *, 0x84) - 0x10;
    temp_2 = M2C_FIELD(temp_4, s32 *, 8) - 1;
    M2C_FIELD(temp_4, s32 *, 8) = temp_2;
    if (temp_2 == 0) {
        temp_2_2 = M2C_FIELD(temp_4, s32 *, 4);
        if ((u32) (temp_2_2 + 0x10) >= 0x81U) {
            __wrap_free(temp_4);
        } else {
            temp_3 = &D_011F290C + (((u32) (temp_2_2 + 0x17) >> 3) * 4);
            M2C_FIELD(temp_4, void **, 0) = (void *) *temp_3;
            *temp_3 = temp_4;
        }
    }
    ___9Encryptor(arg0 + 0x74, 2);
    ___Q210GenericAPI14GenericAPICore(arg0, 0);
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
