typedef struct { s32 pad0, pad4; void (*fn)(void *, s32); s32 off; s32 arg; } Ent;
extern void func_00152920(void);
extern void func_001528C4(void);
extern s32 func_001A28C0(s32, s32, s32, void *);
extern Ent *func_001A1668(void *, s32, s32, s32, void *);

void func_00152668(s32 a, s32 b) {
    func_001A28C0(a, b, 0x14, func_00152920);
}

void func_00152688(u8 *base, Ent *e, s32 n) {
    s32 i;
    for (i = 0; i < n; i++, e++) {
        if (e->arg != 0 && e->fn != 0) {
            e->fn(base + e->off, e->arg);
        }
    }
}

s32 func_001526F4(s32 a, s32 b, s32 c, s32 d) {
    s32 key = a;
    Ent *e = func_001A1668(&key, c, d, 0x14, func_00152920);
    if (e == 0) return 0;
    if ((void *)e->fn != (void *)func_001528C4) return 0;
    return b + e->off;
}
