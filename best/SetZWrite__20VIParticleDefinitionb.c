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

s32 Material__8VIRasteri(s32, s32);                 /* extern */
M2C_UNK SetZWrite__10VIMateriali(s32, s32);         /* extern */

void SetZWrite__20VIParticleDefinitionb(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x2F0) = arg1;
    SetZWrite__10VIMateriali(Material__8VIRasteri(M2C_FIELD(arg0, s32 *, 0x304), M2C_FIELD(arg0, s32 *, 0x308)), M2C_FIELD(arg0, s32 *, 0x2F0) != 0);
}
