extern u8 *D_00480488;
extern u8 jtbl_004C006C[];
typedef void (*Fn197)(void *, u32, u8);
typedef void (*Fn197b)(void *, u32);

void func_0019790C(u8 *arg0, u32 arg1, u8 arg2) {
    if (arg1 >= 5) {
        (*(Fn197 *)(D_00480488 + 0xF4))(jtbl_004C006C + 0xF174, arg1, arg2);
    } else {
        (*(Fn197b *)(arg0 + 0x34))(arg0, arg1);
    }
}
