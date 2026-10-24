typedef struct{s32 size;s32 count;u8 *rd;u8 *wr;u8 data[1];}Ring;
void func_001AE898(Ring *r){ r->count++; r->wr++; if (r->wr == r->data + r->size) r->wr = r->data; }
extern u8 *D_004804D0;
void func_0019BDFC(void) {
    void *p = D_004804D0;
    p = *(void **)((u8 *)p + 0x78);
    ((void (*)(void))p)();
}
extern s32 D_003642D0;
void func_0019C240(void *, void *, s32);
void func_0019BDBC(u8 a, u8 b, u32 c) {
    struct { u8 z; u8 a; u8 b; u8 pad; s32 c; } m;
    m.a = a; m.b = b; m.c = (u16)c; m.z = 0;
    func_0019C240((u8 *)&D_003642D0 + 0x2040, &m, 0x10);
}
extern u8 D_00366310[];
void func_0019C334(void *, void *, s32, s32);
void func_0019C954(s32, u32, u32, u32);
void func_0019C79C(s32, u32, u32, s32);
void func_0019BD98(s32, s32, s32, s32);
void func_0019BCF8(void) {
    struct { u8 t; u8 a; u8 b; u8 pad; u32 w; u32 x; u32 y; } m;
    for (;;) {
        func_0019C334(D_00366310, &m, 0x10, 0);
        switch (m.t) {
        case 0:
            func_0019C954(0, m.a, m.b, *(u16 *)&m.w);
            break;
        case 1:
            func_0019C79C(0, *(u16 *)&m.b, (u8)m.w, m.x);
            break;
        case 2:
            func_0019BD98(0, m.w, m.x, m.y);
            break;
        }
    }
}
