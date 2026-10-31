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

s32 Load__13VIStringTablePCc(void *, M2C_UNK *);    /* extern */
M2C_UNK Unload__13VIStringTable();                  /* extern */
M2C_UNK printf(M2C_UNK *);                          /* extern */
extern M2C_UNK D_011C5FF0;
extern M2C_UNK D_011C6000;

s32 ReloadWords__4VIUI(void *arg0) {
    Unload__13VIStringTable();
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    if (Load__13VIStringTablePCc(arg0, &D_011C5FF0) < 0) {
        return -1;
    }
    printf(&D_011C6000);
    return 0;
}
