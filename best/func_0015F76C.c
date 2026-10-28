typedef struct { char p0[0x5A0]; s32 x, y, p5a8, w; char p1[0x5D4-0x5B0]; s32 off; char p2[0x888-0x5D8]; s32 b88, p8c, b90, b94, b98, b9c, ba0, ba4, ba8; char p3[0x910-0x8AC]; s32 h10, h14; char p4[0x92C-0x918]; s32 q; } O;
s32 func_0014CE60(s32, s32, s32);
void func_0015F76C(O *p) {
    func_0014CE60(p->b94, p->x + p->off - p->h14, p->y + p->off - p->h14);
    func_0014CE60(p->b98, p->q * 3 / 4 + p->x + p->off - p->h14, p->q * 3 / 4 + p->y + p->off - p->h14);
    func_0014CE60(p->b9c, p->x + p->off - p->h14, p->y + p->off - p->h14);
    func_0014CE60(p->b90, p->x + p->off, p->y + p->off + p->b88 - p->h10);
    func_0014CE60(p->ba0, p->x + p->off + p->b88 + 0x10, p->y + p->off);
    func_0014CE60(p->ba4, p->x + p->off + 0x10, p->y + p->off + 0x10);
    func_0014CE60(p->ba8, p->x + p->off + p->w - p->b88 - 0x10, p->y + p->off + 0x10);
}
