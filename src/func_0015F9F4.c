extern u8 func_001C8098[];
s32 func_0014BA30(s32, s32);
void func_0014CBF4(s32, void *, s32);

typedef struct { s32 type; u64 val; char pad[0x3F0]; } Msg15F9F4;

s32 func_0015F9F4(char *a, s32 b, s32 c) {
    Msg15F9F4 msg;
    s32 r;
    void *p = func_001C8098;

    p = *(void **)((u8 *)p + 0x5C0);
    r = ((s32 (*)(void))p)();
    b += 0x5C0;
    if (func_0014BA30(b, c + 0x5C0) == 0) {
        msg.type = 0x12;
        msg.val = (u32)b;
        r = 1;
        func_0014CBF4(*(s32 *)(a + 0x894), &msg, 1);
    }
    return r;
}
