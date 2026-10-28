typedef struct { s32 a; s64 b; s64 c[2]; } Msg_11A;
extern u8 func_01000000[];
extern u8 func_001BCB38[];
s32 func_00152520(s32);
void func_0014CBF4(s32, void *, s32);
void func_0011AC40(void) {
    Msg_11A m;
    s32 *flag = (s32 *)(func_01000000 + 0xC4CD0);
    if (*flag == 0) {
        s32 *h = (s32 *)(func_001BCB38 + 0xD74);
        s32 one = 1;
        func_00152520(*h);
        m.a = 0x11;
        m.b = 0;
        func_0014CBF4(*h, &m, 1);
        *flag = one;
    }
}
