typedef struct { u64 lo:32; u64 x:11; u64 p:5; u64 y:11; u64 q:5; } BF_15C840;
typedef struct { u8 pad[0x40]; BF_15C840 bf; u8 pad2[0x38]; } Rec_15C840;
typedef struct { Rec_15C840 r[4]; u8 pad[0x10]; } Grp_15C840;
void func_0015C840(u8 *a) {
    Grp_15C840 *base = (Grp_15C840 *)(a + 0x910);
    s32 i = 0;
    s32 acc = 0;
    s32 idx = *(s32 *)(a + 0x4EC);
    s32 w = *(s32 *)((u8 *)base + 0x428) / 4;
    s32 x = *(s32 *)(a + 0x5A0);
    BF_15C840 *p;
loop:
    p = &base[idx].r[i].bf;
    p->x = (x >> 4) & 0x7FF;
    p->y = (u16)(*(s32 *)(a + 0x5A4) >> 4) + acc;
    acc += w;
    i++;
    if (i < 4) goto loop;
}
