typedef struct { s32 a, b, c, d; s32 state; s32 f, g; } Ent2D;
typedef struct { Ent2D e[4]; } Row2D;
extern Row2D D_008DD8D0[];
s32 func_002D43E8(s32, s32, s32);

s32 func_002D4550(s32 a, s32 b)
{
    if (D_008DD8D0[a].e[b].state == 0) {
        return 0;
    }
    return func_002D43E8(a, b, 0);
}
