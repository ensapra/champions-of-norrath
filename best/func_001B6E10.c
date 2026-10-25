extern s32 func_001B5C80(void);
extern void func_001B5CD8(void);
extern u8 jtbl_004C006C[];

extern u8 D_0110B000[];
extern s32 D_0110B040[];
extern s32 D_0110B080[];
s32 func_001B08B0(void *, s32, s32, s32 *, s32, s32 *, s32, s32, s32);

s32 func_001B4868(s32 a) {
    if (jtbl_004C006C[0x3F48] < 0)
        return 0;
    D_0110B080[0] = a;
    if (func_001B08B0(D_0110B000, 2, 0, D_0110B080, 4, D_0110B040, 4, 0, 0) < 0)
        return -1;
    return D_0110B040[0];
}

typedef struct Node {
    struct Node *next;
    struct Node *prev;
    s32 id;
    s32 flags;
    u64 start;
    u64 spent;
    u64 delay;
} Node;

Node *func_001B6AE8(Node *p) {
    Node *prev = p->prev;
    Node *next = p->next;
    if (prev != 0)
        prev->next = next;
    else
        *(Node **)(jtbl_004C006C + 0x4EFC) = next;
    if (next != 0)
        next->prev = p->prev;
    p->prev = 0;
    return next;
}

u64 func_001B6DC0(void) {
    volatile u32 *t = (volatile u32 *)0x10001000;
    u32 low = t[0];
    u32 c = t[4];
    u64 hi = *(u64 *)(jtbl_004C006C + 0x4EE4);
    u64 sh;
    if (c & 0x800) {
        low = t[0];
        hi++;
    }
    c &= 3;
    sh = c ? 2 : 0;
    return (low | (hi << 16)) << (sh << c);
}

u64 func_001B6E10(void) {
    s32 lock = func_001B5C80();
    volatile u32 *t = (volatile u32 *)0x10001000;
    u32 low = t[0];
    u32 c = t[4];
    u64 hi = *(u64 *)(jtbl_004C006C + 0x4EE4);
    u64 sh;
    u64 r;
    if (c & 0x800) {
        low = t[0];
        hi++;
    }
    c &= 3;
    sh = c ? 2 : 0;
    r = (low | (hi << 16)) << (sh << c);
    if (lock)
        func_001B5CD8();
    return r;
}
