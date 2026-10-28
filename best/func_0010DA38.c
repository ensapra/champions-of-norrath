typedef struct { s32 type; s32 pad; s64 p; } Arg;
typedef struct { u8 pad[0xC]; s32 c; u8 pad2[0xC]; s32 d; } Obj;
extern u8 D_001BB740[];
extern s32 D_010C21F8[];
extern s32 D_001BD8C0[];
void func_00107C00(void *, void *);
void ovl_ntgui2_func_00108E58(void *, void *, void *, s32, s32);
void func_0014CBF4(s32, Arg *, s32);

void func_0010DA38(s32 unused, Obj *o) {
    Arg args[10];
    u8 out[16];
    u8 a[16];
    Arg *ap;
    func_00107C00(a, D_001BB740);
    ovl_ntgui2_func_00108E58(out, a, D_001BB740, o->d, o->c);
    ap = args;
    ap->type = 200;
    func_0014CBF4(D_010C21F8[0], (ap->p = (s32)out, ap), 1);
    if (D_001BD8C0[0])
        func_0014CBF4(D_010C21F8[1], args, 1);
}
