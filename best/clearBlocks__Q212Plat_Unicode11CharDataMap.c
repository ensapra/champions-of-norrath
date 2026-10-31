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

M2C_UNK _M_erase__t8_Rb_tree5ZQ312Plat_Unicode6Blocks2IdZQ312Plat_Unicode6Blocks2IdZt9_Identity1ZQ312Plat_Unicode6Blocks2IdZt4less1ZQ312Plat_Unicode6Blocks2IdZt9allocator1ZQ312Plat_Unicode6Blocks2IdPt13_Rb_tree_node1ZQ312Plat_Unicode6Blocks2Id(s32); /* extern */

void clearBlocks__Q212Plat_Unicode11CharDataMap(void *arg0) {
    void *temp_2;
    void *temp_2_2;

    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        _M_erase__t8_Rb_tree5ZQ312Plat_Unicode6Blocks2IdZQ312Plat_Unicode6Blocks2IdZt9_Identity1ZQ312Plat_Unicode6Blocks2IdZt4less1ZQ312Plat_Unicode6Blocks2IdZt9allocator1ZQ312Plat_Unicode6Blocks2IdPt13_Rb_tree_node1ZQ312Plat_Unicode6Blocks2Id(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4));
        temp_2 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(arg0, s32 *, 4) = 0;
        M2C_FIELD(temp_2, void **, 8) = temp_2;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4) = 0;
        temp_2_2 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_2_2, void **, 0xC) = temp_2_2;
    }
}
