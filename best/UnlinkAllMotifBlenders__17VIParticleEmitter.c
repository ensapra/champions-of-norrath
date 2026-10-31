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

void *RemHead__7VILList(s32);                       /* extern */

void UnlinkAllMotifBlenders__17VIParticleEmitter(s32 arg0) {
    void *temp_2;

loop_1:
    temp_2 = RemHead__7VILList(arg0 + 0xB0);
    if (temp_2 != NULL) {
        M2C_FIELD(temp_2, s32 *, 0x10) = 0;
        goto loop_1;
    }
}
