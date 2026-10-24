extern u8 func_001C8098[];
extern s32 func_0014D328(s32, s32);
extern s32 func_0014CA30(s32);
extern void func_001640C0(void *);
extern s32 func_0016FB28(s32);
extern void func_0016386C(void *, s32);
void func_00164064(void *arg0);
void func_00164538(void *arg0);

typedef struct {
    char pad0[0x920];
    s32 f920, f924, f928, f92C, f930, f934, f938, f93C;
    char pad1[4];
    s32 f944, f948, f94C;
} S;

s32 func_00163F2C(S *p, s32 arg1) {
    (*(void (**)(S *, s32))((char *)func_001C8098 + 0x1350))(p, arg1);
    func_0014D328(p->f92C, arg1);
    func_0014D328(p->f920, arg1);
    func_0014D328(p->f924, arg1);
    func_0014D328(p->f928, arg1);
    func_0014D328(p->f930, arg1);
    func_0014D328(p->f934, arg1);
    func_0014D328(p->f938, arg1);
    return func_0014D328(p->f93C, arg1);
}

void func_00163E3C(S *p) {
    func_00164064(p);
    (*(void (**)(S *))((char *)func_001C8098 + 0x12C4))(p);
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

void func_00164064(void *arg0) {
    S *p = arg0;
    switch (p->f94C) {
    case 0:
        break;
    case 1:
        func_001640C0(p);
        break;
    default:
        func_00164538(p);
        break;
    }
}

void func_00164538(void *arg0) {
    S *p = arg0;
    s32 t = p->f948;
    if (func_0016FB28((s32)p + 0x950) != 0) {
        p->f94C = 0;
        func_0016386C(p, t);
        return;
    }
    p->f94C = 0;
    func_0016386C(p, t);
}
