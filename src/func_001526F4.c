typedef struct { s32 pad0, pad4; void (*fn)(void *, s32); s32 off; s32 arg; } Ent;
extern void func_00152920(void);
extern void func_001528C4(void);
extern Ent *func_001A1668(void *, s32, s32, s32, void *);

s32 func_001526F4(s32 a, s32 b, s32 c, s32 d) {
    Ent key;
    Ent *e;
    key.pad0 = a;
    e = func_001A1668(&key, c, d, 0x14, func_00152920);
    if (e && (void *)e->fn == (void *)func_001528C4) return b + e->off;
    return 0;
}
