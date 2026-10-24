typedef struct {
    u8 pad0[0x98];
    s32 unk98;
    u8 pad9C[0x5D0 - 0x9C];
    void *unk5D0;
} O14E;

void func_0014E6CC(O14E *a, void **b) {
    a->unk5D0 = *b;
    a->unk98 = 2;
}

void func_0014E6B8(u8 *a, s64 *b) {
    b[0] = *(s64 *)(a + 0x5C0);
    b[1] = *(s64 *)(a + 0x5C8);
}

typedef struct VT14E {
    u8 pad[0x9C];
    void (*fn)(void *);
} VT14E;
typedef struct C14E {
    u8 pad[0x4C];
    VT14E *vt;
} C14E;

void func_0014E588(u8 *a, s32 *x, s32 *y) {
    C14E *c = *(C14E **)(a + 0x50);
    if (c != NULL) {
        if (c->vt->fn != NULL) {
            c->vt->fn(c);
            *x += *(s32 *)(a + 0x5A0) + *(s32 *)(a + 0x5D4);
            *y += *(s32 *)(a + 0x5A4) + *(s32 *)(a + 0x5D4);
        }
    } else {
        *x = 0;
        *y = 0;
    }
}
