extern u8 D_00362D08[];
s32 func_0018D068(u8 *p, s32 a, s32 b) {
    if (*(s32 *)(p + 0x38C) == 0) return 0;
    *(s32 *)(p + 0x388) = a;
    *(s32 *)(p + 0x384) = b;
    return (*(s32 (**)(u8 *, u8 *))(p + 0x394))(p, D_00362D08);
}
s32 func_0018D030(u8 *p, s32 a, s32 b, s32 c) {
    *(s32 *)(p + 0x2C4) = 1;
    *(s32 *)(p + 0x2C0) = 0;
    *(s32 *)(p + 0x38C) = c;
    *(s32 *)(p + 0x36C) = 1;
    *(s32 *)(p + 0x390) = c;
    return func_0018D068(p, a, b);
}
s32 func_0018D248(s32, void *);
void func_0018D230(u8 *p, void *fn) {
    if (fn == 0) fn = (void *)func_0018D248;
    *(void **)(p + 0x394) = fn;
}
typedef struct { s32 size; s32 count; s32 pad; u8 *cur; } Ring;
void func_001AE898(Ring *r) {
    r->count++;
    r->cur++;
    if (r->cur == (u8 *)r + (r->size + 0x10)) r->cur = (u8 *)r + 0x10;
}
