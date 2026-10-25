extern s32 func_00303EB8(void *, s8 *, s8 *, s32);
extern s32 func_00303F50(s8 *, s8 *, s32 *);
extern s32 func_00304640(s8 *, u8 *);
extern s32 D_00485BE8;
extern s8 D_00474BE8[];
extern s8 D_004753C8[];
extern s8 D_00485B78[];
extern u8 D_007F7D60[];

typedef struct {
    s32 val;
    u8 gap[12];
    s8 buf[0x100];
} Local;

void func_0025BA20(void *arg0)
{
    Local l;
    s32 i;
    s32 j;
    u8 *base;
    u8 *p;

    base = (u8 *)D_007F7D60 + 1;
    for (i = 0; i < 0x40; i++) {
        p = base + 0xC;
        for (j = 0; j < D_00485BE8; j++) {
            func_00304640(l.buf, p);
            func_00303F50(l.buf, D_00485B78, &l.val);
            if (l.val == i) {
                break;
            }
            p += 0x40;
        }
        if (j == D_00485BE8) {
            break;
        }
    }
    func_00303EB8(arg0, D_004753C8, D_00474BE8, i);
}
