typedef struct { s64 a, b; } V;
typedef struct { s32 ptr; volatile s64 q8; volatile s32 a10, a14; volatile u8 a18; u8 pad[7]; volatile s64 va, vb; } Out;
typedef struct { u8 p[0x11]; u8 cnt; u8 pad[2]; volatile u16 h14, h16; volatile s64 q18; u8 pad2[0x10]; V v; } Item;
extern s32 func_001882A8(s32);
extern Item *func_00188378(s32, s32);
extern void func_00188FA0(void *, s32, s32);
extern void func_001A1568(void *, s32, void *);
extern void func_001A2850(void *);
extern char D_004CDC18[], D_004CDC28[], D_004CDC30[], D_004CDCA0[];
extern s32 D_010F4480[];
s32 func_00186038(Out *o) {
    Item *i;
    if (!o) func_001A1568(D_004CDC18, 0x184, D_004CDC28);
    if (!func_001882A8(o->ptr)) { func_001A2850(D_004CDC30); return 1; }
    i = func_00188378(o->ptr, 0);
    if (!i) { func_001A2850(D_004CDCA0); return 1; }
    func_00188FA0(i, D_010F4480[3], D_010F4480[4]);
    o->q8 = i->q18;
    o->a10 = i->h14;
    o->a14 = i->h16;
    {
        u8 n = i->cnt - 1;
        o->a18 = n;
        if (n) { V *p = &i->v; o->va = p->a; o->vb = p->b; }
        else { o->vb = 0; o->va = 0; }
    }
    return 0;
}
