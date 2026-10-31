/* identical to func_0030E7C8 (matched), with its names changed by decompdecomp */
extern void func_002FD348(s32 *, const void *, const void *);
extern void func_0030D510(void);
extern u8 D_008EAE28[16];
extern u8 D_011C27F8[9];
extern u8 D_008EAB78[16];

s32 *__tf8VISprite(void) {
    if (*(s32 *)D_008EAE28 == 0) {
        func_0030D510();
        func_002FD348((s32 *)D_008EAE28, D_011C27F8, D_008EAB78);
    }
    return (s32 *)D_008EAE28;
}
