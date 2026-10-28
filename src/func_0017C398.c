extern u8 D_006EBB40[];
extern u8 D_006E9D68[];
extern s32 D_00484190, D_00484194, D_00484198, D_004841C0;
extern s8 D_0048418C;
void func_0013EB28(void *);
void func_0017C398(void) {
    s8 one = 1;
    s32 j;
    u8 *p;
    u8 *base = D_006EBB40;
    u8 *b2;
    s32 i;
    s32 off;
    s32 *q;
    p = base + 4;
    D_00484190 = 0;
    D_00484198 = 0;
    D_00484194 = 0;
    D_004841C0 = 0;
    D_0048418C = one;
    for (j = 0x3F; j >= 0; j--) {
        *(s32 *)(p + 0x24) = 0;
        *p = 0;
        p += 0x30;
    }
    off = 0;
    b2 = D_006E9D68;
    q = (s32 *)(b2 - 8);
    for (i = 15; i >= 0; i--) {
        func_0013EB28((void *)(off + (u32)b2));
        off += 0x44;
        q[1] = 0;
        q[0] = 0;
        q = (s32 *)((u8 *)q + 0x44);
    }
}
