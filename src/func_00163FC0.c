/* identical to func_00163F2C (matched), with its names changed by decompdecomp */
extern u8 D_001C80A0[];
extern s32 func_0014D370(s32, s32);
extern s32 func_0014CA30(s32);
extern s32 func_0016FB28(s32);
extern s32 func_0016386C(void *, s32);
void func_00164064(void *arg0);

typedef struct {
    char pad0[0x920];
    s32 f920, f924, f928, f92C, f930, f934, f938, f93C;
    char pad1[4];
    s32 f944, f948, f94C;
} S;

s32 func_00163FC0(S *p, s32 arg1) {
    u8 *q = D_001C80A0;
    q = *(u8 **)(q + 0x1350);
    ((void (*)(S *, s32))q)(p, arg1);
    func_0014D370(p->f92C, arg1);
    func_0014D370(p->f920, arg1);
    func_0014D370(p->f924, arg1);
    func_0014D370(p->f928, arg1);
    func_0014D370(p->f930, arg1);
    func_0014D370(p->f934, arg1);
    func_0014D370(p->f938, arg1);
    return func_0014D370(p->f93C, arg1);
}

void func_00163E3C(S *p) {
    u8 *q = D_001C80A0;
    func_00164064(p);
    q = *(u8 **)(q + 0x12C4);
    ((void (*)(S *))q)(p);
    if (p->f94C != 0 || p->f944 != 0) {
        func_0014CA30(p->f92C);
        func_0014CA30(p->f920);
        func_0014CA30(p->f924);
        func_0014CA30(p->f928);
        func_0014CA30(p->f930);
        func_0014CA30(p->f934);
        func_0014CA30(p->f938);
        func_0014CA30(p->f93C);
    }
}

s64 func_00164538(S *p) {
    if (func_0016FB28((s32)p + 0x950) != 0) {
        p->f94C = 0;
        return func_0016386C(p, p->f948);
    }
    p->f94C = 0;
    return func_0016386C(p, p->f948);
}
