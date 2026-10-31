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

s32 LoadSRSServer__Fv();                            /* extern */
M2C_UNK __16VIRealmInterfaceP20VIWndGenericRendererPCc(void *, void *, s32); /* extern */
M2C_UNK __19VIFlatFileStructure(void *);            /* extern */
M2C_UNK __5VIWnd();                                 /* extern */
M2C_UNK __9VIWndEdit(void *);                       /* extern */
M2C_UNK __t6VIList1ZP9VIGUIPage(s32);               /* extern */
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */
extern M2C_UNK D_012094A8;

void __20VIWndGenericRenderer(void *arg0) {
    __5VIWnd();
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &D_012094A8;
    __t6VIList1ZP9VIGUIPage(arg0 + 0x28);
    __19VIFlatFileStructure(arg0 + 0x554);
    __9VIWndEdit(arg0 + 0x590);
    __16VIRealmInterfaceP20VIWndGenericRendererPCc(arg0 + 0x758, arg0, LoadSRSServer__Fv());
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x54C) = -1;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x550) = 0;
    M2C_FIELD(arg0, s32 *, 0x578) = 0;
    M2C_FIELD(arg0, s32 *, 0x57C) = 0;
    M2C_FIELD(arg0, s32 *, 0x580) = 0;
    M2C_FIELD(arg0, s32 *, 0x544) = 0;
    M2C_FIELD(arg0, s32 *, 0x548) = 0;
    M2C_FIELD(arg0, s32 *, 0x584) = 0;
    M2C_FIELD(arg0, s32 *, 0x588) = 0;
    M2C_FIELD(arg0, s32 *, 0x440) = 0;
    memset(arg0 + 0x4C4, 0, 0x40);
    memset(arg0 + 0x504, 0, 0x40);
    memset(arg0 + 0x444, 0, 0x40);
    memset(arg0 + 0x484, 0, 0x40);
    memset(arg0 + 0x40, 0, 0x400);
}
