extern s32 D_004844A8, D_00485088, D_0048508C, D_00486B94, D_00486B98, D_00486B9C;
extern u8 D_007D0DE8[];
s32 func_00135BB8(s32, void*, s32*);
void func_00135DE8(s32, s32*, s32, s32, s32);
void func_001D3BA8(void) {
    s32 i = 0;
    if (D_00486B98 > 0) {
        s32 off = 0, tmp[2];
        u8 *base = D_007D0DE8;
        do {
            void *buf = (void *)(((D_00485088 & 1) * 0x1400 + off) + (s32)base);
            off += 0x50;
            if (buf) {
                s32 h = D_00486B94;
                if (h) {
                    s32 r = func_00135BB8(h, buf, tmp);
                    tmp[1] = r;
                    if (r) {
                        if (D_0048508C < D_004844A8) D_0048508C = D_004844A8 + 0x14;
                    } else
                        func_00135DE8(h, &tmp[1], tmp[0], 0, 0);
                }
            }
            i++;
        } while (i < D_00486B98);
    }
    D_00486B98 = D_00486B9C;
    D_00486B9C = 0;
    {
        s32 *p = &D_00485088;
        *p = *p + 1;
    }
}
