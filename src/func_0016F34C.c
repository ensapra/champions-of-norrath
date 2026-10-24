typedef struct { u64 a; u64 b; } V;
typedef struct { s32 type; s64 ptr; } Ev;
typedef struct {
    u8 pad0[0x918];
    s32 side;
    u8 pad1[0x960 - 0x91C];
    V v960;
    u8 pad2[0x980 - 0x970];
    s32 q980;
    s32 q984;
    s32 flag;
    u8 pad3[0x9C0 - 0x98C];
    V v9C0;
    V v9D0;
    V v9E0;
    V v9F0;
    V vA00;
} Obj;
extern u8 func_001C98F0[];
s32 func_0014BA30(void *, void *);
void func_0014CBF4(s32, void *, s32);
void func_0014D418(void *);
void func_0016FB0C(void *);

#define BLK1(F, TY, SIDE) \
    if (func_0014BA30(&a->F, &b->F) == 0) { \
        t->F = a->F; \
        if (t->flag == 0) { \
            if (t->side == SIDE) { \
                ev[n].type = TY; \
                ev[n].ptr = (s64)&t->F; \
                n++; \
            } \
        } \
        r = 1; \
    }
#define BLK2(F, TY, SIDE) \
    if (func_0014BA30(&a->F, &b->F) == 0) { \
        t->F = a->F; \
        if (t->flag == 0) { \
            if (t->side == SIDE) { \
                ev2[n].type = TY; \
                ev2[n].ptr = (s64)&t->F; \
                n2++; \
            } \
        } \
        r = 1; \
    }

s32 func_0016F34C(Obj *t, Obj *a, Obj *b) {
    Ev ev[64];
    Ev ev2[64];
    s32 n = 0;
    s32 n2 = 0;
    s32 r;
    u8 *fp = func_001C98F0;
    fp = *(u8 **)(fp + 0x588);
    r = ((s32 (*)(void))fp)();
    if (a->side != b->side) {
        t->side = a->side;
        t->flag = 1;
        r = 1;
        func_0016FB0C((u8 *)t + 0x990);
        func_0014D418(t);
    }
    BLK1(v9D0, 0x12, 0)
    BLK1(v9C0, 0x12, 1)
    BLK1(v9F0, 0x39, 0)
    BLK1(v9E0, 0x39, 1)
    BLK2(v960, 0xC8, 0)
    BLK2(vA00, 0xC8, 1)
    if (n != 0) {
        func_0014CBF4(t->q984, ev, n);
        func_0014D418(t);
    }
    if (n2 != 0) {
        func_0014CBF4(t->q980, ev2, n2);
    }
    return r;
}
