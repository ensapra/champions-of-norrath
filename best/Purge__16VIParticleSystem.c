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
s32 RemHead__7VILList(void *);                      /* extern */

void Purge__16VIParticleSystem(void *arg0) {
    M2C_UNK *var_16;
    s32 temp_2;
    void *var_17;

    var_16 = M2C_FIELD(arg0, s32 **, 0x34);
    if (*var_16 != 0) {
        var_17 = var_16 + 0xA0;
        do {
loop_3:
            temp_2 = RemHead__7VILList(var_17);
            if (temp_2 != 0) {
                AddTail__7VILListP7VILNode(M2C_FIELD(var_16, s32 *, 0x50) + 0x40, temp_2);
                goto loop_3;
            }
            M2C_FIELD(var_16, s32 *, 0xAC) = 0;
            var_16 = M2C_FIELD(var_16, M2C_UNK **, 0);
            var_17 = var_16 + 0xA0;
        } while (*var_16 != 0);
    }
}
