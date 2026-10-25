typedef struct { s32 tag; union { s64 l; f32 f; } v; } Tag;
typedef struct { s64 a, b; } Q;
typedef struct {
    u8 pad[0x60];
    u8 x60[0x10];
    Q q70;
    u8 pad2[0x1A0 - 0x80];
    u8 x1A0[0x10];
} G;

extern G D_001BB6E0;
extern f32 D_001BB8F0[];
extern char D_004C7520[];
extern char D_004C7560[];
extern void func_001A2660(void *, s32, s32);
extern s32 func_0015817C(s32, char *, Tag *, s32);
extern void func_0014B460(s32);

s32 func_0010F8E8(s32 arg0, s32 *arg1, s64 arg2)
{
    Tag t[64];
    u8 buf[16];
    Q q;
    s32 r;

    func_001A2660(buf, 0, 0x10);
    q = D_001BB6E0.q70;
    t[0].tag = 8;    t[0].v.l = arg1[0];
    t[1].tag = 0xA;  t[1].v.l = arg1[1];
    t[2].tag = 0xD;  t[2].v.l = arg1[2];
    t[3].tag = 0xF;  t[3].v.l = arg1[3];
    t[4].tag = 0xD4; t[4].v.l = 1;
    t[5].tag = 0x14; t[5].v.l = 0;
    t[6].tag = 0xC9; t[6].v.l = 0;
    t[7].tag = 0xCB; t[7].v.l = 0;
    t[8].tag = 0xCD; t[8].v.l = 0;
    t[9].tag = 0xCE; t[9].v.l = 1;
    t[10].tag = 0xEB; t[10].v.l = arg2;
    t[11].tag = 0x23; t[11].v.l = 0;
    t[12].tag = 0xE2; t[12].v.l = (s32)D_004C7520;
    t[13].tag = 0xE7; t[13].v.f = D_001BB8F0[0];
    t[14].tag = 0x12; t[14].v.l = (s32)D_001BB6E0.x1A0;
    t[15].tag = 0xE8; t[15].v.l = (s32)D_001BB6E0.x60;
    t[16].tag = 0xE6; t[16].v.l = (s32)buf;
    t[17].tag = 0xEA; t[17].v.l = (s32)&q;
    t[18].tag = 0xF4; t[18].v.l = (s32)D_001BB6E0.x60;
    r = func_0015817C(arg0, D_004C7560, t, 0x13);
    func_0014B460(r);
    return r;
}
