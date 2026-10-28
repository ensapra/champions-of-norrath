typedef struct { u8 pad[0x914]; s32 count; } G_00156214;
extern u8 func_001C8098[];
void func_0014CBB8(s32);
void func_00155C2C(G_00156214 *);
void func_00155F14(G_00156214 *);
void func_00156214(G_00156214 *g) {
    s32 i = 0;
    s32 j, q;
    (*(void (**)(void))(func_001C8098 + 0xD70))();
    if (g->count > 0) {
        j = 0x990;
    loop:
        q = (s32)g + j;
        j += 4;
        i++;
        func_0014CBB8(((s32 *)q)[3]);
        if (i < g->count) goto loop;
    }
    func_00155C2C(g);
    func_00155F14(g);
}
