typedef struct Req { s32 sema; s32 *p; s32 n; s32 arg; u8 str[0x400]; } Req;
typedef struct SemaParam { s32 a; s32 b; s32 c; s32 d; s32 e; s32 f; s32 g; s32 h; } SemaParam;
extern Req D_01109800[];
extern u8 D_0110A440[];
extern u8 D_0110AF00[];
extern s32 jtbl_004C006C[];
s32 CreateSema(void *);
void DeleteSema(s32);
void WaitSema(s32);
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);
void func_001B1538(s32);
void func_001B1568(void);
void func_001B1668(void);

s32 func_001B34C0(u8 *src, s32 arg) {
    SemaParam sp;
    s32 res[4];
    Req *r = D_01109800;
    s32 i, sema, v;
    u8 c;
    func_001B1538(0xC);
    if (*(s32 *)((u8 *)jtbl_004C006C + 0x3F30) == 0) func_001B1668();
    c = src[0];
    i = 0;
    r->str[0] = c;
    if (c) {
        do {
            i++;
            if (i >= 0x400) break;
            c = src[i];
            r->str[i] = c;
        } while (c);
    }
    if (i == 0x400) {
        r->str[0x3FF] = 0;
        i = 0x3FF;
    }
    r->arg = arg;
    sp.b = 1; sp.c = 0; sp.f = 0;
    sema = CreateSema(&sp.a);
    r->p = res;
    r->sema = sema;
    r->n = 4;
    if (func_001B08B0(D_0110AF00, 0xC, 0, D_01109800, i + 0x11, D_0110A440, 4, 0, 0) < 0) {
        DeleteSema(sema);
        func_001B1568();
        return -0xB;
    }
    v = *(s32 *)((u32)D_0110A440 | 0x20000000);
    func_001B1568();
    if (v == 0) {
        DeleteSema(sema);
        return -0xB;
    }
    WaitSema(sema);
    DeleteSema(sema);
    return res[0];
}
