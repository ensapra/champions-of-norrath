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

M2C_UNK UnpreparePowerOff__Fv();                    /* extern */
M2C_UNK cdInit__Fv();                               /* extern */
M2C_UNK initSif__Fv();                              /* extern */
M2C_UNK padInit__Fv();                              /* extern */
M2C_UNK scePadEnd();                                /* extern */
M2C_UNK soundRestore__Fb(M2C_UNK);                  /* extern */
M2C_UNK soundSleep__Fv();                           /* extern */

void engineRebootIOP__Fv(void) {
    scePadEnd();
    UnpreparePowerOff__Fv();
    soundSleep__Fv();
    initSif__Fv();
    soundRestore__Fb(0);
    padInit__Fv();
    cdInit__Fv();
}
