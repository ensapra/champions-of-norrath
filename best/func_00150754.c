typedef struct {
    u64 f0:11;
    u64 f1:5;
    u64 f2:11;
    u64 f3:5;
    u64 f4:3;
    u64 f5:13;
    u64 f6:11;
    u64 f7:5;
} FrameReg;

extern s32 D_0047FC30;
extern s32 D_0047FC34;
extern void func_0016FEAC(void *, s32);
extern void func_00170584(void *, s32, s32);

void func_00150754(u8 *a0)
{
    u8 *p = a0 + 0x780;
    s32 w;
    s32 h;

    func_0016FEAC(p, 2);
    func_00170584(a0 + 0x790, 0x98, 0);
    func_00170584(a0 + 0x7A0, 0xC0, 0);
    w = D_0047FC30;
    h = D_0047FC34;
    ((FrameReg *)(p + 0x20))->f0 = 0;
    ((FrameReg *)(p + 0x20))->f4 = 0;
    ((FrameReg *)(p + 0x20))->f2 = w - 1;
    ((FrameReg *)(p + 0x20))->f6 = h - 1;
    *(s16 *)(p + 0x10) = (s16)((0x800 - (w >> 1)) << 4);
    *(s16 *)(p + 0x14) = (s16)((0x800 - (h >> 1)) << 4);
}
