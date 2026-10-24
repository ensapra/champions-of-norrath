#define I(p, o) (*(s32 *)((u8 *)(p) + (o)))
void func_0014CE60(s32, s32, s32, s32);
void func_0014CF0C(s32, s32, s32);
void func_00165508(u8 *e)
{
    s32 d = I(e, 0x5D4);
    s32 t = I(e, 0x1260) * 3 / 4;
    s32 x = I(e, 0x5A0);
    s32 y = I(e, 0x5A4) + d;
    x += d;
    func_0014CE60(I(e, 0x910), x - t, y - t, d);
    t = I(e, 0x1260) * 6 / 4;
    func_0014CF0C(I(e, 0x910), I(e, 0x5AC) + t, I(e, 0x5B0) + t);
}
