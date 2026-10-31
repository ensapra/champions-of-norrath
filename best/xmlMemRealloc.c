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

void *__wrap_realloc(void *, s32, u32, void *);     /* extern */
M2C_UNK debugmem_tag_error(void *);                 /* extern */
M2C_UNK xmlInitMemory(s32);                         /* extern */
extern u64 D_011B1DF8;
extern u64 D_011B1E00;
extern s32 D_011B1E10;
extern M2C_UNK D_011DBFF8;

s32 xmlMemRealloc(s32 arg0, s32 arg1) {
    s32 temp_18;
    s32 var_6;
    s64 temp_19;
    u32 temp_6;
    u64 temp_5;
    void *temp_2;
    void *temp_7;

    if (D_011B1E10 == 0) {
        xmlInitMemory(D_011B1E10);
    }
    temp_7 = arg0 - 0x20;
    temp_18 = M2C_FIELD(temp_7, s32 *, 0);
    temp_19 = M2C_FIELD(temp_7, s64 *, 8);
    if (temp_18 != 0x5AA5) {
        debugmem_tag_error(temp_7);
        goto block_7;
    }
    temp_6 = M2C_FIELD(temp_7, u32 *, 0x10);
    M2C_FIELD(temp_7, s32 *, 0) = -0x5AA6;
    D_011B1DF8 -= temp_6;
    temp_2 = __wrap_realloc(temp_7, arg1 + 0x20, temp_6, temp_7);
    var_6 = temp_2 + 0x20;
    if (temp_2 != NULL) {
        temp_5 = arg1 + D_011B1DF8;
        M2C_FIELD(temp_2, s32 *, 0) = temp_18;
        M2C_FIELD(temp_2, s64 *, 8) = temp_19;
        M2C_FIELD(temp_2, s32 *, 4) = 2;
        M2C_FIELD(temp_2, M2C_UNK **, 0x14) = &D_011DBFF8;
        M2C_FIELD(temp_2, s32 *, 0x10) = arg1;
        M2C_FIELD(temp_2, s32 *, 0x18) = 0;
        D_011B1DF8 = temp_5;
        if ((u64) D_011B1E00 < temp_5) {
            D_011B1E00 = temp_5;
        }
    } else {
block_7:
        var_6 = 0;
    }
    return var_6;
}
