extern s32 D_003642D0[];
extern char *D_004804D0;
void func_001A2660(s32, s32, s32);
void func_0019BF9C(s32 *arg0) {
    s32 *p = D_003642D0;
    *arg0 = 0;
    p[3] = 0;
    p[4] = 0;
    func_001A2660(*(s32 *)(D_004804D0 + 0x54), 0, *(s32 *)(D_004804D0 + 0x58) * 4);
}
