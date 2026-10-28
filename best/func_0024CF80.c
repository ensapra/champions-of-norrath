typedef struct { u8 pad0[4]; u8 c4; u8 pad1[0x33]; u16 type; u8 pad2[0x12]; } R;
typedef struct { s32 pad0; u16 flags; s16 id; s16 type; s16 pad1[5]; } E;
typedef struct { u16 flags; u8 pad[18]; } F;
extern R D_007D8110[];
extern E D_007D8F20[];
extern F D_007D8F24[];
extern s8 D_0042DDB8[][2];
s32 D_00486BC0[2];
s32 D_00486BC8[2];

void func_0024CF80(s32 x)
{
    s32 id, type, i;
    s32 mask, va, vb;
    if (x == -1) return;
    if (x & 0x8000) {
        id = x & 0xFF;
        type = (x >> 8) & 0x7F;
        if (D_007D8110[id].type == type) D_007D8110[id].c4 = 0;
        for (i = 0; i < 43; i++) {
            if ((D_007D8F20[i].flags & 4) && D_007D8F20[i].id == id && D_007D8F20[i].type == type)
                func_0024CF80(i);
        }
    } else {
        s32 q0 = D_0042DDB8[x][0];
        s32 q1 = D_0042DDB8[x][1];
        mask = 1 << q1;
        va = D_00486BC0[q0];
        vb = D_00486BC8[q0];
        va &= ~mask;
        D_007D8F24[x].flags = 0;
        vb |= mask;
        D_00486BC8[q0] = vb;
        D_00486BC0[q0] = va;
    }
}
