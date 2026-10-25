/* machine draft (m2c) for ee-gcc-2.96 -O2 -G8, tried by autopilot */
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

M2C_UNK func_0017FCEC(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0017FD24(M2C_UNK);                     /* extern */
M2C_UNK func_0017FD6C(M2C_UNK);                     /* extern */
M2C_UNK func_0017FD78(M2C_UNK);                     /* extern */
M2C_UNK func_0017FD84(M2C_UNK);                     /* extern */
M2C_UNK func_0017FDCC(M2C_UNK);                     /* extern */
M2C_UNK func_0017FDE4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0017FE40(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0017FEFC(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_001816B8(void *, M2C_UNK);             /* extern */
M2C_UNK func_00181794();                            /* extern */
M2C_UNK func_0018AE08(s32, s32, M2C_UNK, s32);      /* extern */
s32 func_0018CE78(M2C_UNK);                         /* extern */
s32 func_0018CF58(s32, s32);                        /* extern */
void *func_0018CF98(s32);                           /* extern */
M2C_UNK func_0018D230(s32, M2C_UNK *);              /* extern */
M2C_UNK func_001A2850(void *);                      /* extern */
s32 ovl_ntgui2_func_0018CE88(u32, void *);          /* extern */
extern void *D_00480430;
extern M2C_UNK func_001801E8;
extern M2C_UNK jtbl_004C006C;

s32 func_0017FA9C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_16;
    u32 temp_16_2;

    temp_16 = func_0018CE78(2);
    temp_16_2 = temp_16 - func_0018CE78(1);
    M2C_FIELD(D_00480430, s32 *, 4) = ovl_ntgui2_func_0018CE88((u32) (0x400 - (func_0018CE78(1) - temp_16_2)) / temp_16_2, D_00480430 + 0x160);
    func_0018AE08(M2C_FIELD(D_00480430, s32 *, 4), arg1, 0x800, arg0);
    M2C_FIELD(D_00480430, s32 *, 0) = arg2;
    if (func_0018CF58(M2C_FIELD(D_00480430, s32 *, 4), M2C_FIELD(D_00480430, s32 *, 0)) == 0) {
        func_0018D230(M2C_FIELD(D_00480430, s32 *, 4), &func_001801E8);
        M2C_FIELD(D_00480430, s32 *, 0x60) = 0;
        M2C_FIELD(D_00480430, s32 *, 0x64) = 0;
        M2C_FIELD(D_00480430, s32 *, 0x68) = 0;
        M2C_FIELD(D_00480430, s32 *, 0x6C) = 0;
        M2C_FIELD(D_00480430, s32 *, 0xC) = (s32) M2C_FIELD(func_0018CF98(M2C_FIELD(D_00480430, s32 *, 4)), s16 *, 0x54);
        M2C_FIELD(D_00480430, s32 *, 0x10) = (s32) M2C_FIELD(func_0018CF98(M2C_FIELD(D_00480430, s32 *, 4)), s16 *, 0x50);
        M2C_FIELD(D_00480430, s32 *, 0x14) = (s32) (M2C_FIELD(D_00480430, s32 *, 0x10) - M2C_FIELD(func_0018CF98(M2C_FIELD(D_00480430, s32 *, 4)), s16 *, 0x52));
        M2C_FIELD(D_00480430, s32 *, 0x18) = 1;
        func_001816B8(D_00480430, 1);
        func_00181794();
        func_0017FCEC(0, 0);
        func_0017FD24(0);
        func_0017FD6C(0);
        func_0017FDE4(0x80, 0x80, 0x80, 0x80);
        func_0017FD78(0);
        func_0017FD84(0x3F800000);
        func_0017FDCC(0x3F800000);
        func_0017FEFC(0xFF, 0, 0, 0x40);
        func_0017FE40(0, 0, 0x40, 0x40);
        func_0017FE40(0, 0, 0x40, 0x40);
        func_0017FE40(0, 0, 0xFF, 0x40);
        func_0017FE40(0, 0, 0xFF, 0x40);
        return 0;
    }
    func_001A2850(&jtbl_004C006C + 0xD57C);
    return 1;
}
