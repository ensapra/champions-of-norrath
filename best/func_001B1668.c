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

M2C_UNK SignalSema(s32);                            /* extern */
M2C_UNK WaitSema(s32);                              /* extern */
M2C_UNK func_001AFAD0(M2C_UNK, M2C_UNK *, void *);  /* extern */
M2C_UNK func_001AFF48(M2C_UNK);                     /* extern */
s32 func_001B06E0(void *, M2C_UNK, M2C_UNK);        /* extern */
s32 func_001B08B0(void *, M2C_UNK, M2C_UNK, void *, M2C_UNK, s32, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_001B0FD8();                            /* extern */
s32 func_001B5C80();                                /* extern */
M2C_UNK func_001B5CD8();                            /* extern */
extern M2C_UNK D_FFFFF;
extern M2C_UNK func_001B1130;
extern M2C_UNK func_001B1620;
extern M2C_UNK func_01000000;
extern M2C_UNK func_01109848;
extern M2C_UNK jtbl_004C006C;

s32 func_001B1668(void) {
    s32 sp10;
    M2C_UNK *var_2_2;
    s32 temp_16_2;
    s32 temp_3;
    s32 var_2;
    void *temp_16;
    void *temp_18;
    void *temp_19;
    void *temp_4;
    void *var_16;
    void *var_17;
    void *var_3;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    temp_16 = &func_01109848 + 0x1738;
    func_001AFF48(0);
    M2C_FIELD(&func_01109848, s32 *, 0x1738) = 0;
    M2C_FIELD(temp_16, s32 *, 4) = 0;
    temp_16_2 = func_001B5C80();
    func_001AFAD0(0x80000011, &func_001B1130, &func_01109848 + 0x16F8);
    func_001AFAD0(0x80000013, &func_001B1620, temp_16);
    temp_19 = &func_01109848 + 0x16B8;
    if (temp_16_2 == 0) {
        goto block_4;
    }
    func_001B5CD8();
    goto block_5;
block_2:
loop_3:
    if (var_2_2 != (M2C_UNK *)-1) {
        goto loop_3;
    }
block_4:
block_5:
    var_2 = -1;
    if (func_001B06E0(temp_19, 0x80000001, 0) < 0) {
        goto block_15;
    }
    var_2_2 = &D_FFFFF;
    if (M2C_FIELD(temp_19, s32 *, 0x24) == 0) {
        goto block_2;
    }
    func_001B0FD8();
    WaitSema(M2C_FIELD(&jtbl_004C006C, s32 *, 0x3F3C));
    var_3 = &func_01109848 + 0x14B8;
    temp_4 = var_3 + 0x200;
    temp_18 = &func_01000000 + 0x1097C0;
    if ((u32) var_3 >= (u32) temp_4) {
        goto block_11;
    }
    var_17 = &func_01109848 + 0xC38;
    var_16 = &func_01109848 + 0xBF8;
loop_9:
    M2C_FIELD(var_3, s32 *, 4) = 0;
    var_3 += 0x10;
    if ((u32) var_3 < (u32) temp_4) {
        goto loop_9;
    }
    goto block_12;
block_11:
    var_17 = &func_01109848 + 0xC38;
    var_16 = &func_01109848 + 0xBF8;
block_12:
    SignalSema(M2C_FIELD(&jtbl_004C006C, s32 *, 0x3F3C));
    M2C_FIELD(&func_01000000, void **, 0x1097C0) = var_17;
    M2C_FIELD(temp_18, void **, 4) = (void *) (var_17 + 0x440);
    if (func_001B08B0(temp_19, 0xFF, 0, temp_18, 8, (s32) var_16, 8, 0, 0) >= 0) {
        goto block_14;
    }
    return 0xFFFEFFFF;
block_14:
    M2C_FIELD(&func_01109848, M2C_UNK *, 0x16E0) = M2C_UNALIGNED32(M2C_FIELD(((s32) var_16 | 0x20000000), M2C_UNK *, 0));
    temp_3 = M2C_UNALIGNED32(M2C_FIELD(((s32) (var_16 + 4) | 0x20000000), M2C_UNK *, 0));
    sp10 = temp_3;
    M2C_FIELD(&jtbl_004C006C, s32 *, 0x3F30) = 1;
    var_2 = 0;
    M2C_FIELD(&jtbl_004C006C, s32 *, 0x3F34) = (s32) (temp_3 == 2);
block_15:
    return var_2;
}
