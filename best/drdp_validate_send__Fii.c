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

M2C_UNK _uassert(M2C_UNK *, M2C_UNK *, M2C_UNK);    /* extern */
extern M2C_UNK D_011CADF0;
extern M2C_UNK D_011CB2D0;
extern M2C_UNK D_011CB2F8;
extern M2C_UNK D_011CB320;
extern M2C_UNK D_011CB348;
extern M2C_UNK D_011CB380;
extern M2C_UNK D_011CB3B8;

void drdp_validate_send__Fii(s32 arg0, u32 arg1) {
    s32 var_2;

    if (arg1 >= 0x100U) {
        _uassert(&D_011CB2D0, &D_011CADF0, 0xE34);
    }
    if (arg1 != 0xFA) {
        if ((s32) arg1 < 0xFB) {
            var_2 = arg0 < 0x515;
            if (arg1 != 0xF9) {
                goto block_18;
            }
            goto block_9;
        }
        if (arg1 != 0xFB) {
            var_2 = arg0 < 0x515;
            if (arg1 != 0xFC) {
block_18:
                if (var_2 == 0) {
                    _uassert(&D_011CB3B8, &D_011CADF0, 0xE42);
                }
            } else if (var_2 == 0) {
                _uassert(&D_011CB320, &D_011CADF0, 0xE3C);
            }
        } else {
block_9:
            if (arg0 > 0x80000) {
                _uassert(&D_011CB2F8, &D_011CADF0, 0xE39);
            }
        }
    } else if (&D_011CB348 != NULL) {
        _uassert(&D_011CB380, &D_011CADF0, 0xE3F);
    }
}
