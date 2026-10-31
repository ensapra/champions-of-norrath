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

s32 AddIntcHandler(M2C_UNK, M2C_UNK *, M2C_UNK);    /* extern */
M2C_UNK DisableIntc(M2C_UNK);                       /* extern */
M2C_UNK EnableIntc(M2C_UNK);                        /* extern */
extern s32 D_01228A40;
extern s64 D_01228A48;
extern s32 D_01228A50;
extern s32 D_01228A54;
extern M2C_UNK Handler__7VITimeri;

void Init__7VITimer(void) {
    D_01228A48 = 0;
    DisableIntc(9);
    D_01228A50 = 0x5C1;
    *(s32 *)0x10000010 = 0x5C1;
    *(s32 *)0x10000020 = 0x493E;
    D_01228A40 = AddIntcHandler(9, &Handler__7VITimeri, -1);
    EnableIntc(9);
    D_01228A54 = 1;
}
