/* machine draft (m2c) for ee-gcc-2.96 -Os -G8, tried by autopilot */
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

M2C_UNK func_0015EB80(void *, s32, s16 *, M2C_UNK, M2C_UNK, M2C_UNK, s64, s64, f32, f32); /* extern */
extern s32 D_00484468;
extern s32 D_004844C4;
extern void *D_004844C8;

void func_0016D978(s16 *arg0, s32 arg1, s32 arg2, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3) {
    void *sp0;
    void *sp4;
    void *sp8;
    s16 *sp10;
    s32 sp14;
    s32 sp18;
    s64 temp_10;
    s64 temp_3;
    s64 temp_6;
    void *temp_12;
    void *temp_23;
    void *temp_4;
    void *temp_8;

    sp10 = arg0;
    sp14 = arg1;
    sp18 = arg2;
    if ((D_00484468 - ((s32) (D_004844C8 - D_004844C4) >> 3)) >= 0xBB8) {
        temp_23 = D_004844C8 + 0xD0;
        temp_3 = 0xA000 << 0x14;
        temp_10 = (M2C_FIELD(arg0, s16 *, 2) << 0x14) | (*sp10 * 0x10);
        temp_8 = D_004844C8 + 0x10;
        temp_12 = D_004844C8 + 0x50;
        M2C_FIELD(D_004844C8, s64 *, 0x10) = (s64) ((0x10000000 << 0x20) | 0x8000);
        temp_6 = ((s32) (((s32) (temp_23 - D_004844C8) >> 3) - 2) >> 1) | 0x10000000;
        M2C_FIELD(temp_8, s64 *, 8) = 0xE;
        M2C_FIELD((D_004844C8 + 0x20), s64 *, 8) = 0x3F;
        M2C_FIELD(D_004844C8, s64 *, 0x20) = 0;
        M2C_FIELD((D_004844C8 + 0x30), s64 *, 8) = 6;
        M2C_FIELD(D_004844C8, s64 *, 0x30) = 0;
        M2C_FIELD((D_004844C8 + 0x40), s64 *, 8) = 0x14;
        M2C_FIELD(D_004844C8, s64 *, 0x40) = 0x61;
        M2C_FIELD(temp_12, s64 *, 8) = 1;
        M2C_FIELD(D_004844C8, s64 *, 0x60) = 0x44;
        M2C_FIELD((D_004844C8 + 0x60), s64 *, 8) = 0x42;
        M2C_FIELD(D_004844C8, s64 *, 0x70) = 0x156;
        M2C_FIELD((D_004844C8 + 0x70), s64 *, 8) = 0;
        M2C_FIELD((D_004844C8 + 0x80), s64 *, 8) = 0x47;
        M2C_FIELD(D_004844C8, s64 *, 0x80) = 0x3001D;
        M2C_FIELD(D_004844C8, s64 *, 0x90) = 0x80008;
        M2C_FIELD((D_004844C8 + 0x90), s64 *, 8) = 3;
        M2C_FIELD((D_004844C8 + 0xA0), s64 *, 8) = 5;
        M2C_FIELD(D_004844C8, s64 *, 0xA0) = (s64) (0x46E40000 | (0x46E40000 << 0x10) | temp_3);
        M2C_FIELD((D_004844C8 + 0xB0), s64 *, 8) = 3;
        M2C_FIELD(D_004844C8, s64 *, 0xB0) = temp_10;
        M2C_FIELD(D_004844C8, s64 *, 0xC0) = (s64) (0x46E40000 | (0x46E40000 << 0x10) | temp_3);
        M2C_FIELD((D_004844C8 + 0xC0), s64 *, 8) = 5;
        M2C_FIELD(D_004844C8, s32 *, 8) = 0x11000000;
        M2C_FIELD(D_004844C8, s32 *, 0xC) = 0x5000000C;
        sp4 = D_004844C8;
        M2C_FIELD(D_004844C8, s32 *, 0x50) = sp18;
        sp8 = temp_8;
        M2C_FIELD(temp_12, s32 *, 4) = 0;
        M2C_FIELD(D_004844C8, s64 *, 0x10) = (s64) (((s32) (((s32) (temp_23 - temp_8) >> 3) - 2) >> 1) | M2C_FIELD(D_004844C8, s64 *, 0x10));
        sp0 = temp_23;
        M2C_FIELD(D_004844C8, s64 *, 0) = temp_6;
        if (((temp_6 >> 0x1C) & 7) == 1) {
            M2C_FIELD(D_004844C8, s64 *, 0) = (s64) ((temp_6 & 0x8FFFFFFF) | 0x60000000);
        } else {
            M2C_FIELD(D_004844C8, s64 *, 0xD0) = 0x60000000;
            M2C_FIELD(temp_23, s64 *, 8) = 0;
            sp0 = D_004844C8 + 0xE0;
            sp4 = NULL;
        }
        temp_4 = D_004844C8;
        D_004844C8 = sp0;
        func_0015EB80(temp_4, sp14, sp10, 0, 1, 0x11000000, temp_10, temp_6, (fparg0 * 32.0f) + 22528.0f, (fparg1 * 16.0f) + 29184.0f);
    }
}
