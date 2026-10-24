extern f32 D_004827F8, D_004827FC, D_00482800, D_00482818;
extern u8 D_008D6BE0[];
typedef struct __attribute__((packed, aligned(4))) {u64 a; s32 b;} P;
extern s32 func_001441B8(s32);
extern void func_00194300(void *);
extern void func_00298360(s32, s32, s32, s32);
void func_00180D78(void *, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, s32, s32, s32, s32, s32);

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    u16 unkC;
    volatile s16 f0E, f10, f12, f14, f16, f18, f1A, f1C, f1E, f20, f22;
    volatile f32 f24, f28, f2C, f30, f34;
} WepObj4;

void func_00298AA8(WepObj4 *a) {
    f32 g1 = D_004827F8;
    f32 one = 1.0f;
    f32 g2 = D_004827FC, g3 = D_00482800;
    a->f24 = g1;
    a->f34 = g3;
    a->f1A = 0xF;
    a->f28 = one;
    a->f1C = 0x28;
    a->f2C = g2;
    a->f16 = 1;
    a->f20 = 0x61;
    a->f0E = 1;
    a->f18 = 1;
    a->f10 = 1;
    a->f12 = 1;
}

void func_00299448(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 == 1) {
            func_00180D78(D_008D6BE0, 0x20, 0x5A, 0xC8, 0x7D, 0x80, 0x13, 0xF, 70.0f, 2.0f, D_00482818, 0x3F, 3, arg0, 9, 0);
        }
    }
}

s32 func_00298B00(s32 a, s32 b, s32 c, P *d) {
    volatile P copy = *d;
    s32 head;
    s32 *hp = &head;
    s32 r;
    r = func_001441B8(0x78);
    *hp = 0;
    if (r) func_00298360(r, b, c, a);
    func_00194300(hp);
    return r;
}
