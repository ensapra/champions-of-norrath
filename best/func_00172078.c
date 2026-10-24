typedef struct { s32 mode; s32 pad1[5]; s32 w; s32 h; s32 x; s32 y; s32 z; s32 f; s32 clr; s32 u; s32 v; s32 wr; } G;
extern u8 func_001CE218[];
#define g ((G *)(func_001CE218 + 0x2010))

void func_001720E0(s32 *a, s32 *b, s32 *c) {
    G *p = g;
    *a = *(s32 *)((u8 *)p + 0x30);
    *b = *(s32 *)((u8 *)p + 0x34);
    *c = *(s32 *)((u8 *)p + 0x38);
}

void func_00172078(s32 *a, s32 *b, s32 *c) {
    u8 *p = func_001CE218 + 0x2010;
    s32 v = 0;
    if (*(s32 *)func_001CE218 + 0 == 0) {}
    if (*(s32 *)p == 1) v = *(s32 *)(p + 0x28);
    *a = (*(s32 *)(p + 0x20) - (*(s32 *)(p + 0x18) >> 1)) << 4;
    *b = ((*(s32 *)(p + 0x24) - (*(s32 *)(p + 0x1C) >> 1)) << 4) + (v << 3);
    *c = v;
    *(s32 *)(p + 0x2C) = 0;
}
