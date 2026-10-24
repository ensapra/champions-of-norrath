extern u8 func_001C8098[];
void func_0016DDAC(s32);
void func_0016DC48(s32);
void func_0016DD24(s32);

void func_0016D834(s32 arg0) {
    void *p = func_001C8098;
    p = *(void **)((u8 *)p + 0x1000);
    ((void (*)(s32))p)(arg0);
    func_0016DDAC(arg0);
    func_0016DC48(arg0);
    func_0016DD24(arg0);
}

void func_0016D810(void) {
    void *p = func_001C8098;
    p = *(void **)((u8 *)p + 0xFF8);
    ((void (*)(void))p)();
}

typedef struct { u8 pad[0x980]; s32 *list; u8 pad2[0x9C0 - 0x984]; s32 x9C0; s32 count; } Gui16D;
typedef struct { s32 type; s32 pad; s64 val; u8 rest[0xF0]; } Msg16D;
void func_0014CBF4(s32, Msg16D *, s32);
void func_0014CA30(s32);

s32 func_0016D874(Gui16D *a, Gui16D *b, Gui16D *c) {
    Msg16D msg;
    s32 i;
    s32 r;
    void *p = func_001C8098;
    p = *(void **)((u8 *)p + 0x1048);
    r = ((s32 (*)(Gui16D *, Gui16D *, Gui16D *))p)(a, b, c);
    if (b->x9C0 == c->x9C0) return r;
    a->x9C0 = b->x9C0;
    msg.type = 0x48;
    msg.val = b->x9C0;
    for (i = 0; i < a->count; i++) {
        func_0014CBF4(a->list[i], &msg, 1);
    }
    return 1;
}

void func_0016D7A4(Gui16D *a) {
    s32 i;
    void *p = func_001C8098;
    p = *(void **)((u8 *)p + 0xFF8);
    ((void (*)(Gui16D *))p)(a);
    for (i = 0; i < a->count; i++) {
        func_0014CA30(a->list[i]);
    }
}
