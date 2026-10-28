typedef struct SReq { s32 *p0; s32 f4; s32 sema; s32 pad0C; s32 pad10; s32 f14; s32 gp; s32 f1C; s32 f20; s32 f24; } SReq;
typedef struct SNode { s32 pad[5]; struct SNode *self; s32 f18; SReq *req; s32 f20; s32 f24; s32 f28; s32 f2C; s32 f30; s32 f34; } SNode;
extern u8 D_008E0440[];
s32 CreateSema_2(void *);
void DeleteSema_2(s32);
void WaitSema_2(s32);
s32 func_002D7690(s32, void *, s32, s32, s32, s32);
void func_002D7858(s32, s32);
SNode *func_002D7AD0(void *);
void func_002D7B78(void *);
extern s32 gp_save;

s32 func_002D8270(SReq *r, s32 a1, s32 flags, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 sp0) {
    SNode *n;
    s32 sp[6];
    s32 s;
    n = func_002D7AD0(D_008E0440);
    if (n == 0) return -1;
    r->f20 = sp0;
    r->f4 = n->f18;
    r->p0 = (s32 *)n;
    r->f1C = a7;
    r->gp = gp_save;
    n->f20 = a1;
    n->f24 = a4;
    n->f28 = a5;
    n->f2C = a6;
    n->self = n;
    n->req = r;
    n->f34 = r->f24;
    if (!(flags & 2)) {
        if (a3 == a5) {
            func_002D7858(a3, a4 >= a6 ? a4 : a6);
        } else {
            if (a4 > 0) func_002D7858(a3, a4);
            if (a6 > 0) func_002D7858(a5, a6);
        }
    }
    if (flags & 1) {
        if (a7 == 0) n->f30 = 0;
        else n->f30 = 1;
        r->sema = -1;
        if (func_002D7690(0x8000000A, n, 0x40, a3, r->f14, a4) != 0) return 0;
        func_002D7B78(n);
        return -2;
    }
    sp[2] = 0;
    sp[1] = 1;
    s = CreateSema_2(sp);
    r->sema = s;
    if (s < 0) {
        func_002D7B78(n);
        return -3;
    }
    n->f30 = 1;
    if (func_002D7690(0x8000000A, n, 0x40, a3, r->f14, a4) == 0) {
        DeleteSema_2(r->sema);
        func_002D7B78(n);
        return -2;
    }
    WaitSema_2(r->sema);
    DeleteSema_2(r->sema);
    return 0;
}
