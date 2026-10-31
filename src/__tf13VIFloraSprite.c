extern void __tf8VISprite(void);
extern void __rtti_si(s32 *, const void *, const void *);
extern unsigned char D_012278C0[];
extern unsigned char D_011C27C0[];
extern unsigned char D_012278D0[];
s32 *__tf13VIFloraSprite(void) {
    if (*(s32 *)D_012278C0 == 0) {
        __tf8VISprite();
        __rtti_si((s32 *)D_012278C0, D_011C27C0, D_012278D0);
    }
    return (s32 *)D_012278C0;
}
