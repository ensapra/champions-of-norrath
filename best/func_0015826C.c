typedef struct { u8 pad[0xD24]; s32 d24; } G1;
extern s32 func_001517DC(s32, void *, volatile s32 *);
extern u8 func_001C98F0[];
s32 func_0015826C(G1 *g, s32 a, s32 n, s32 b, s32 c) {
    volatile s32 m[3];
    if (n == 0) return 1;
    m[0] = 0x15;
    m[1] = 1;
    m[2] = n;
    func_001517DC(g->d24, g, m);
    if (m[1] == 0) return 0;
    return ((s32 (*)(void *, s32, s32, s32))*(void **)(func_001C98F0 + 0x270 + n * 4))(g, a, b, c);
}
