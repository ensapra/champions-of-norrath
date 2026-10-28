typedef struct { u64 lo:32; u64 x:11; u64 p:5; u64 y:11; u64 q:5; } BF_15C840;
typedef struct { u8 pad[0x40]; BF_15C840 bf; u8 pad2[0x38]; } Rec_15C840;
typedef struct { Rec_15C840 r[4]; u8 pad[0x10]; } Grp_15C840;
typedef struct {
    u8 pad0[0x4EC]; s32 idx;
    u8 pad1[0x5A0 - 0x4F0]; s32 x; s32 y;
    u8 pad2[0x910 - 0x5A8]; Grp_15C840 grp[2];
    u8 pad3[8]; s32 w;
} Obj_15C840;
void func_0015C840(Obj_15C840 *a) {
    s32 i = 0;
    s32 acc = 0;
    s32 idx = a->idx;
    s32 w = a->w / 4;
    s32 x = a->x;
    BF_15C840 *p;
loop:
    p = &a->grp[idx].r[i].bf;
    p->x = (x >> 4) & 0x7FF;
    p->y = (u16)(a->y >> 4) + acc;
    acc += w;
    i++;
    if (i < 4) goto loop;
}
