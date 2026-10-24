typedef struct __attribute__((packed, aligned(1))) { u64 a; } P8;
extern u8 D_00444850[];
void func_002D1108(P8 *p) {
    *(P8 *)D_00444850 = *p;
}

typedef struct __attribute__((packed, aligned(4))) { u64 a; s32 b; } P12;
s32 func_001441B8(s32);
void func_0028C670(s32, void *, s32, s32, s32, s32);
s32 func_0028D8B0(s32 a0, s32 a1, s32 a2, P12 *a3, s16 a4) {
    P12 copy = *a3;
    s32 x = func_001441B8(0x198);
    if (x) func_0028C670(x, &copy, a4, a2, a0, a1);
    return 0;
}

f32 D_00482600;
f32 D_00482604;
f32 D_00482608;
f32 D_0048260C;
f32 D_00482610;
typedef struct {
    u8 pad[0x0E];
    volatile s16 f0E, f10, f12, f14, f16, f18, f1A, f1C, f1E, f20;
    u8 pad2[0x1A];
    volatile f32 f24, f28, f2C, f30, f34;
} Obj;
void func_0028D840(char *arg0) {
    f32 a = D_00482600;
    f32 b = D_00482604;
    f32 c = D_00482608;
    f32 d = D_0048260C;
    f32 e = D_00482610;
    s16 *o = (s16 *)arg0;
    *(s16 *)(arg0 + 0x18) = 0x39;
    *(volatile f32 *)(arg0 + 0x50) = e;
    *(volatile f32 *)(arg0 + 0x24) = a;
    *(s16 *)(arg0 + 0x10) = 5;
    *(volatile f32 *)(arg0 + 0x28) = b;
    *(s16 *)(arg0 + 0x20) = 0x20;
    *(volatile f32 *)(arg0 + 0x34) = c;
    *(s16 *)(arg0 + 0x42) = 2;
    *(volatile f32 *)(arg0 + 0x4C) = d;
    *(s16 *)(arg0 + 0x3A) = 0xA;
    *(s16 *)(arg0 + 0x44) = 1;
    *(s16 *)(arg0 + 0xE) = 1;
    *(s16 *)(arg0 + 0x1A) = 1;
    *(s16 *)(arg0 + 0x16) = 1;
    *(s16 *)(arg0 + 0x38) = 1;
}
