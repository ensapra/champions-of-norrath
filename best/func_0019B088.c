typedef struct { s32 size; s32 count; s32 pad; u8 *cur; } Ring;
void func_001AE898(Ring *r) {
    r->count++;
    r->cur++;
    if (r->cur == (u8 *)r + r->size + 0x10)
        r->cur = (u8 *)r + 0x10;
}

extern u8 D_00366310[];
void func_0019C240(void *, void *, s32);
typedef struct { u8 type; s32 a; s32 b; s32 c; } MsgA;
void func_0019B0C4(s32 a, s32 b, s32 c) {
    MsgA m;
    m.type = 2;
    m.a = a;
    m.b = b;
    m.c = c;
    func_0019C240(D_00366310, &m, 0x10);
}

typedef struct { u8 type; u16 h; u8 c; s32 d; } MsgB;
void func_0019B088(s32 a, u8 b, u16 c) {
    MsgB m;
    m.type = 1;
    m.h = c;
    m.c = b;
    m.d = a;
    func_0019C240(D_00366310, &m, 0x10);
}

typedef struct { u8 a; u8 pad[3]; u8 b; u8 pad2[3]; s32 n; u16 v[1]; } Lst;
extern void *D_004804D0;
extern u8 jtbl_004C006C[];
void func_001A1568(void *, s32, void *);
void func_0019BDBC(u8, u8, u16);
void func_0019B100(Lst *l) {
    s32 i;
    if (l == 0) {
        func_001A1568(jtbl_004C006C + 0xF404, 0x152, jtbl_004C006C + 0xF414);
        return;
    }
    for (i = 0; i < l->n; ) {
        void *p = D_004804D0;
        s32 r;
        p = *(void **)((u8 *)p + 0x74);
        r = ((s32 (*)(void))p)();
        i++;
        if (r) { func_0019B0C4(0, 0, 0); return; }
        func_0019BDBC(l->a, l->b, l->v[i - 1]);
    }
}
