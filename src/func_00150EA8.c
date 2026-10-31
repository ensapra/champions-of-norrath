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

s32 func_0014B41C(void *, s32);                     /* extern */
M2C_UNK func_0014D418(void *);                      /* extern */
M2C_UNK func_0014D4C0(void *);                      /* extern */
M2C_UNK func_00150F74();                            /* extern */
M2C_UNK func_00152618(void *);                      /* extern */
extern s32 D_0047FC08;

void func_00150EA8(void *arg0, void *arg1) {
    M2C_UNK (*temp_2)(void *, s32, s32, s32, s32);
    void *temp_3;

    func_00150F74();
    if (func_0014B41C(arg1, D_0047FC08) != 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), M2C_UNK (**)(void *, void *), 0x128)(arg0, arg1);
    } else {
        temp_3 = M2C_FIELD(arg1, void **, 0x4C);
        if (M2C_FIELD(temp_3, s32 *, 0x6C) != 0) {
            temp_2 = M2C_FIELD(temp_3, M2C_UNK (**)(void *, s32, s32, s32, s32), 0xEC);
            if (temp_2 != NULL) {
                temp_2(arg1, M2C_FIELD(arg0, s32 *, 0x830), M2C_FIELD(arg0, s32 *, 0x834), M2C_FIELD(arg0, s32 *, 0x838), M2C_FIELD(arg0, s32 *, 0x83C));
            }
        }
    }
    func_0014D4C0(arg1);
    func_0014D418(arg1);
    func_00152618(arg0);
}
