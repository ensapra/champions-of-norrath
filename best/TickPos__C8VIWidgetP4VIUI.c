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

s32 GetStringWidth__6VIFontP8VIRasterP12VIDictionaryPCUs(void *, s32, s32, void *, void *); /* extern */

void *TickPos__C8VIWidgetP4VIUI(void *arg0, void *arg1, void *arg2) {
    s32 sp0;
    s32 sp4;
    s32 sp10;
    s32 sp14;
    s32 sp20;
    s32 sp24;
    s32 temp_2;
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_4;
    s32 temp_7;
    void *temp_8;

    sp4 = 6;
    temp_7 = M2C_FIELD(arg1, s32 *, 0);
    temp_8 = arg1 + 0x44;
    sp0 = -0x16;
    if (temp_7 != 1) {
        if (temp_7 <= 0) {
            M2C_FIELD(arg0, s32 *, 0) = 0;
            goto block_14;
        }
        if (temp_7 >= 5) {
            M2C_FIELD(arg0, s32 *, 0) = 0;
block_14:
            M2C_FIELD(arg0, s32 *, 4) = 0;
        } else {
            temp_2 = M2C_FIELD(arg1, s32 *, 0x50);
            if (temp_2 < 0) {
                temp_4 = M2C_FIELD(arg1, s32 *, 0x48);
                temp_3 = (M2C_FIELD(arg1, s32 *, 0x44) + M2C_FIELD(arg1, s32 *, 0x50)) - GetStringWidth__6VIFontP8VIRasterP12VIDictionaryPCUs(arg2 + 0x38, M2C_FIELD(arg2, s32 *, 0x48), M2C_FIELD(arg2, s32 *, 0x50), arg1 + 4, temp_8);
                sp10 = temp_3;
                sp14 = temp_4;
                M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_3 + sp0);
                M2C_FIELD(arg0, s32 *, 4) = (s32) (temp_4 + sp4);
            } else {
                temp_3_2 = M2C_FIELD(arg1, s32 *, 0x48);
                sp20 = temp_2;
                sp24 = temp_3_2;
                M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_2 + sp0);
                M2C_FIELD(arg0, s32 *, 4) = (s32) (temp_3_2 + sp4);
            }
        }
    } else {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(temp_8, s32 *, 4) + 6);
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg1, s32 *, 0x44) - 0x16);
    }
    return arg0;
}
