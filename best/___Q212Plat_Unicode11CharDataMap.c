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

M2C_UNK _M_erase__t8_Rb_tree5ZQ312Plat_Unicode6Blocks2IdZQ312Plat_Unicode6Blocks2IdZt9_Identity1ZQ312Plat_Unicode6Blocks2IdZt4less1ZQ312Plat_Unicode6Blocks2IdZt9allocator1ZQ312Plat_Unicode6Blocks2IdPt13_Rb_tree_node1ZQ312Plat_Unicode6Blocks2Id(void *, s32); /* extern */
M2C_UNK _M_erase__t8_Rb_tree5ZUsZt4pair2ZCUsZPQ212Plat_Unicode8CharDataZt10_Select1st1Zt4pair2ZCUsZPQ212Plat_Unicode8CharDataZt4less1ZUsZt9allocator1ZPQ212Plat_Unicode8CharDataPt13_Rb_tree_node1Zt4pair2ZCUsZPQ212Plat_Unicode8CharData(void *, s32); /* extern */
M2C_UNK __builtin_delete(void *);                   /* extern */
M2C_UNK __builtin_vec_delete(s32);                  /* extern */
extern M2C_UNK D_011F2910;

void ___Q212Plat_Unicode11CharDataMap(void *arg0, s32 arg1) {
    s32 temp_4;
    void *temp_16;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;
    void *temp_2_6;
    void *temp_2_7;
    void *temp_2_8;
    void *temp_2_9;
    void *temp_4_2;

    temp_16 = arg0 + 0x10;
    if (M2C_FIELD(temp_16, s32 *, 4) != 0) {
        _M_erase__t8_Rb_tree5ZUsZt4pair2ZCUsZPQ212Plat_Unicode8CharDataZt10_Select1st1Zt4pair2ZCUsZPQ212Plat_Unicode8CharDataZt4less1ZUsZt9allocator1ZPQ212Plat_Unicode8CharDataPt13_Rb_tree_node1Zt4pair2ZCUsZPQ212Plat_Unicode8CharData(temp_16, M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 4));
        temp_2 = M2C_FIELD(arg0, void **, 0x10);
        M2C_FIELD(temp_16, s32 *, 4) = 0;
        M2C_FIELD(temp_2, void **, 8) = temp_2;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 4) = 0;
        temp_2_2 = M2C_FIELD(arg0, void **, 0x10);
        M2C_FIELD(temp_2_2, void **, 0xC) = temp_2_2;
    }
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        _M_erase__t8_Rb_tree5ZQ312Plat_Unicode6Blocks2IdZQ312Plat_Unicode6Blocks2IdZt9_Identity1ZQ312Plat_Unicode6Blocks2IdZt4less1ZQ312Plat_Unicode6Blocks2IdZt9allocator1ZQ312Plat_Unicode6Blocks2IdPt13_Rb_tree_node1ZQ312Plat_Unicode6Blocks2Id(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4));
        temp_2_3 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(arg0, s32 *, 4) = 0;
        M2C_FIELD(temp_2_3, void **, 8) = temp_2_3;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4) = 0;
        temp_2_4 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_2_4, void **, 0xC) = temp_2_4;
    }
    temp_4 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_4 != 0) {
        __builtin_vec_delete(temp_4);
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    if (M2C_FIELD(temp_16, s32 *, 4) != 0) {
        _M_erase__t8_Rb_tree5ZUsZt4pair2ZCUsZPQ212Plat_Unicode8CharDataZt10_Select1st1Zt4pair2ZCUsZPQ212Plat_Unicode8CharDataZt4less1ZUsZt9allocator1ZPQ212Plat_Unicode8CharDataPt13_Rb_tree_node1Zt4pair2ZCUsZPQ212Plat_Unicode8CharData(temp_16, M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 4));
        temp_2_5 = M2C_FIELD(arg0, void **, 0x10);
        M2C_FIELD(temp_16, s32 *, 4) = 0;
        M2C_FIELD(temp_2_5, void **, 8) = temp_2_5;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 4) = 0;
        temp_2_6 = M2C_FIELD(arg0, void **, 0x10);
        M2C_FIELD(temp_2_6, void **, 0xC) = temp_2_6;
    }
    temp_4_2 = M2C_FIELD(arg0, void **, 0x10);
    M2C_FIELD(temp_4_2, void **, 0) = (void *) M2C_FIELD(&D_011F2910, void **, 8);
    M2C_FIELD(&D_011F2910, void **, 8) = temp_4_2;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        _M_erase__t8_Rb_tree5ZQ312Plat_Unicode6Blocks2IdZQ312Plat_Unicode6Blocks2IdZt9_Identity1ZQ312Plat_Unicode6Blocks2IdZt4less1ZQ312Plat_Unicode6Blocks2IdZt9allocator1ZQ312Plat_Unicode6Blocks2IdPt13_Rb_tree_node1ZQ312Plat_Unicode6Blocks2Id(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4));
        temp_2_7 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(arg0, s32 *, 4) = 0;
        M2C_FIELD(temp_2_7, void **, 8) = temp_2_7;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4) = 0;
        temp_2_8 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_2_8, void **, 0xC) = temp_2_8;
    }
    temp_2_9 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_2_9, void **, 0) = (void *) M2C_FIELD(&D_011F2910, void **, 8);
    M2C_FIELD(&D_011F2910, void **, 8) = temp_2_9;
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
