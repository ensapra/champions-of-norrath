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

M2C_UNK func_00105AA0(s32, s32, void *);            /* extern */
M2C_UNK func_00174DA8(s32);                         /* extern */
M2C_UNK func_00174EB0();                            /* extern */
extern M2C_UNK shopItemSetAttributes__FiiPcPQ24item11description;
extern M2C_UNK xmlListClear;

void func_001061D0(s32 arg0) {
    func_00174DA8(M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0xCC0));
    func_00174EB0();
    func_00105AA0(M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0xCC0), arg0, &xmlListClear + 0x60);
}
