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

M2C_UNK func_00197B54(void *);                      /* extern */
M2C_UNK func_00197B8C(void *);                      /* extern */
M2C_UNK func_00197DB4(s32, void *, void *, void *); /* extern */
M2C_UNK func_001988E8(s32, void *, void *, void *); /* extern */
M2C_UNK func_001A1568(void *, M2C_UNK, void *);     /* extern */
M2C_UNK func_001AD740(s32);                         /* extern */
extern void *D_00480488;
extern s32 D_0048048C;
extern M2C_UNK D_00508021;
extern M2C_UNK jtbl_004C006C;
extern M2C_UNK xmlCreatePushParserCtxt;

void func_001973D0(s32 arg0, void *arg1) {
    s32 temp_3;
    void *temp_16;
    void *temp_17;
    void *temp_6;

    if (arg0 == 0) {
        func_001A1568(&jtbl_004C006C + 0xEFD4, 0x192, &D_00508021 + 0x46F);
    }
    if (arg1 == NULL) {
        func_001A1568(&jtbl_004C006C + 0xEFD4, 0x193, &jtbl_004C006C + 0xF02C);
    }
    func_001AD740(D_0048048C);
    if (M2C_FIELD(D_00480488, u16 *, 0) != 0) {
        temp_3 = M2C_FIELD(arg1, s32 *, 0xE4);
        switch (temp_3) {                           /* irregular */
        case 3:
            break;
        case 0:
            func_00197B54(arg1);
            break;
        case 2:
            func_00197B8C(arg1);
            break;
        default:
        case 1:
            temp_6 = &xmlCreatePushParserCtxt + 0x280;
            if (M2C_FIELD(D_00480488, u8 *, 1) != 0) {
                func_001988E8(arg0, arg1, temp_6, temp_6 - 0x40);
            } else {
                temp_16 = &xmlCreatePushParserCtxt + 0x1C0;
                temp_17 = temp_16 - 0x40;
                M2C_FIELD(arg1, M2C_UNK (**)(s32, void *, void *, void *, void *), 0xC)(arg0, arg1, temp_16, temp_17, temp_16 - 0x80);
                M2C_FIELD(arg1, M2C_UNK (**)(s32, void *, void *), 0x10)(arg0, arg1, temp_16);
                func_00197DB4(arg0, arg1, temp_16, temp_17);
            }
            break;
        }
    }
}
