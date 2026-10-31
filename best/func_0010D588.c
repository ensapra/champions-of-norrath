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

M2C_UNK func_00105090(s32, M2C_UNK);                /* extern */
extern M2C_UNK runStats__Fii;
extern M2C_UNK xmlListWalk;

void func_0010D588(void) {
    s32 *var_16;
    s32 var_17;
    s32 var_4;

    var_17 = 0;
    if ((M2C_FIELD(&runStats__Fii, s32 *, 0xD88) + 1) > 0) {
        var_16 = &xmlListWalk + 0x60;
        var_4 = M2C_FIELD(&xmlListWalk, s32 *, 0x60);
loop_2:
        var_16 += 4;
        var_17 += 1;
        func_00105090(var_4, 0);
        if (var_17 < (M2C_FIELD(&runStats__Fii, s32 *, 0xD88) + 1)) {
            var_4 = *var_16;
            goto loop_2;
        }
    }
}
