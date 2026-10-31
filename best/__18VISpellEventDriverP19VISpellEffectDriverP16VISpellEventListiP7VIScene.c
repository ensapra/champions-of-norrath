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

M2C_UNK __7VILList(s32);                            /* extern */
M2C_UNK __7VILNode();                               /* extern */

void __18VISpellEventDriverP19VISpellEffectDriverP16VISpellEventListiP7VIScene(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    __7VILNode();
    __7VILList(arg0 + 0x4C);
    __7VILList(arg0 + 0x58);
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 0x48) = arg2;
    M2C_FIELD(arg0, s32 *, 0x14) = arg4;
    M2C_FIELD(arg0, s32 *, 0x18) = arg3;
    M2C_FIELD(arg0, s32 *, 0x44) = -1;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = -1;
    M2C_FIELD(arg0, s32 *, 0x38) = -1;
    M2C_FIELD(arg0, s32 *, 0x3C) = -1;
    M2C_FIELD(arg0, s32 *, 0x40) = -1;
}
