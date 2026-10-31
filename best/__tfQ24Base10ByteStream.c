extern char D_011C21F0[];
extern void __rtti_user(s32 *, char *);
extern s32 D_01228950[];
s32 *__tfQ24Base10ByteStream(void) {
    s32 *ptr = D_01228950;
    if (*ptr == 0) {
        __rtti_user(ptr, D_011C21F0);
    }
    return ptr;
}
