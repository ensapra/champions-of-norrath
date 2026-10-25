#define F(p,t,o) (*(t*)((char*)(p)+(o)))
typedef struct __attribute__((packed,aligned(4))){u64 a;s32 b;}P12;
void func_001411F0(void*,P12*,s32,s32);void func_00194390(void*,s32,s32);void func_00143830(void*);
extern char D_00448DA0[];
extern s32 D_004844A4;
void func_001E6708(void *a, P12 *b, s32 c, s32 d, s32 e, s32 h, s32 g)
{
    P12 copy = *b;
    s32 *p;
    func_001411F0(a, &copy, 0, 0);
    p = (s32 *)((char *)a + 0x4c);
    *p = 0;
    F(a, s32, 0x48) = (s32)D_00448DA0;
    F(a, P12, 0x50) = copy;
    F(a, s32, 0x5C) = D_004844A4 + c;
    F(a, s32, 0x60) = d;
    F(a, s32, 0x68) = e;
    F(a, s32, 0x6C) = g;
    if (h) func_00194390(p, h, h);
    if (F(a, s32, 0x60) < 10) F(a, s32, 0x60) = 10;
    F(a, s32, 12) |= 3;
    F(a, f32, 0x64) = 10.0f;
    func_00143830(a);
}
