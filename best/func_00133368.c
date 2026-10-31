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

M2C_UNK func_0010A5E8(void *, M2C_UNK);             /* extern */
M2C_UNK func_001331B8();                            /* extern */
M2C_UNK func_001A42B8(void *, void *);              /* extern */
extern M2C_UNK Normalize__7VIQuatD;
extern M2C_UNK runStats__Fii;

void func_00133368(void *arg2) {
    s32 temp_3;
    void *temp_16;

    temp_3 = M2C_FIELD(arg2, s32 *, 0);
    switch (temp_3) {                               /* irregular */
    case 19:
        if ((u32) ((*M2C_FIELD(arg2, u8 **, 8) + 0xE0) & 0xFF) >= 0x5FU) {
            M2C_FIELD(arg2, s32 *, 4) = 0;
            return;
        }
        return;
    case 18:
        temp_16 = &Normalize__7VIQuatD + 0x88;
        func_0010A5E8(temp_16, 0x258);
        func_001A42B8(&runStats__Fii + 0xC30, temp_16);
        func_001331B8();
        return;
    }
}
