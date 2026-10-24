extern u8 func_001C8098[];
void func_0014CA30(s32);
void func_0014CF0C(s32, s32, s32);
void func_0014CBF4(s32, void *, s32);

void func_0016D31C(void)
{
    void *p = func_001C8098;
    p = *(void **)((u8 *)p + 0xD68);
    ((void (*)(void))p)();
}

void func_0016D2E4(void *arg0)
{
    void *p = func_001C8098;
    p = *(void **)((u8 *)p + 0xD68);
    ((void (*)(void))p)();
    func_0014CA30(*(s32 *)((u8 *)arg0 + 0x914));
    func_0014CA30(*(s32 *)((u8 *)arg0 + 0x910));
}

void func_0016D46C(void *arg0);

typedef struct {
    s32 type;
    s32 pad;
    s64 val;
    u8 rest[0x3F0];
} Msg16D378;

s32 func_0016D378(void *arg0, void *arg1, void *arg2)
{
    Msg16D378 msg;
    s32 send = 0;
    s32 upd;
    s32 ret;
    void *p = func_001C8098;
    p = *(void **)((u8 *)p + 0xDB8);
    ret = ((s32 (*)(void))p)();
    upd = 0;
    if (*(s32 *)((u8 *)arg1 + 0x978) != *(s32 *)((u8 *)arg2 + 0x978)) {
        *(s32 *)((u8 *)arg0 + 0x978) = *(s32 *)((u8 *)arg1 + 0x978);
        msg.type = 0xE;
        send = 1;
        upd = 1;
        ret = 1;
        msg.val = *(s32 *)((u8 *)arg1 + 0x978);
    }
    if (send) {
        func_0014CBF4(*(s32 *)((u8 *)arg0 + 0x910), &msg, send);
    }
    if (upd) {
        func_0016D46C(arg0);
    }
    return ret;
}

void func_0016D46C(void *arg0)
{
    f32 a, b, c;
    func_0014CF0C(*(s32 *)((u8 *)arg0 + 0x914), *(s32 *)((u8 *)arg0 + 0x5AC), *(s32 *)((u8 *)arg0 + 0x5B0));
    a = *(s32 *)((u8 *)arg0 + 0x5AC);
    b = *(s32 *)((u8 *)arg0 + 0x978);
    c = *(s32 *)((u8 *)arg0 + 0x97C);
    if (c < b) {
        b = c;
    }
    func_0014CF0C(*(s32 *)((u8 *)arg0 + 0x910), (s32)(a * (b / c)), *(s32 *)((u8 *)arg0 + 0x5B0));
}
