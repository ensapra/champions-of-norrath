typedef struct __attribute__((packed, aligned(4))) { u32 w[3]; } C12;
extern u8 D_0044AD20[];
s16 func_00149068(void *, void *, s32, s32, s32, s32, s32, s32);
void func_001E5108(u8 *a, C12 *b, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 v) {
    C12 t = *b;
    func_00149068(a, &t, a2, a3, a4, a5, a6, 0);
    *(volatile s32 *)(a + 0x248) = v;
    *(s32 *)(a + 0x48) = (s32)D_0044AD20;
    *(C12 *)(a + 0x250) = *(C12 *)(a + 0x10);
    *(s32 *)(a + 0x25C) = 2;
    a[0x260] = 0;
}
