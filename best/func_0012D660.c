extern s32 func_002E56D0(void *, s32, s32, void *, s32, s32 *, s32, s32, s32);
extern s32 func_00301FFC(void *, s8 *, s32, s32, s32, s32, s32, s32);
extern s8 D_00333136[];
extern s32 D_003332B8[];
extern s32 D_004839E8;
extern s32 D_004839EC;
extern u8 D_004F3E90[];

typedef struct { s32 id; s32 four; s32 hash; u8 buf[0x514]; } Pkt;

s32 func_0012D660(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    Pkt pk;
    s32 sp530;
    s32 i;
    s32 h;
    s8 *p;
    s32 temp7;
    s32 k;
    s32 total = arg1 + 0xC;
    i = 0;
    sp530 = 0;
    h = 0x217;
    if (arg1 > 0) {
        k = 0x30E15F;
        p = arg0;
        do {
            if (i & 1) {
                h += (*p * 3) ^ 0x30E15F;
            } else {
                h -= (*p & 0x148F37) * (i & 7);
            }
            i++;
            h += *arg0;
            p++;
        } while (i < arg1);
    }
    h = (h << 16) | arg2;
    temp7 = D_003332B8[D_00333136[0] * 63];
    pk.hash = h;
    pk.four = 4;
    pk.id = temp7;
    func_00301FFC(pk.buf, arg0, arg1, temp7, h, i, arg1, k);
    func_002E56D0(D_004F3E90, D_004839E8, D_004839EC, &pk, total, &sp530, arg3, arg4, 0x64);
    return pk.hash;
}
