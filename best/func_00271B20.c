typedef struct Obj { char pad[0x48]; char *vt; char pad2[0x184-0x4C]; s32 flag; } Obj;
typedef struct P {
    char pad0[0x334]; f32 sum; char pad2[0x3E8-0x338];
    s32 n; char pad3[0x41C-0x3EC]; Obj *slots[1];
} P;
extern s32 func_001441B8(s32, void *);
extern void func_00276FC8(s32, s32, s32, void *, s32, f32);
void func_00271B20(P *p, s32 a1, s32 a2, f32 f0, f32 f1, f32 f2, f32 f3) {
    char *q = (char *)p + 0xC;
    Obj *cur;
    Obj **slot;
    s32 obj, i, n, idx, so;
    f32 *v;
    cur = *(Obj **)(q + p->n * 4 + 0x410);
    if (cur) {
        char *t = cur->vt + 8;
        ((void (*)(void *, s32))*(u32 *)(t + 4))((char *)cur + *(s16 *)t, 3);
    }
    n = p->n;
    so = n * 4 + 0x410;
    slot = (Obj **)(q + so);
    idx = n * 12 + 0x4D0;
    v = (f32 *)((char *)p + idx);
    v[2] = f2;
    v[1] = f1;
    *(f32 *)(q + idx) = f3;
    obj = func_001441B8(0x1B8, q + idx);
    if (obj) {
        func_00276FC8(obj, a1, a2, p, p->n++, f0);
    }
    *slot = (Obj *)obj;
    p->sum = 0;
    for (i = 0; i < p->n; i++) {
        if (p->slots[i]->flag) p->sum += 1.0f;
    }
}
