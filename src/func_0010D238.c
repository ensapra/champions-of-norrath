extern s32 D_010C21F0[];
extern s32 D_010C2200[];
extern s32 D_010C2208[];
extern s32 D_001BD8C0[];
void func_0010DA38(void *);
void func_0010DAE0(void *);
void func_0014CE44(s32, s32, s32);
void func_0014CE84(s32, s32 *, s32 *);
void func_0014D240(s32);

void func_0010D238(void *arg0, void *arg1)
{
    s32 i = *(s32 *)((u8 *)arg1 + 0x80);
    s32 w, h;

    switch (D_010C2208[0]) {
    case 1:
        func_0010DA38(arg0);
        break;
    case 3:
        func_0010DAE0(arg0);
        break;
    }
    if (i < D_001BD8C0[0]) {
        func_0014CE84(D_010C21F0[i], &w, &h);
        if (w < 0x280 - D_010C2200[i]) {
            func_0014D240(D_010C21F0[i + 1]);
            func_0014CE44(D_010C21F0[i + 1], w + D_010C2200[i], h);
        }
    }
}
