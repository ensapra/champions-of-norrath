typedef struct {
    s32 count;
    s32 max_count;
    s32 init_count;
    s32 wait_threads;
    u32 attr;
    u32 option;
} SemaParam1B3368;

typedef struct {
    s32 sema;
    s32 *result;
    s32 size;
    s32 id;
    s32 arg;
    s32 pad[3];
} Req1B3368;

typedef struct {
    s32 id;
    s32 valid;
} Info1B3368;

s32 CreateSema(SemaParam1B3368 *);
s32 DeleteSema(s32);
s32 WaitSema(s32);
Info1B3368 *func_001B10C0(s32);
void func_001B1538(s32);
void func_001B1568(void);
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, void *, void *);

extern s32 D_004C3F9C[];
extern Req1B3368 D_01109800;
extern s32 D_0110A440[];
extern char D_0110AF00[];

s32 func_001B3368(s32 arg0, s32 arg1)
{
    Req1B3368 *req = &D_01109800;
    Info1B3368 *info;
    SemaParam1B3368 sp;
    s32 result;
    s32 sema;
    s32 ok;

    info = func_001B10C0(arg0);
    func_001B1538(11);
    if (D_004C3F9C[0] == 0) {
        func_001B1568();
        return -1;
    }
    if (info == NULL || info->valid == 0) {
        func_001B1568();
        return -9;
    }
    req->id = info->id;
    req->arg = arg1;
    sp.max_count = 1;
    sp.init_count = 0;
    sp.option = 0;
    sema = CreateSema(&sp);
    D_01109800.sema = sema;
    req->result = &result;
    req->size = 4;
    if (func_001B08B0(D_0110AF00, 11, 0, req, 0x20, D_0110A440, 4, 0, 0) < 0) {
        WaitSema(sema);
        func_001B1568();
        return -11;
    }
    ok = *(s32 *)((u32)D_0110A440 | 0x20000000);
    func_001B1568();
    if (ok == 0) {
        DeleteSema(sema);
        return -11;
    }
    WaitSema(sema);
    DeleteSema(sema);
    return result;
}
