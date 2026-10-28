extern s32 func_001B5640(s32, s32, s32);

void func_001040D0(s32 a, s32 b, s32 c) {
    s32 r;
loop:
    r = func_001B5640(a, b, c);
    if (r < 0) goto loop;
}
