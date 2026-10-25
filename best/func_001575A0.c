typedef struct {
    u8 pad_00[0x10];
    s16 unk_10;
    s16 pad_12;
    s16 unk_14;
    u8 pad_16[0xA];
    s64 x0 : 11;
    s64 : 5;
    s64 x1 : 11;
    s64 : 5;
    s64 y0 : 11;
    s64 : 5;
    s64 y1 : 11;
    s64 : 5;
    u8 pad_28[0x28];
} Rec;

typedef struct {
    u8 pad_00[0x4EC];
    s32 unk_4EC;
    u8 pad_4F0[0x338];
    u16 unk_828;
    u16 pad_82A;
    u16 unk_82C;
    u16 pad_82E;
    s32 unk_830;
    s32 unk_834;
    s32 unk_838;
    s32 unk_83C;
    u8 pad_840[0x50];
    Rec recs[2];
} Parent;

s32 D_0047FC30;
s32 D_0047FC34;

void func_001575A0(Parent *arg0) {
    Rec *p = &arg0->recs[arg0->unk_4EC];
    p->unk_10 = ((0x800 - (D_0047FC30 >> 1)) * 16) - arg0->unk_828;
    p->x0 = arg0->unk_830 >> 4;
    p->x1 = (arg0->unk_838 >> 4) - 1;
    p->y0 = (arg0->unk_834 + 7) >> 4;
    p->y1 = ((arg0->unk_83C + 15) >> 4) - 1;
    p->unk_14 = ((0x800 - (D_0047FC34 >> 1)) * 16) - arg0->unk_82C;
}
