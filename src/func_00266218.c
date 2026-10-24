s32 func_00266DA0(s32);
s32 func_002669C0(s32, void *);
s32 func_00266BE8(s32, void *);

s64 func_002662B0(s32 *p, s32 id, s32 arg) {
    s32 i;
    s32 *q = p + 10;
    for (i = 0; i < func_00266DA0(*p); i++) {
        if (q[0] == id) {
            q[-1] = 0;
            q[0] = 0;
        }
        q += 2;
    }
    return func_002669C0(arg, p);
}

s64 func_00266218(s32 *p, s32 arg) {
    s32 i;
    s32 *q = p + 10;
    for (i = 0; i < func_00266DA0(*p); i++) {
        if (q[-1] == 3) {
            func_00266218((s32 *)q[0], arg);
        }
        q += 2;
    }
    return func_00266BE8(arg, p);
}

typedef struct { s32 f0, f4, f8, fC; } Ent0042F440;
extern Ent0042F440 D_0042F440[];
extern s32 D_00486CD0;
extern s32 D_00486CD4;

void func_0025C790(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 idx = D_00486CD4;
    s32 next = idx + 1;
    s32 i;
    if (next == 0x100) next = 0;
    D_0042F440[idx].f0 = a0;
    D_0042F440[idx].f4 = a1;
    D_0042F440[idx].f8 = a2;
    D_0042F440[idx].fC = a3;
    D_00486CD4 = next;
    if (next == D_00486CD0) {
        i = 0xFF;
        do {
            i -= 0x20;
        } while (i >= 0);
    }
}
