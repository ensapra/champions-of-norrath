extern void __tf8VISprite(void);
extern void __rtti_si(void *, const void *, const void *);
extern u8 D_011C4428[9];
extern u8 D_012278D0[16];
extern u8 D_012278F0[16];

s32 *__tf13VIGroupSprite(void) {
    if (*(s32 *)D_012278F0 == 0) {
        __tf8VISprite();
        __rtti_si((s32 *)D_012278F0, D_011C4428, D_012278D0);
    }
    return (s32 *)D_012278F0;
}
