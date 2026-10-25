extern s32 D_001D04D0[4];
extern s32 D_001D04EC[4];
extern s32 D_001D0508[4];
extern u8 D_004CC5E0[];
extern u8 D_004CC5F8[];
extern u8 D_004CC618[];
extern u8 D_010ECE90[];
extern u8 D_010ECED0[];
extern u8 D_001D16C0[];
s32 PollSema(s32);
void SignalSema(s32);
void func_0017BC30(void);
s32 func_0017C4B8(s32);
void func_001AF710(void *);
void func_001AFE98(void *, s32);
void func_001AFF48(s32);
s32 func_001B06E0(void *, s32, s32);
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);

s32 func_0017CA28(s32 arg0) {
    s32 *p;
    s32 r;
    s32 i;
    if (D_001D04D0[0] > 0) func_001AF710(D_004CC5E0);
    func_0017BC30();
    r = 6;
    if (PollSema(D_001D04EC[0]) != D_001D04EC[0]) return r;
    if (func_0017C4B8(1) == 0) {
        func_001AFF48(0);
        if (D_001D0508[0] < 0) {
            for (;;) {
                if (func_001B06E0(D_010ECE90, 0x8000059A, 0) < 0) {
                    if (D_001D04D0[0] > 0) func_001AF710(D_004CC5F8);
                    for (i = 0x100000; i != -1; i--) ;
                    continue;
                }
                if (*(s32 *)(D_010ECE90 + 0x24) == 0) {
                    for (i = 0x100000; i != -1; i--) ;
                    continue;
                }
                D_001D0508[0] = 0;
                break;
            }
        }
        p = (s32 *)D_010ECED0;
        *p = arg0;
        func_001AFE98(p, 4);
        if (func_001B08B0(D_010ECE90, 0, 0, p, 4, D_001D16C0, 4, 0, 0) >= 0) {
            if (D_001D04D0[0] > 0) func_001AF710(D_004CC618);
            r = *(s32 *)((u32)D_001D16C0 | 0x20000000);
            SignalSema(D_001D04EC[0]);
            return r;
        }
    }
    SignalSema(D_001D04EC[0]);
    return arg0 == 8 ? -1 : 6;
}
