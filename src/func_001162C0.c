typedef struct { s32 type; s64 p; } Arg_116;
typedef struct { u8 pad[0xC]; s32 c; u8 pad2[0xC]; s32 d; } Obj_116;
typedef struct { s32 *list; s32 x[2]; s32 n; } L_116;
extern u8 D_001BB740[];
extern L_116 D_010C2B48;
void func_00107C00(void *, void *);
void ovl_ntgui2_func_00108E58(void *, void *, void *, s32, s32);
s32 func_0014CBF4(s32, Arg_116 *, s32);

void func_001162C0(s32 unused, Obj_116 *o) {
    Arg_116 args[10];
    u8 out[16];
    u8 a[16];
    s32 i;
    func_00107C00(a, D_001BB740);
    ovl_ntgui2_func_00108E58(out, a, D_001BB740, o->d, o->c);
    args[0].type = 200;
    args[0].p = (s32)out;
    for (i = 0; i < D_010C2B48.n; i++)
        func_0014CBF4(D_010C2B48.list[i], args, 1);
}
