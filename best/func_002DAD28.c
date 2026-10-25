typedef struct { s32 sema; s32 *ret; s32 n; s32 a; s32 b; } Req2;
typedef struct { s32 a; s32 b; } Info2;
extern s32 D_004449F4[];
extern Req2 D_008E04C0;
extern u8 D_008E1100[];
extern u8 D_008E1BC0[];
s32 CreateSema_2(void *);
s32 DeleteSema_2(s32);
s32 WaitSema_2(s32);
s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, void *, s32);
Info2 *func_002D8A80(s32);
void func_002D8EF8(s32);
void func_002D8F28(void);

s32 func_002DAD28(s32 arg0, s32 arg1)
{
    Req2 *q = &D_008E04C0;
    Info2 *info;
    s32 sp[6];
    s32 ret[4];
    s32 sema;
    s32 r;

    info = func_002D8A80(arg0);
    func_002D8EF8(0xB);
    if (D_004449F4[0] == 0) {
        func_002D8F28();
        return -1;
    }
    if (info == 0 || info->b == 0) {
        func_002D8F28();
        return -9;
    }
    q->a = info->a;
    q->b = arg1;
    sp[1] = 1;
    sp[2] = 0;
    sp[5] = 0;
    sema = CreateSema_2(sp);
    q->sema = sema;
    q->ret = ret;
    q->n = 4;
    if (func_002D8270(D_008E1BC0, 0xB, 0, q, 0x20, D_008E1100, 4, 0, 0) < 0) {
        WaitSema_2(sema);
        func_002D8F28();
        return -0xB;
    }
    r = *(s32 *)((u32)D_008E1100 | 0x20000000);
    func_002D8F28();
    if (r == 0) {
        DeleteSema_2(sema);
        return -0xB;
    }
    WaitSema_2(sema);
    DeleteSema_2(sema);
    return ret[0];
}
