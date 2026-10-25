typedef struct { u64 lo, hi; } Q;
extern Q *D_004844C8;
extern Q *D_004844C4;
extern s32 D_00484468;
void func_0016DC60(void *, s16 *, s32, s32, s32, s32, s32, s32, s32);
void func_0015EB80(void *, s32, s16 *, s32, s32);
void func_0016E448(s16 *r, s32 a1, s32 a2, s32 a3, s32 a4) {
    Q *p;
    if (D_00484468 - (D_004844C8 - D_004844C4) < 3000) return;
    p = D_004844C8;
    ((u32 *)p)[2] = 0x11000000;
    ((u32 *)p)[3] = 0x50000000;
    p[1].lo = 0x1000000000008000ULL; p[1].hi = 0xE;
    p[2].lo = 0; p[2].hi = 0x3F;
    p[3].lo = 0; p[3].hi = 6;
    p[4].lo = 1; p[4].hi = 0x14;
    ((u32 *)&p[5])[0] = a4; ((u32 *)&p[5])[1] = 0; p[5].hi = 1;
    p[6].lo = 0x80000000A1ULL; p[6].hi = 0x42;
    p[7].lo = 0x156; p[7].hi = 0;
    p[8].lo = 0x3001D; p[8].hi = 0x47;
    func_0016DC60(&p[9], r, a1, a3 + 1, 0, 0, 0, 0, 0);
    D_004844C8 = p + 9;
    func_0015EB80(p + 9, a2, r, 0, 1);
}
