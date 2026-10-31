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

extern M2C_UNK xmlParseElementDecl;

void func_00174AA8(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_4;

    temp_4 = *(&xmlParseElementDecl + 0x3BC + (arg0 * 0x28));
    M2C_FIELD(temp_4, s64 *, 0x20) = (s64) (0xFFFFFF & arg1);
    M2C_FIELD(temp_4, s64 *, 0) = (s64) ((M2C_FIELD(temp_4, s64 *, 0) & ~0x80) | ((arg2 & 1) << 7));
}
