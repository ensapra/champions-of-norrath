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

s32 func_00104CA8(M2C_UNK, M2C_UNK *);              /* extern */
M2C_UNK func_001A2850(void *, void *);              /* extern */
s32 func_001B4778(s32);                             /* extern */
s32 func_001B4900(M2C_UNK *, s32);                  /* extern */
extern M2C_UNK Friction__C20VIParticleAttributes;
extern M2C_UNK jtbl_004C006C;
extern M2C_UNK shopItemSetAttributes__FiiPcPQ24item11description;

void func_00104B60(void) {
    s32 temp_2;
    s32 temp_2_2;

    temp_2 = func_001B4778(func_00104CA8(0x9080, &Friction__C20VIParticleAttributes));
    M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0xC8C) = temp_2;
    if (temp_2 == 0) {
        func_001A2850(&jtbl_004C006C + 0x610C, &jtbl_004C006C + 0x6124);
        return;
    }
    temp_2_2 = func_001B4900(&Friction__C20VIParticleAttributes, temp_2);
    if (temp_2_2 < 0) {
        func_001A2850(&jtbl_004C006C + 0x612C, (void *) temp_2_2);
    }
}
