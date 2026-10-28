typedef struct {
    u64 x0:11;
    u64 p0:5;
    u64 y0:11;
    u64 p1:5;
    u64 x1:11;
    u64 p2:5;
    u64 y1:11;
    u64 p3:5;
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
    ((FrameReg *)(p + 0x20))->x0 = 0;
    ((FrameReg *)(p + 0x20))->x1 = 0;
    ((FrameReg *)(p + 0x20))->y0 = w - 1;
    ((FrameReg *)(p + 0x20))->y1 = h - 1;
    *(s16 *)(p + 0x10) = (s16)((0x800 - (w >> 1)) << 4);
    *(s16 *)(p + 0x14) = (s16)((0x800 - (h >> 1)) << 4);
}
