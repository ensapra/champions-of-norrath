typedef struct { s32 k; s64 v; } KV;
void func_0016DDAC(void *);
void *func_0011B9A8(u32);
void *func_00164B70(s32, s32, void *, s32);
void func_0016DB4C(void *);
void func_0014D3B8(void *);
void func_0016D5F8(u8 *o) {
    KV t[64];
    s32 n;
    s32 i = 0;
    *(s32 *)(o + 0x4D0) = 0;
    func_0016DDAC(o);
    *(void **)(o + 0x980) = func_0011B9A8((((u32)*(s32 *)(o + 0x9C4) * 4 + 15) >> 4) << 4);
    n = 0;
    t[n].k = 9;  t[n].v = 0; n++;
    t[n].k = 0xB; t[n].v = 0; n++;
    t[n].k = 0x15; t[n].v = 0; n++;
    t[n].k = 0xE; t[n].v = *(s32 *)(o + 0x984); n++;
    t[n].k = 0x10; t[n].v = *(s32 *)(o + 0x988); n++;
    t[n].k = 0x20; t[n].v = 1; n++;
    t[n].k = 0x48; t[n].v = *(s32 *)(o + 0x9C0); n++;
    for (i = 0; i < *(s32 *)(o + 0x9C4); i++)
        (*(void ***)(o + 0x980))[i] = func_00164B70(0, 0, t, n);
    func_0016DB4C(o);
    for (i = 0; i < *(s32 *)(o + 0x9C4); i++)
        func_0014D3B8((*(void ***)(o + 0x980))[i]);
}
