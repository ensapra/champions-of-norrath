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

M2C_UNK AddTail__7VILListP7VILNode(s32, s32);       /* extern */
s32 RemHead__7VILList(s32);                         /* extern */

void Purge__17VIParticleEmitter(void *arg0) {
    s32 temp_2;

loop_3:
    temp_2 = RemHead__7VILList(arg0 + 0xA0);
    if (temp_2 != 0) {
        AddTail__7VILListP7VILNode(M2C_FIELD(arg0, s32 *, 0x50) + 0x40, temp_2);
        goto loop_3;
    }
    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
}
