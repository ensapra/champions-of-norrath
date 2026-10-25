/* machine draft (m2c) for ee-gcc-2.96 -Os -G8 -falign-loops=8, tried by autopilot */
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

M2C_UNK func_0018B090(s32, void *);                 /* extern */
M2C_UNK func_0018CFD0(s32, f32);                    /* extern */
M2C_UNK func_00192708(void *);                      /* extern */
extern void *D_00480430;

void func_001816B8(void) {
    f32 var_f20;
    s32 temp_2;

    temp_2 = M2C_FIELD(D_00480430, s32 *, 0x38);
    var_f20 = M2C_FIELD(D_00480430, f32 *, 0x58);
    if (temp_2 != 0) {
        var_f20 = (var_f20 * (f32) temp_2) / 100.0f;
    }
    if (M2C_FIELD(D_00480430, s32 *, 0x18) != 0) {
        M2C_FIELD(D_00480430, s32 *, 0x18) = 0;
        func_00192708(D_00480430 + 0x110);
        M2C_FIELD(D_00480430, f32 *, 0x110) = var_f20;
        M2C_FIELD(D_00480430, f32 *, 0x124) = (f32) (var_f20 * M2C_FIELD(D_00480430, f32 *, 0x54));
        M2C_FIELD(D_00480430, f32 *, 0x140) = (f32) ((f32) M2C_FIELD(D_00480430, s32 *, 0x3C) * M2C_FIELD(D_00480430, f32 *, 0x58));
        M2C_FIELD(D_00480430, f32 *, 0x144) = (f32) ((f32) M2C_FIELD(D_00480430, s32 *, 0x10) * M2C_FIELD(D_00480430, f32 *, 0x58) * M2C_FIELD(D_00480430, f32 *, 0x54));
    }
    func_0018CFD0(M2C_FIELD(D_00480430, s32 *, 4), (f32) M2C_FIELD(D_00480430, s32 *, 0x3C) * var_f20);
    func_0018B090(M2C_FIELD(D_00480430, s32 *, 4), D_00480430 + 0x110);
}
