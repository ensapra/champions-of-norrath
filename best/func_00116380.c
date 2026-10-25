struct Str { s32 a[4]; };
struct Arg { s64 val; s32 type; s32 pad; };
struct Msg { s32 id; s32 pad; Arg args[9]; s32 pad2[2]; };
struct List { s32 *list; s32 pad[2]; s32 count; };
struct P { char pad[0xC]; s32 c; char pad2[0xC]; s32 d; };
extern "C" {
extern char D_001BB740[];
extern List D_010C2B48[];
extern s32 D_010C2B64[];
void func_00107C00(Str *, char *);
Str ovl_ntgui2_func_00108E58(char *, Str *, s32, s32);
void func_0014CBF4(s32, Msg *, s32);

void func_00116380(s32 unused, P *p) {
    Msg msg;
    s32 i;
    Arg *a;
    Str t1;
    func_00107C00(&t1, D_001BB740);
    Str s1 = ovl_ntgui2_func_00108E58(D_001BB740, &t1, p->d, p->c);
    msg.id = 0xC8;
    a = &msg.args[0];
    a->val = (s64)(s32)&s1;
    for (i = 0; i < D_010C2B48->count; i++) {
        func_0014CBF4(D_010C2B48->list[i], &msg, 1);
    }
    Str t2;
    func_00107C00(&t2, D_001BB740);
    Str s2 = ovl_ntgui2_func_00108E58(D_001BB740, &t2, p->d, p->c);
    msg.id = 0x65;
    a->val = (s64)(s32)&s2;
    msg.args[1].val = (s64)(s32)&s2;
    msg.args[0].type = 0x60;
    func_0014CBF4(D_010C2B64[0], &msg, 2);
}
}
