extern s32 D_01228968[3];
extern char D_011C2608[];
extern void __rtti_user(s32 *, char *);
s32 *__tf10VIFlatFile(void) {
    s32 *ptr = D_01228968;
    if (*ptr == 0) {
        __rtti_user(ptr, D_011C2608);
    }
    return ptr;
}
