typedef struct { u32 r:8, g:8, b:8, a:8; } C4;
void func_0014BAFC(void *, void *, void *, void *, void *, void *, s32, s32, s32);
#define B(x) (*(u8 *)&(x))

void func_0014BCA8(s32 arg0, s32 arg1, char *arg2, s32 arg3, s32 arg4, u8 *arg5) {
    u32 sp10, sp14, sp18, sp1C, sp20, sp24, sp28, sp2C;
    C4 sp30, sp34;
    func_0014BAFC(&sp10, &sp14, &sp18, &sp1C, arg2, arg2 + 4, arg3, 0, arg0);
    func_0014BAFC(&sp20, &sp24, &sp28, &sp2C, arg2 + 8, arg2 + 12, arg3, 0, arg0);
    sp30.r = B(sp10);
    sp30.g = B(sp14);
    sp30.b = B(sp18);
    sp30.a = B(sp1C);
    sp34.r = B(sp20);
    sp34.g = B(sp24);
    sp34.b = B(sp28);
    sp34.a = B(sp2C);
    func_0014BAFC(&sp10, &sp14, &sp18, &sp1C, &sp30, &sp34, arg4, 0, arg1);
    arg5[0] = B(sp10);
    arg5[1] = B(sp14);
    arg5[2] = B(sp18);
    arg5[3] = B(sp1C);
}
