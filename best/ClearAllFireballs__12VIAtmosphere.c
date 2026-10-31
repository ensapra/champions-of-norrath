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

M2C_UNK AddTail__7VILListP7VILNode(void *, s32);    /* extern */
M2C_UNK Destroy__17VIParticleEmitter(s32);          /* extern */
M2C_UNK Init__7VILList(void *);                     /* extern */
s32 RemHead__7VILList(void *);                      /* extern */

void ClearAllFireballs__12VIAtmosphere(void *arg0) {
    s32 temp_2;
    s32 temp_5;
    s32 var_16;
    void *temp_18;
    void *temp_18_2;

    if ((M2C_FIELD(arg0, s32 *, 0x4CC) != 0) && (M2C_FIELD(arg0, s32 *, 0x116C) != 0)) {
        temp_18 = arg0 + 0x1160;
        if (M2C_FIELD(arg0, s32 *, 0x117C) != 0) {
loop_6:
            temp_2 = RemHead__7VILList(temp_18);
            if (temp_2 != 0) {
                Destroy__17VIParticleEmitter(temp_2 + 0x40);
                Destroy__17VIParticleEmitter(temp_2 + 0x420);
                goto loop_6;
            }
            M2C_FIELD(arg0, s32 *, 0x116C) = 0;
            temp_18_2 = arg0 + 0x1170;
            var_16 = 0;
            Init__7VILList(temp_18);
            Init__7VILList(temp_18_2);
loop_8:
            temp_5 = var_16 << 0xB;
            var_16 += 1;
            AddTail__7VILListP7VILNode(temp_18_2, M2C_FIELD(arg0, s32 *, 0x117C) + temp_5);
            if (var_16 < 0x20) {
                goto loop_8;
            }
        }
    }
}
