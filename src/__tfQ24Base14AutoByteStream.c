extern void __rtti_user(void *, void *);

extern s32 D_01228958;
extern char D_011C2228[];

s32 *__tfQ24Base14AutoByteStream(void) {
    s32 *ptr = &D_01228958;
    if (*ptr == 0) {
        __rtti_user(ptr, D_011C2228);
    }
    return ptr;
}
