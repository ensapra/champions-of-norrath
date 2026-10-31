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

M2C_UNK htmlDefaultSAXHandlerInit();                /* extern */
M2C_UNK htmlInitAutoClose();                        /* extern */
M2C_UNK xmlDefaultSAXHandlerInit();                 /* extern */
M2C_UNK xmlInitCharEncodingHandlers();              /* extern */
M2C_UNK xmlInitializePredefinedEntities();          /* extern */
M2C_UNK xmlRegisterDefaultInputCallbacks();         /* extern */
M2C_UNK xmlRegisterDefaultOutputCallbacks();        /* extern */
M2C_UNK xmlXPathInit();                             /* extern */
extern s32 D_011B00F8;

void xmlInitParser(void) {
    if (D_011B00F8 == 0) {
        xmlInitCharEncodingHandlers();
        xmlInitializePredefinedEntities();
        xmlDefaultSAXHandlerInit();
        xmlRegisterDefaultInputCallbacks();
        xmlRegisterDefaultOutputCallbacks();
        htmlInitAutoClose();
        htmlDefaultSAXHandlerInit();
        xmlXPathInit();
        D_011B00F8 = 1;
    }
}
