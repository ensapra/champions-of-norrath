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

M2C_UNK __t6VIList1ZP10VIFlatFile(void *);          /* extern */
extern M2C_UNK D_011F3A78;

void __19VIFlatFileDirectory(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = -1;
    M2C_FIELD(arg0, s32 *, 0xC) = 2;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &D_011F3A78;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    __t6VIList1ZP10VIFlatFile(arg0 + 0x18);
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}
