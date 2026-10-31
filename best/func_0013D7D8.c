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

M2C_UNK func_0013FFF8();                            /* extern */
extern M2C_UNK SetLayerMagFilter__10VIMaterialii;

void func_0013D7D8(void) {
    func_0013FFF8();
    M2C_FIELD(&SetLayerMagFilter__10VIMaterialii, s32 *, 0x24) = 3;
    M2C_FIELD(&SetLayerMagFilter__10VIMaterialii, s32 *, 0x14) = 3;
}
