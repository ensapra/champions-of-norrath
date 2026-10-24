typedef struct {
    s8 x0;
    s32 x4;
    s32 x8;
    s32 xC;
    u32 x10;
    void *x14;
    s32 x18;
    s32 x1C;
} S_002CA2C8;

extern u8 D_0044E670[];
extern u8 D_00453750[];
extern u32 D_00483E5C;
extern s32 D_004844A4;
s32 func_00180260(void);

void func_002CA2C8(S_002CA2C8 *p, s32 a, s32 b, s32 c) {
    u32 r;
    p->x0 = a;
    p->x14 = D_0044E670;
    p->xC = b;
    p->x8 = c;
    p->x4 = 0;
    D_00483E5C = D_00483E5C * 0x19660D + 0x3C6EF35F;
    r = D_00483E5C >> 16;
    p->x14 = D_00453750;
    p->x0 = a;
    p->xC = b;
    p->x8 = c;
    p->x10 = r;
    p->x1C = func_00180260();
    p->x18 = D_004844A4 + 0x258;
}
