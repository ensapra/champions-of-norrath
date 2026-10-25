/* identical to func_001AAEF8 (matched), with its names changed by decompdecomp */
typedef struct Big { struct Big *next; } Big;
typedef struct { u8 pad[0x48]; Big *p5s; } Ctx;
extern s32 D_0047B363[];
Big *func_0030B4D0(Ctx *, Big *, s32, s32);
Big *func_0030B848(Ctx *, s32);
Big *func_0030B880(Ctx *, Big *, Big *);
void func_0030B4A0(Ctx *, Big *);

Big *func_0030BA90(Ctx *c, Big *b, s32 k) {
    Big *p5, *p51;
    s32 i;
    if ((i = k & 3) != 0)
        b = func_0030B4D0(c, b, *(s32 *)((u8 *)D_0047B363 + 0x4179 + i * 4), 0);
    if ((k >>= 2) != 0) {
        p5 = c->p5s;
        if (p5 == 0) {
            p5 = c->p5s = func_0030B848(c, 0x271);
            p5->next = 0;
        }
        for (;;) {
            if (k & 1) {
                Big *b1 = func_0030B880(c, b, p5);
                func_0030B4A0(c, b);
                b = b1;
            }
            if (!(k >>= 1)) break;
            if (!(p51 = p5->next)) {
                p51 = p5->next = func_0030B880(c, p5, p5);
                p51->next = 0;
            }
            p5 = p51;
        }
    }
    return b;
}
