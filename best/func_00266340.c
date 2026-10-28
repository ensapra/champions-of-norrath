typedef struct { s32 a, b, c, d, e; f32 f; s32 q; } Ent;
typedef struct { Ent ent[128]; s32 cnt; s32 pad2[2]; f32 sum; } Buf;
extern u32 D_00483E58;
void func_00266340(Buf *p, s32 q, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, f32 f) {
    s32 i, n;
    u32 x;
    if (f <= 0.0f) f = 1.0f;
    i = p->cnt;
    n = i + 1;
    p->cnt = n;
    if (i >= 128) {
        x = D_00483E58 * 0x19660D + 0x3C6EF35F;
        if ((s32)((f32)(s32)(x >> 16) * (1.0f / 65536.0f) * (f32)n) >= 128)
            goto skip;
        {
            u32 y = x * 0x19660D + 0x3C6EF35F;
            D_00483E58 = y;
            i = (s32)((f32)(s32)(y >> 16) * (1.0f / 65536.0f) * 128.0f);
            p->sum -= p->ent[i].f;
        }
    }
    p->ent[i].f = f;
    p->ent[i].a = a2;
    p->ent[i].b = a3;
    p->sum += f;
    p->ent[i].q = q;
    p->ent[i].c = a4;
    p->ent[i].d = a5;
    p->ent[i].e = a6;
    return;
skip:
    D_00483E58 = x;
}
