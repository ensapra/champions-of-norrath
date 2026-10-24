s32 func_00151FA4(void *);
s32 func_00151280(s32 a0, u8 *a1, s32 a2, s32 a3, u8 *a4, s32 a5) {
    s32 t;
    s32 r;
    void *v = *(void **)(a4 + 0x4C);
    v = *(void **)((u8 *)v + 0xD8);
    t = ((s32 (*)(void *, s32, s32, s32, s32))v)(a4, a2, a3, *(s32 *)(a1 + 0x14), *(s32 *)(a1 + 0x18));
    if (func_00151FA4(a1) != 0 && a5 == 0 && t == 0) {
        r = 0;
    } else {
        v = *(void **)(a4 + 0x4C);
        v = *(void **)((u8 *)v + 0xBC);
        r = ((s32 (*)(void *, void *, s32, s32))v)(a4, a1, a2, a3);
    }
    return r;
}
extern s32 D_0047FC08;
s32 func_0014B41C(void *, s32);
u8 *func_001515B8(void *, u8 *);
void *func_0014D29C(void *);
void func_0014F3F0(void *, void *);
void func_00151340(u8 **p) {
    u8 *e;
    if (*p == 0) return;
    if (func_0014B41C(*p, D_0047FC08) != 0) {
        for (e = func_001515B8(*p, 0); e != 0; e = func_001515B8(*p, e)) {
            if (*(s32 *)(e + 0x10) == *(s32 *)(*p + 0x864)) {
                func_00151340((u8 **)(*p + 0x864));
                break;
            }
        }
    }
    func_0014F3F0(func_0014D29C(*p), *p);
    *p = 0;
}
