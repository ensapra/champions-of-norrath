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

M2C_UNK SetPort__12VITCPSocket2i(void *, s32);      /* extern */
M2C_UNK SetServer__12VITCPSocket2PCc(void *, s32);  /* extern */
s32 __wrap_memalign(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK printf(M2C_UNK *);                          /* extern */
M2C_UNK sceLibnetInitialize(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_011C4438;

void __12VITCPSocket2PCci(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x4C) = -1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = -1;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    printf(&D_011C4438);
    M2C_FIELD(arg0, s32 *, 0xC) = __wrap_memalign(0x40, 0x800);
    sceLibnetInitialize(arg0 + 0x10, 0x800, 0x2000, 0x20);
    SetServer__12VITCPSocket2PCc(arg0, arg1);
    SetPort__12VITCPSocket2i(arg0, arg2);
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
}
