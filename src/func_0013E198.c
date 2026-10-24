typedef struct Node { struct Node *next; s32 b; s32 fn; s32 arg; } Node;
extern Node *D_0110D880[];
s32 func_001B5C80(void);
void func_001B5CD8(void);
void func_001B6FE8(s32);

s32 func_001B7B18(u32 h) {
    Node *n = (Node *)((h >> 8) << 4);
    s32 t = func_001B5C80();
    Node *old;
    if ((s32)h < 0 || ((h ^ n->b) & 0xFF)) {
        if (t) func_001B5CD8();
        return 0x80008002;
    }
    func_001B6FE8(n->b);
    old = D_0110D880[0];
    D_0110D880[0] = n;
    n->next = old;
    n->b = 0;
    if (t) func_001B5CD8();
    return 0;
}

extern s32 D_010CFC58[];
extern s32 D_010CFC60[];
extern s32 D_010CFC64[];
extern s32 D_010CFC70[];
void func_0013FFF8(void);
s32 func_001404D0(void);
s32 func_001404F0(void);
void func_00140A60(s32);

void func_0013E198(void) {
    func_0013FFF8();
    D_010CFC64[0] = 3;
}

void ovl_ntgui2_func_0013E160(void) {
    func_0013FFF8();
    D_010CFC64[0] = 3;
    D_010CFC70[0] = 2;
}

s32 func_0013E0E0(void) {
    if (func_001404D0() != 0) return 0;
    D_010CFC60[0] = func_001404F0();
    func_00140A60(D_010CFC58[0]);
    return 1;
}
