typedef struct { f32 x, y, z; } Vec12;

extern s32 func_00140F60(void *, s8 *, s32);
extern void func_001411F0(void *, Vec12, s32 *, s32 *);
extern void func_00143908(void *);
extern s32 func_00143A80(void *, s8 *, s32);
extern u8 D_0044C8C0[];
extern s8 D_00484FD8[];
extern s8 D_00484FE0[];
extern s8 D_00484FE8[];

void func_001D1470(void *arg0, Vec12 arg1, s32 *arg2)
{
    f32 dx, dy, a, b, hx, hy;
    s32 r;

    func_001411F0(arg0, arg1, 0, arg2);
    *(u8 **)((u8 *)arg0 + 0x48) = D_0044C8C0;
    dx = (f32)func_00140F60(arg0, D_00484FD8, 0);
    r = func_00140F60(arg0, D_00484FE0, 0);
    dy = (f32)(-r);
    *(s32 *)((u8 *)arg0 + 0xC) = 3;
    *(s32 *)((u8 *)arg0 + 0x5C) = func_00143A80(arg0, D_00484FE8, 0);
    b = *(f32 *)((u8 *)arg0 + 0x14);
    a = *(f32 *)((u8 *)arg0 + 0x10);
    hx = a + dx;
    hy = b + dy;
    *(f32 *)((u8 *)arg0 + 0x4C) = (a < hx) ? a : hx;
    *(f32 *)((u8 *)arg0 + 0x50) = (b < hy) ? b : hy;
    *(f32 *)((u8 *)arg0 + 0x54) = (a < hx) ? hx : a;
    *(f32 *)((u8 *)arg0 + 0x58) = (b < hy) ? hy : b;
    func_00143908(arg0);
    *(s32 *)((u8 *)arg0 + 0x68) = -1;
}
