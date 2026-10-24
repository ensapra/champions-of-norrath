typedef struct { u8 pad[0x914]; s32 count; } G;
extern u8 func_001C8098[];
extern void func_0014CAE8(s32);
extern void func_0014CA30(s32);

void func_001561A8(G *g) {
    s32 i;
    s32 j;
    s32 q;
    s32 o;
    void *p = func_001C8098;
    i = 0x27;
    j = 0x990;
    p = *(void **)((u8 *)p + 0xD68);
    ((void (*)(void))p)();
    q = (s32)g + j;
    do {
        j += 4;
        o = *(s32 *)(q + 0xC);
        if (o) func_0014CAE8(o);
        i--;
        q = (s32)g + j;
    } while (i >= 0);
}

void func_001560E8(G *g) {
    s32 i, j, o, q;
    void *p = func_001C8098;
    i = 0;
    p = *(void **)((u8 *)p + 0xD64);
    ((void (*)(void))p)();
    if (g->count > 0) {
        j = 0x990;
        q = (s32)g + j;
        do {
            j += 4;
            o = *(s32 *)(q + 0xC);
            if (o) func_0014CA30(o);
            i++;
            q = (s32)g + j;
        } while (i < g->count);
    }
    if (i < 0x28) {
        j = i * 4 + 0x990;
        q = (s32)g + j;
        do {
            j += 4;
            o = *(s32 *)(q + 0xC);
            if (o) func_0014CAE8(o);
            i++;
            q = (s32)g + j;
        } while (i < 0x28);
    }
}
