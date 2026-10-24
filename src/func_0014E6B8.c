void func_0014E6B8(u8 *a, s64 *b) {
    s64 t;
    t = *(s64 *)(a + 0x5C0);
    b[0] = t;
    t = *(s64 *)(a + 0x5C8);
    b[1] = t;
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
    s32 v;
    if (c != NULL) {
        if (c->vt->fn == NULL) {
            return;
        }
        c->vt->fn(c);
        *x += *(s32 *)(a + 0x5A0) + *(s32 *)(a + 0x5D4);
        v = *y + (*(s32 *)(a + 0x5A4) + *(s32 *)(a + 0x5D4));
    } else {
        *x = 0;
        v = 0;
    }
    *y = v;
}
