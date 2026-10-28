typedef struct {
    u32 cur;
    u32 end;
    u32 pad[2];
} DmaEnv;

extern DmaEnv D_006E93D0;
extern u32 D_004844C8;
extern s32 D_00484414;
extern s32 D_00484418;
extern s8 D_004866CC;
extern u8 *D_0048698C;
extern s16 *D_00486990;
extern u16 *D_00486994;
extern s32 D_00486998;
extern u16 D_0048699C;
extern s32 D_004869A4;
extern s32 D_004869A8;
extern void func_00172E88(s32, s32, s32, s32);
extern s32 func_0015EB80(u32, s32, s32, s32, s32);

s64 func_00172F88(void)
{
    u8 *x;
    u8 *y;
    s32 n;
    s64 t;
    u32 old;
    s32 v;

    if (D_004869A4 != 0) {
        func_00172E88(0, D_00484414, 0x280, D_00484418);
    }
    *D_00486990 = D_0048699C + D_00486998 * 2;
    x = (u8 *)D_006E93D0.cur;
    y = (u8 *)D_006E93D0.end;
    n = ((s32)((u32)x - (u32)y) >> 3) - 2;
    *D_00486994 += D_00486998 * 2;
    t = (s64)(n >> 1);
    t |= 0x10000000;
    *(s64 *)y = t;
    if (((t >> 28) & 7) == 1) {
        *(s64 *)y = (t & 0xFFFFFFFF8FFFFFFFLL) | 0x60000000;
    } else {
        D_006E93D0.cur = (u32)x + 0x10;
        *(s64 *)(x + 8) = 0;
        *(s64 *)x = 0x60000000;
        D_006E93D0.end = 0;
    }
    if (D_004866CC == 0) {
        v = *(s32 *)(D_0048698C + 0x10);
        old = D_004844C8;
        D_004844C8 = D_006E93D0.cur;
        return func_0015EB80(old, D_004869A8, v, 0, 1);
    }
}
