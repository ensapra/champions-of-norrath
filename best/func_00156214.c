typedef struct { u8 pad[0x914]; s32 count; } G;
extern u8 func_001C8098[];
void func_0014CBB8(s32);
void func_00155C2C(G *);
void func_00155F14(G *);
void func_00156214(G *g) {
    s32 i = 0;
    s32 j, q;
    (*(void (**)(void))(func_001C8098 + 0xD70))();
    if (g->count > 0) {
        j = 0x990;
        q = (s32)g + j;
        do {
            j += 4;
            func_0014CBB8(*(s32 *)(q + 0xC));
            i++;
            q = (s32)g + j;
        } while (i < g->count);
    }
    func_00155C2C(g);
    func_00155F14(g);
}
