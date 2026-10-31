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

M2C_UNK VIMovieShutdown__Fv();                      /* extern */
s32 __wrap_memalign(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK memset(M2C_UNK *, M2C_UNK, M2C_UNK);        /* extern */
M2C_UNK sceMpegInit();                              /* extern */
s32 sceSifAllocIopHeap(M2C_UNK);                    /* extern */
extern M2C_UNK D_011E9440;

s32 VIMovieStartup__Fii(void) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_2_4;
    s32 temp_2_5;

    memset(&D_011E9440, 0, 0x30);
    temp_2 = __wrap_memalign(0x40, 0x13D800);
    M2C_FIELD(&D_011E9440, s32 *, 4) = 0x13D800;
    M2C_FIELD(&D_011E9440, s32 *, 0) = temp_2;
    M2C_FIELD(&D_011E9440, s32 *, 8) = __wrap_memalign(0x40, 0x118000);
    M2C_FIELD(&D_011E9440, s32 *, 0xC) = __wrap_memalign(0x40, 0x34A00);
    temp_2_2 = __wrap_memalign(0x40, 0x30000);
    M2C_FIELD(&D_011E9440, s32 *, 0x14) = 0x30000;
    M2C_FIELD(&D_011E9440, s32 *, 0x10) = temp_2_2;
    temp_2_3 = __wrap_memalign(0x40, 0xC000);
    M2C_FIELD(&D_011E9440, s32 *, 0x1C) = 0xC000;
    M2C_FIELD(&D_011E9440, s32 *, 0x18) = temp_2_3;
    temp_2_4 = sceSifAllocIopHeap(0x6000);
    M2C_FIELD(&D_011E9440, s32 *, 0x24) = 0x6000;
    M2C_FIELD(&D_011E9440, s32 *, 0x20) = temp_2_4;
    M2C_FIELD(&D_011E9440, s32 *, 0x28) = __wrap_memalign(0x40, 0x800);
    temp_2_5 = sceSifAllocIopHeap(0x800);
    M2C_FIELD(&D_011E9440, s32 *, 0x2C) = temp_2_5;
    if ((M2C_FIELD(&D_011E9440, s32 *, 0) == 0) || (M2C_FIELD(&D_011E9440, s32 *, 8) == 0) || (M2C_FIELD(&D_011E9440, s32 *, 0xC) == 0) || (M2C_FIELD(&D_011E9440, s32 *, 0x10) == 0) || (M2C_FIELD(&D_011E9440, s32 *, 0x18) == 0) || (M2C_FIELD(&D_011E9440, s32 *, 0x20) == 0) || (M2C_FIELD(&D_011E9440, s32 *, 0x28) == 0) || (temp_2_5 == 0)) {
        VIMovieShutdown__Fv();
        return -1;
    }
    sceMpegInit();
    return 0;
}
