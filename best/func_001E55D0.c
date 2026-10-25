#define F(p,t,o) (*(t*)((char*)(p)+(o)))
typedef struct __attribute__((packed,aligned(4))){u64 a;s32 b;}P12;
void func_00153FD0(void *, P12 *, s32, s32);
void func_00143830(void *);
extern char D_0044A300[];

void func_001E55D0(void *a, P12 *b, P12 *c, s32 h, s32 n, s32 fl, s32 k, s32 x, f32 f, s32 h2)
{
    P12 copy = *b;
    P12 copy2 = *c;
    s16 t = h2;
    func_00153FD0(a, &copy, x, 0);
    F(a, s32, 0x48) = (s32)D_0044A300;
    F(a, P12, 0x54) = copy2;
    F(a, s16, 0x6C) = h;
    F(a, f32, 0x1C) = n;
    F(a, s32, 0xC) |= 0x4008;
    F(a, f32, 0x68) = f;
    F(a, s32, 0x64) = k;
    F(a, s16, 0x6E) = t;
    F(a, s32, 0x60) = fl;
    if (fl & 4) F(a, s32, 0xC) |= 1;
    func_00143830(a);
}
