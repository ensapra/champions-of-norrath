typedef struct __attribute__((packed, aligned(4))) { u64 a; s32 b; } P12;
extern s32 func_001441B8(s32);
extern void func_002B6CA0(s32, s32, s32, s32);

s32 func_002B93F0(s32 a, s32 b, s32 c, P12 *d) {
    volatile P12 copy = *d;
    s32 r = func_001441B8(0x380);
    if (r) func_002B6CA0(r, b, c, a);
    return r;
}

typedef struct {
    u8 pad[0x0E];
    volatile s16 f0E, f10, f12, f14, f16, f18, f1A, f1C, f1E, f20;
    u8 pad2[2];
    volatile f32 f24, f28, f2C, f30, f34;
} ObjParam;

f32 D_00482EC0;
f32 D_00482EC4;

void func_002B9398(ObjParam *o) {
    f32 a = D_00482EC0;
    f32 b = D_00482EC4;
    o->f30 = b;
    o->f18 = 0x26;
    o->f24 = 2.0f;
    o->f1A = 6;
    o->f1C = 1;
    o->f2C = a;
    o->f14 = 5;
    o->f1E = 4;
    o->f0E = 1;
    o->f10 = 1;
    o->f28 = a;
    o->f12 = 5;
}

void func_002B6C68(void *arg0, s32 arg1) {
    char *p = (char *)(*(s32 *)((char *)arg0 + 0x60)) + 0x58;
    void (*fn)(void *, s32, s32) = *(void (**)(void *, s32, s32))(p + 4);
    fn((char *)arg0 + *(s16 *)p, 0, arg1);
}
