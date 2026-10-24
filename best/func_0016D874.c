extern u8 func_001C8098[];
typedef struct { u8 pad[0x980]; s32 *list; u8 pad2[0x9C0 - 0x984]; s32 x9C0; s32 count; } Gui16D;
typedef struct { s32 type; s32 pad; s64 val; u8 rest[0xF0]; } Msg16D;
void func_0014CBF4(s32, Msg16D *, s32);

s32 func_0016D874(Gui16D *a, Gui16D *b, Gui16D *c) {
    Msg16D msg;
    s32 i;
    s32 r;
    void *p = func_001C8098;
    p = *(void **)((u8 *)p + 0x1048);
    r = ((s32 (*)(Gui16D *, Gui16D *, Gui16D *))p)(a, b, c);
    if (b->x9C0 != c->x9C0) {
        a->x9C0 = b->x9C0;
        msg.type = 0x48;
        msg.val = a->x9C0;
        for (i = 0; i < a->count; i++) {
            func_0014CBF4(a->list[i], &msg, 1);
        }
        r = 1;
    }
    return r;
}
