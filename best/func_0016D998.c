typedef struct { u8 pad[0x980]; s32 *items; u8 pad2[0x40]; s32 count; } Grp;
extern u8 func_001C8098[];
extern s16 *func_0018D7A8(void);
void func_0014D328(s32, s32);
void func_0014D370(s32, s32);
void func_0014D394(s32);

s32 func_00172D60(void) {
    if (*func_0018D7A8() != 1)
        return 1;
    return (s32)((*(volatile u64 *)0x12001000 >> 13) & 1);
}

void func_0016DA14(Grp *g) {
    s32 i;
    (*(void (**)(Grp *))(func_001C8098 + 0x1090))(g);
    for (i = 0; i < g->count; i++) {
        func_0014D394(g->items[i]);
    }
}

void func_0016D998(Grp *g, s32 a) {
    s32 i;
    (*(void (**)(Grp *, s32))(func_001C8098 + 0x1088))(g, a);
    for (i = 0; i < g->count; i++) {
        func_0014D370(g->items[i], a);
    }
}

void func_0016D91C(Grp *g, s32 a) {
    s32 i;
    (*(void (**)(Grp *, s32))(func_001C8098 + 0x1080))(g, a);
    for (i = 0; i < g->count; i++) {
        func_0014D328(g->items[i], a);
    }
}
