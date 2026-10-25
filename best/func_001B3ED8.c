typedef struct { s32 pad0; s32 f4; s32 f8; s32 fC; s64 f10; s32 f18; s32 f1C; } Req;
typedef struct { s32 f0; s32 f4; } Ent;
typedef struct { s32 attr; s32 cnt; s32 opt; s32 pad; s32 x; s32 y; } Sema;
extern char func_01000000[];
extern char func_01109848[];
extern s32 jtbl_004C006C[];
s32 CreateSema(void *);
void DeleteSema(s32);
void SignalSema(s32);
void WaitSema(s32);
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);
Ent *func_001B10C0(void);
void func_001B1538(s32);
void func_001B1568(void);
#define G(o) (*(s32 *)((char *)jtbl_004C006C + (o)))

s64 func_001B3ED8(s64 a1, s32 a2) {
    Sema sema;
    s64 res;
    Req *req = (Req *)(func_01000000 + 0x109800);
    Ent *e;
    s32 flags, sid;
    char *p16, *p22;
    s32 i;
    e = func_001B10C0();
    func_001B1538(0x16);
    if (G(0x3F30) == 0) {
        func_001B1568();
        return -1;
    }
    if (e == 0 || (flags = e->f4) == 0) {
        func_001B1568();
        return -9;
    }
    req->f10 = a1;
    req->fC = e->f0;
    req->f18 = a2;
    req->f1C = ((char *)e - (func_01109848 + 0x14B8)) >> 4;
    sema.cnt = 1;
    sema.opt = 0;
    sema.y = 0;
    sid = CreateSema(&sema);
    req->f8 = 8;
    req->f4 = (s32)&res;
    *(s32 *)req = sid;
    if (flags & 0x8000) {
        WaitSema(G(0x3F40));
        p22 = func_01109848 + 0x16B8;
        if (G(0x3EAC) == -1) {
            p16 = (char *)0x01110000;
            G(0x3EAC) = *(s32 *)req;
            *(s32 *)req = -*(s32 *)req;
        } else {
            p16 = func_01109848 + 0xBF8;
            for (i = 1; i < 0x20; i++) {
                if (*(s32 *)((char *)jtbl_004C006C + 0x3EAC + i * 4) == -1) {
                    *(s32 *)((char *)jtbl_004C006C + 0x3EAC + i * 4) = *(s32 *)req;
                    *(s32 *)req = -*(s32 *)req;
                    break;
                }
            }
        }
        SignalSema(G(0x3F40));
    } else {
        p22 = func_01109848 + 0x16B8;
        p16 = func_01109848 + 0xBF8;
    }
    if (func_001B08B0(p22, 0x16, 0, req, 0x20, p16, 4, 0, 0) < 0) {
        DeleteSema(sid);
        func_001B1568();
        return -0xB;
    }
    i = *(s32 *)((s32)p16 | 0x20000000);
    func_001B1568();
    if (i == 0) {
        DeleteSema(sid);
        return -0xB;
    }
    if (flags & 0x8000) {
        DeleteSema(sid);
        return 0;
    }
    WaitSema(sid);
    DeleteSema(sid);
    return res;
}
