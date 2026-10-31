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

M2C_UNK InternalInit__9VIGUIPage(void *);           /* extern */
M2C_UNK __t6VIList1ZP11VIGUIObject(void *);         /* extern */
extern M2C_UNK D_01200660;
extern M2C_UNK D_01200690;

void __9VIGUIPage(void *arg0) {
    void *temp_3;

    M2C_FIELD(arg0, M2C_UNK **, 0x78) = &D_01200660;
    __t6VIList1ZP11VIGUIObject(arg0 + 0x40);
    temp_3 = arg0 + 0x4C;
    M2C_FIELD(temp_3, s32 *, 0xC) = 0;
    M2C_FIELD(temp_3, s32 *, 0x10) = 0;
    M2C_FIELD(temp_3, M2C_UNK **, 0x14) = &D_01200690;
    M2C_FIELD(temp_3, s32 *, 8) = 0;
    InternalInit__9VIGUIPage(arg0);
}
