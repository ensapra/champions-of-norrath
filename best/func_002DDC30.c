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

M2C_UNK _ExecPS2_2(s32, s32, s32, s32);             /* extern */
M2C_UNK func_002DDB10(M2C_UNK *, s32, s32);         /* extern */
M2C_UNK func_002DDC28();                            /* extern */
extern s32 D_00445D48;
extern M2C_UNK D_0047B920;

void func_002DDC30(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_002DDB10(&D_0047B920, arg2, arg3);
    func_002DDC28();
    _ExecPS2_2(arg0, arg1, arg2, D_00445D48 + 4);
}
