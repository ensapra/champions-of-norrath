typedef unsigned int u128 __attribute__((mode(TI)));
typedef struct {
    u64 NLOOP:15;
    u64 EOP:1;
    u64 pad16:16;
    u64 id:14;
    u64 PRE:1;
    u64 PRIM:11;
    u64 FLG:2;
    u64 NREG:4;
    u64 REGS0:4;
    u64 REGS1:4;
    u64 REGS2:4;
    u64 REGS3:4;
    u64 REGS4:4;
    u64 REGS5:4;
    u64 REGS6:4;
    u64 REGS7:4;
    u64 REGS8:4;
    u64 REGS9:4;
    u64 REGS10:4;
    u64 REGS11:4;
    u64 REGS12:4;
    u64 REGS13:4;
    u64 REGS14:4;
    u64 REGS15:4;
} GifTag;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    union { u128 q; GifTag t; } tag;
    u64 unk20;
    u64 unk28;
    u64 unk30;
    u8 pad38[0x58];
    u64 unk90;
} S173910;

s32 func_001736A8(s16, s16, s16);
void func_0018DDD0(void *, s16, s16, s16, s16, s16);

void func_00173910(S173910 *p, s32 a1, s16 a2, s16 a3, s16 a4, s16 a5, s16 a6) {
    s32 t;

    t = func_001736A8(a2, a3, a4);
    func_0018DDD0(&p->unk20, a2, a3, a4, a5, a6);
    p->unk20 = (u64)(a1 & 0x1FF) | ((u64)(((a3 + 0x3F) >> 6) & 0x3F) << 16) | ((u64)(a2 & 0xF) << 24);
    p->tag.q = 0;
    p->unk30 = (u64)(u32)(a1 + t * 2) | ((u64)(a6 & 0xF) << 24) | ((u64)1 << 32);
    p->unk0 = 0x60000009;
    p->unk90 = 0x20000;
    p->tag.t.NLOOP = 8;
    p->tag.t.EOP = 1;
    p->tag.t.NREG = 1;
    p->tag.t.REGS0 = 0xE;
    p->unkC = 0x50000009;
    p->unk8 = 0x11000000;
    p->unk4 = 0;
}
