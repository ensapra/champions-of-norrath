typedef struct { volatile s32 state, value, size, active, t10, t14; } G;
extern G D_00790FF0;
extern s32 D_004843E4;
extern volatile u8 D_0048443C;
extern s32 D_004844A8;
extern s32 D_004844C4;
extern s32 D_004844C8;
extern u8 D_0037F9E0[];
void func_0013CE70(void);
s32 func_0018FAC0(s32, s32, s32);
void FlushCache_2(s32);
void func_0015FAF0(void);

void func_00191200(s32 a, s32 b) {
    G *g = &D_00790FF0;
    G *h;
    s32 sz;
    s32 v;
    u32 p;
    func_0013CE70();
    func_0018FAC0(a, b, g->size);
    FlushCache_2(0);
    func_0015FAF0();
    g->active = 1;
    h = g;
    sz = 0;
    if (g->state) {
        g->t14 = g->size;
        g->t10 = g->value;
    } else {
        g->t14 = 0;
        g->t10 = 0;
    }
    p = ((u32)D_0037F9E0 + (D_004844A8 & 1) * 0x445C0) | 0x30000000;
    v = D_004843E4;
    h->state = 0;
    h->state = 1;
    D_004844C8 = p;
    D_004844C4 = p;
    if (v == 0) sz = (s8)D_0048443C;
    h->size = sz;
    g->value = v;
}
