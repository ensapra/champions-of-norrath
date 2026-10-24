typedef struct {
    u8 pad0[0x4D0];
    s32 x4D0;
    u8 pad4D4[0x5AC - 0x4D4];
    s32 x5AC;
    u8 pad5B0[0x870 - 0x5B0];
    s32 x870, x874, x878, x87C, x880, x884, x888, x88C, x890, x894, x898, x89C, x8A0, x8A4, x8A8;
} Win;

void func_0014CF0C(Win *, s32, s32);

void func_00149E88(Win *o)
{
    o->x4D0 = 0;
    o->x870 = 0;
    o->x878 = 0;
    o->x880 = 0;
    o->x884 = 0;
    o->x888 = 0;
    o->x88C = 1;
    o->x890 = 1;
    func_0014CF0C(o, o->x5AC, o->x898 * (o->x8A0 + o->x89C) - o->x89C + o->x8A8 * 2);
}
