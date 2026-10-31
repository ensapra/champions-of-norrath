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

M2C_UNK BufferFlush__6VIFile();                     /* extern */
s32 IsAsynchComplete__6VIFile(void *);              /* extern */
M2C_UNK __builtin_vec_delete(s32);                  /* extern */
M2C_UNK printf(M2C_UNK *);                          /* extern */
extern M2C_UNK D_011D5548;

s32 Close__6VIFile(void *arg0) {
    s32 temp_4;
    s32 temp_4_2;

    if (M2C_FIELD(arg0, s32 *, 0) >= 0) {
        BufferFlush__6VIFile();
        printf(&D_011D5548);
        if (M2C_FIELD(arg0, s32 *, 0) & 0x40) {
            do {

            } while (IsAsynchComplete__6VIFile(arg0) == 0);
        }
        M2C_FIELD(arg0, s32 *, 0) = -1;
    }
    temp_4 = M2C_FIELD(arg0, s32 *, 0xB8);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s64 *, 0x10) = 0;
    M2C_FIELD(arg0, s64 *, 0x18) = 0;
    if (temp_4 != 0) {
        __builtin_vec_delete(temp_4);
        M2C_FIELD(arg0, s32 *, 0xB8) = 0;
        M2C_FIELD(arg0, s32 *, 0xBC) = 0;
    }
    temp_4_2 = M2C_FIELD(arg0, s32 *, 0x38);
    M2C_FIELD(arg0, s64 *, 0x20) = 0;
    M2C_FIELD(arg0, s64 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    if (temp_4_2 != 0) {
        __builtin_vec_delete(temp_4_2);
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s64 *, 0x40) = 0;
    return 0;
}
