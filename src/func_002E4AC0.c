typedef struct {
    s32 count;
    s32 max_count;
    s32 init_count;
    s32 wait_threads;
    u32 attr;
    u32 option;
} SemaParam_2E4AC0;

typedef struct Req2E4AC0 {
    s32 pad0[5];
    s32 self;
    s32 f18;
    s32 owner;
    s32 f20;
    s32 f24;
} Req2E4AC0;

typedef struct Ctx2E4AC0 {
    s32 req;
    s32 f4;
    s32 sema;
    s32 pad0C;
    s32 f10;
    s32 pad14[4];
    s32 f24;
    s32 sema28;
    s32 result;
} Ctx2E4AC0;

extern char D_0047BDE8[];
extern char D_008E8C00[];
s32 func_002D70D0(const char *, ...);
s32 WaitSema_2(s32);
s32 CreateSema_2(SemaParam_2E4AC0 *);
s32 DeleteSema_2(s32);
Req2E4AC0 *func_002E4700(void *);
void func_002E47A8(Req2E4AC0 *);
s32 func_002D7690(u32, void *, s32, s32, s32, s32);

s32 func_002E4AC0(Ctx2E4AC0 *ctx, s32 mode)
{
    SemaParam_2E4AC0 sp;
    Req2E4AC0 *req;
    s32 sema;
    s32 ret;

    if (mode != 0) {
        func_002D70D0(D_0047BDE8);
        return -1;
    }
    WaitSema_2(ctx->sema28);
    req = func_002E4700(D_008E8C00);
    ret = -1;
    if (req != NULL) {
        ctx->f4 = req->f18;
        ctx->req = (s32)req;
        req->f20 = ctx->f10;
        req->self = (s32)req;
        req->owner = (s32)ctx;
        req->f24 = ctx->f24;
        sp.max_count = 1;
        sp.init_count = 0;
        sp.option = 0;
        sema = CreateSema_2(&sp);
        ctx->sema = sema;
        if (sema < 0) {
            func_002E47A8(req);
            return -3;
        }
        if (func_002D7690(0x8000001D, req, 0x40, 0, 0, 0) == 0) {
            func_002E47A8(req);
            DeleteSema_2(sema);
            return -2;
        }
        WaitSema_2(sema);
        DeleteSema_2(sema);
        DeleteSema_2(ctx->sema28);
        ret = ctx->result;
    }
    return ret;
}
