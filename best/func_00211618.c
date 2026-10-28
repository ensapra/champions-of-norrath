typedef struct VE { s16 off; s16 pad; void (*fn)(); } VE;
typedef struct Vt { s32 a; s32 (*f1)(); s32 pad[2]; VE e10; VE e18[1]; u8 pad2[0x98]; VE eB8; } Vt;
typedef struct Item { u8 pad[0xC]; s32 flags; u8 pad2[0x38]; Vt *vt; } Item;
typedef struct Obj { u8 pad[0x48]; Vt *vt; u8 pad2[0x1F0]; s16 s23C; s16 pad3; s32 f240; } Obj;
s32 func_00113738(void);
s32 func_00153FA8(void *);
s32 func_002FD2E0(s32, s32);
s32 func_002FF3C8(void);
void func_00211618(Obj *a, Item **b) {
    s32 i, keep, r, t, off, ok;
    Item *e;
    Vt *v;
    if (a->s23C == 13) {
        keep = 1;
        i = 0;
        off = 0;
        if (b[0]) {
            do {
                r = (*(Item **)((u8 *)b + off))->vt->f1();
                if (a) t = a->vt->f1();
                else t = func_002FF3C8();
                ok = func_002FD2E0(r, t);
                ok ^= 1;
                if (ok) {
                    Item **q = (Item **)((u8 *)b + off);
                    if (!((*q)->flags & 4)) keep = 0;
                    r = func_00153FA8(a);
                    e = *q;
                    v = e->vt;
                    ((void (*)(void *, void *, s32, f32))v->e10.fn)((u8 *)e + v->e10.off, a, 0x40001, (f32)((r & 7) + 4));
                }
                i++;
                off = i << 2;
            } while (*(Item **)((u8 *)b + off));
        }
        if (a->f240 && !keep) {
            VE *x = &a->vt->eB8;
            ((void (*)(void *, s32))x->fn)((u8 *)a + x->off, 3);
        }
    } else
        func_00113738();
}
