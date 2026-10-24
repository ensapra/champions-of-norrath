typedef struct { u8 pad[0x914]; s32 count; } G;
extern u8 func_001C8098[];
extern void func_0014CBB8(s32);
extern void func_00155C2C(G *);
extern void func_00155F14(G *);
extern void func_0014CAE8(s32);
extern void func_0014CA30(s32);

void func_00156214(G *g) {
    s32 i = 0;
    s32 j;
    u8 *q;
    void *p = func_001C8098;
    p = *(void **)((u8 *)p + 0xD70);
    ((void (*)(void))p)();
    j = 0x990;
    if (g->count > 0) {
        q = (u8 *)g + 0x990;
        do {
            j += 4;
            i++;
            func_0014CBB8(*(s32 *)(q + 0xC));
            q = (u8 *)g + j;
        } while (i < g->count);
    }
    func_00155C2C(g);
    func_00155F14(g);
}

void func_001561A8(G *g) {
    s32 i = 0x27;
    s32 j = 0x990;
    u8 *q;
    s32 o;
    void *p = func_001C8098;
    p = *(void **)((u8 *)p + 0xD68);
    ((void (*)(void))p)();
    q = (u8 *)g + 0x990;
    do {
        j += 4;
        o = *(s32 *)(q + 0xC);
        if (o) func_0014CAE8(o);
        i--;
        q = (u8 *)g + j;
    } while (i >= 0);
}

void func_001560E8(G *g) {
    s32 i = 0;
    s32 j, o;
    u8 *q;
    void *p = func_001C8098;
    p = *(void **)((u8 *)p + 0xD64);
    ((void (*)(void))p)();
    if (g->count > 0) {
        j = 0x990;
        q = (u8 *)g + j;
        do {
            j += 4;
            o = *(s32 *)(q + 0xC);
            if (o) func_0014CA30(o);
            i++;
            q = (u8 *)g + j;
        } while (i < g->count);
    }
    if (i < 0x28) {
        j = i * 4 + 0x990;
        q = (u8 *)g + j;
        do {
            j += 4;
            o = *(s32 *)(q + 0xC);
            if (o) func_0014CAE8(o);
            i++;
            q = (u8 *)g + j;
        } while (i < 0x28);
    }
}
