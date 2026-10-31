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

M2C_UNK htmlInitParserCtxt(void *);                 /* extern */
M2C_UNK inputPush(void *, void *, s32);             /* extern */
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */
void *xmlAllocParserInputBuffer(s32);               /* extern */
M2C_UNK xmlFreeParserCtxt(void *);                  /* extern */
s32 xmlParserGetDirectory(s32);                     /* extern */
M2C_UNK xmlParserInputBufferPush(s32, s32, s32);    /* extern */
extern M2C_UNK D_011B1D18;
extern M2C_UNK (*D_011B1E18)(void *);
extern void *(*D_011B1E1C)(M2C_UNK);
extern s32 (*D_011B1E24)(s32);
extern M2C_UNK D_011D1DC8;

void *htmlCreatePushParserCtxt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    M2C_UNK (*temp_2_5)(s32, M2C_UNK *);
    s32 *temp_2_6;
    s32 *temp_4_2;
    s32 temp_2_3;
    s32 temp_4_3;
    s32 temp_6;
    s32 var_4;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_4;
    void *temp_3;
    void *temp_4;
    void *var_18;
    void *var_2;
    void *var_3;

    var_2 = xmlAllocParserInputBuffer(arg5);
    if (var_2 != NULL) {
        temp_2 = D_011B1E1C(0x118);
        if (temp_2 != NULL) {
            memset(temp_2, 0, 0x118);
            htmlInitParserCtxt(temp_2);
            if (arg0 != 0) {
                temp_4 = M2C_FIELD(temp_2, void **, 0);
                if (temp_4 != &D_011B1D18) {
                    D_011B1E18(temp_4);
                }
                temp_2_2 = D_011B1E1C(0x6C);
                M2C_FIELD(temp_2, void **, 0) = temp_2_2;
                if (temp_2_2 == NULL) {
                    D_011B1E18(var_2);
                    D_011B1E18(temp_2);
                    var_2 = NULL;
                } else {
                    var_3 = temp_2_2;
                    var_4 = arg0;
                    temp_2_3 = var_4 + 0x60;
                    if ((var_4 | (s32) var_3) & 7) {
                        do {
                            M2C_ERROR(/* unknown instruction: ldl $a1, 0x7($a0) */);
                            M2C_ERROR(/* unknown instruction: ldr $a1, ($a0) */);
                            M2C_ERROR(/* unknown instruction: ldl $a2, 0xf($a0) */);
                            M2C_ERROR(/* unknown instruction: ldr $a2, 0x8($a0) */);
                            M2C_ERROR(/* unknown instruction: ldl $a3, 0x17($a0) */);
                            M2C_ERROR(/* unknown instruction: ldr $a3, 0x10($a0) */);
                            M2C_ERROR(/* unknown instruction: ldl $a4, 0x1f($a0) */);
                            M2C_ERROR(/* unknown instruction: ldr $a4, 0x18($a0) */);
                            M2C_ERROR(/* unknown instruction: sdl $a1, 0x7($v1) */);
                            M2C_ERROR(/* unknown instruction: sdr $a1, ($v1) */);
                            M2C_ERROR(/* unknown instruction: sdl $a2, 0xf($v1) */);
                            M2C_ERROR(/* unknown instruction: sdr $a2, 0x8($v1) */);
                            M2C_ERROR(/* unknown instruction: sdl $a3, 0x17($v1) */);
                            M2C_ERROR(/* unknown instruction: sdr $a3, 0x10($v1) */);
                            M2C_ERROR(/* unknown instruction: sdl $a4, 0x1f($v1) */);
                            M2C_ERROR(/* unknown instruction: sdr $a4, 0x18($v1) */);
                            var_4 += 0x20;
                            var_3 += 0x20;
                        } while (var_4 != temp_2_3);
                    } else {
                        do {
                            M2C_FIELD(var_3, s64 *, 0) = (s64) M2C_FIELD(var_4, s64 *, 0);
                            M2C_FIELD(var_3, s64 *, 8) = (s64) M2C_FIELD(var_4, s64 *, 8);
                            M2C_FIELD(var_3, s64 *, 0x10) = (s64) M2C_FIELD(var_4, s64 *, 0x10);
                            M2C_FIELD(var_3, s64 *, 0x18) = (s64) M2C_FIELD(var_4, s64 *, 0x18);
                            var_4 += 0x20;
                            var_3 += 0x20;
                        } while (var_4 != temp_2_3);
                    }
                    M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($a0) */);
                    M2C_ERROR(/* unknown instruction: ldr $v0, ($a0) */);
                    M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($v1) */);
                    M2C_ERROR(/* unknown instruction: sdr $v0, ($v1) */);
                    M2C_FIELD(var_3, s32 *, 8) = (s32) M2C_FIELD(var_4, s32 *, 8);
                    if (arg1 != 0) {
                        M2C_FIELD(temp_2, s32 *, 4) = arg1;
                    }
                    goto block_18;
                }
            } else {
block_18:
                if (arg4 == 0) {
                    M2C_FIELD(temp_2, s32 *, 0xA8) = 0;
                } else {
                    M2C_FIELD(temp_2, s32 *, 0xA8) = xmlParserGetDirectory(arg4);
                }
                temp_2_4 = D_011B1E1C(0x38);
                if (temp_2_4 != NULL) {
                    var_18 = temp_2_4;
                    memset(temp_2_4, 0, 0x38);
                    M2C_FIELD(temp_2_4, s32 *, 4) = 0;
                    M2C_FIELD(temp_2_4, s32 *, 8) = 0;
                    M2C_FIELD(temp_2_4, s32 *, 0x20) = 1;
                    M2C_FIELD(temp_2_4, s32 *, 0xC) = 0;
                    M2C_FIELD(temp_2_4, s32 *, 0x10) = 0;
                    M2C_FIELD(temp_2_4, s32 *, 0x1C) = 1;
                    M2C_FIELD(temp_2_4, s32 *, 0) = 0;
                    M2C_FIELD(temp_2_4, s32 *, 0x28) = 0;
                    M2C_FIELD(temp_2_4, s32 *, 0x30) = 0;
                    M2C_FIELD(temp_2_4, s32 *, 0x24) = 0;
                    M2C_FIELD(temp_2_4, s32 *, 0x18) = 0;
                } else {
                    temp_3 = M2C_FIELD(temp_2, void **, 0);
                    M2C_FIELD(temp_2, s32 *, 0x60) = 2;
                    if (temp_3 != NULL) {
                        temp_2_5 = M2C_FIELD(temp_3, M2C_UNK (**)(s32, M2C_UNK *), 0x58);
                        var_18 = NULL;
                        if (temp_2_5 != NULL) {
                            temp_2_5(M2C_FIELD(temp_2, s32 *, 4), &D_011D1DC8);
                            goto block_28;
                        }
                    } else {
block_28:
                        var_18 = NULL;
                    }
                }
                if (var_18 == NULL) {
                    xmlFreeParserCtxt(temp_2);
                    var_2 = NULL;
                } else {
                    if (arg4 == 0) {
                        M2C_FIELD(var_18, s32 *, 4) = 0;
                    } else {
                        M2C_FIELD(var_18, s32 *, 4) = D_011B1E24(arg4);
                    }
                    temp_2_6 = M2C_FIELD(var_2, s32 **, 0x10);
                    M2C_FIELD(var_18, void **, 0) = var_2;
                    M2C_FIELD(var_18, s32 *, 0xC) = (s32) *temp_2_6;
                    temp_6 = *temp_2_6;
                    M2C_FIELD(var_18, s32 *, 0x10) = temp_6;
                    inputPush(temp_2, var_18, temp_6);
                    var_2 = temp_2;
                    if (arg3 > 0) {
                        if (arg2 != 0) {
                            temp_4_2 = M2C_FIELD(temp_2, s32 **, 0x24);
                            if (temp_4_2 != NULL) {
                                temp_4_3 = *temp_4_2;
                                if (temp_4_3 != 0) {
                                    xmlParserInputBufferPush(temp_4_3, arg3, arg2);
                                    var_2 = temp_2;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            D_011B1E18(var_2);
            var_2 = NULL;
        }
    }
    return var_2;
}
