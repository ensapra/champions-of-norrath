typedef struct { s32 a, b, c; } T12;
typedef struct {
    u8 pad0[0x48];
    u8 *vt;
    u8 pad1[0x110 - 0x4C];
    T12 t;
    u8 pad2[0x2CC - 0x11C];
    s32 cnt;
} O113128;
s32 func_001102B8(void *, T12 *);
T12 func_0010D250(void *, s32);
void func_00113460(void *);

s32 func_00113128(O113128 *o) {
    T12 dummy, tmp, r, r2;
    tmp = o->t;
    if (func_001102B8(o, &tmp)) {
        u8 *e = o->vt + 0xB8;
        ((void (*)(void *, s32))*(void **)(e + 4))((u8 *)o + *(s16 *)e, 0);
    }
    if (o->cnt >= 4) {
        func_00113460(o);
        r = func_0010D250(o, 0x12C);
        r2 = r;
        o->t = r2;
        return 0;
    }
    return 1;
}
