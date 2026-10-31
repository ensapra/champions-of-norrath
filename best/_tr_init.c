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

M2C_UNK init_block(M2C_UNK *, M2C_UNK *, M2C_UNK *, s32, s32, s32); /* extern */
extern M2C_UNK D_0118E5C0;
extern M2C_UNK D_0118E5D8;
extern M2C_UNK D_0118E5F0;

void _tr_init(void *arg0) {
    s32 temp_10;
    s32 temp_8;
    s32 temp_9;

    temp_8 = arg0 + 0xA4;
    temp_9 = arg0 + 0x998;
    temp_10 = arg0 + 0xA8C;
    M2C_FIELD(arg0, s32 *, 0xB28) = temp_8;
    M2C_FIELD(arg0, s32 *, 0x16CC) = 8;
    M2C_FIELD(arg0, M2C_UNK **, 0xB30) = &D_0118E5C0;
    M2C_FIELD(arg0, s32 *, 0xB34) = temp_9;
    M2C_FIELD(arg0, M2C_UNK **, 0xB3C) = &D_0118E5D8;
    M2C_FIELD(arg0, s32 *, 0xB40) = temp_10;
    M2C_FIELD(arg0, M2C_UNK **, 0xB48) = &D_0118E5F0;
    M2C_FIELD(arg0, s16 *, 0x16D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x16D4) = 0;
    init_block(&D_0118E5C0, &D_0118E5D8, &D_0118E5F0, temp_8, temp_9, temp_10);
}
