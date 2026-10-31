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

s32 reset_connection_cmp__FPC18reset_connection_tT0(void *arg0, void *arg1) {
    s32 temp_6_3;
    s32 temp_7_3;
    s32 var_2;
    u32 temp_4;
    u32 temp_6_4;
    u32 temp_6_5;
    u32 temp_7_4;
    u64 temp_6;
    u64 temp_6_2;
    u64 temp_7;
    u64 temp_7_2;

    temp_7 = M2C_FIELD(arg0, u64 *, 0);
    temp_6 = M2C_FIELD(arg1, u64 *, 0);
    var_2 = 1;
    if (temp_6 >= temp_7) {
        var_2 = -1;
        if (temp_7 >= temp_6) {
            temp_7_2 = M2C_FIELD(arg0, u64 *, 8);
            temp_6_2 = M2C_FIELD(arg1, u64 *, 8);
            var_2 = 1;
            if (temp_6_2 >= temp_7_2) {
                var_2 = -1;
                if (temp_7_2 >= temp_6_2) {
                    temp_7_3 = M2C_FIELD(arg0, s32 *, 0x10);
                    temp_6_3 = M2C_FIELD(arg1, s32 *, 0x10);
                    var_2 = 1;
                    if (temp_6_3 >= temp_7_3) {
                        var_2 = -1;
                        if (temp_7_3 >= temp_6_3) {
                            temp_7_4 = M2C_FIELD(arg0, u32 *, 0x14);
                            temp_6_4 = M2C_FIELD(arg1, u32 *, 0x14);
                            var_2 = 1;
                            if (temp_6_4 >= temp_7_4) {
                                var_2 = -1;
                                if (temp_7_4 >= temp_6_4) {
                                    temp_6_5 = M2C_FIELD(arg0, u32 *, 0x18);
                                    temp_4 = M2C_FIELD(arg1, u32 *, 0x18);
                                    var_2 = 1;
                                    if (temp_4 >= temp_6_5) {
                                        var_2 = (temp_6_5 >= temp_4) ? 0 : -1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return var_2;
}
