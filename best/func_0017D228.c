typedef struct __attribute__((packed, aligned(1))) { u64 v; } U8x;
extern s32 D_001D04D0[], D_001D04EC[];
extern u8 D_001D2040[];
extern u8 D_001D16C0[];
extern u8 D_004CC670[], D_004CC690[];
s32 func_0017C528(s32);
void func_001AF710(void *);
s32 func_001B08B0(void *, s32, s32, s32, s32, void *, s32, s32, s32);
s32 SignalSema(s32);
s32 func_0017D228(U8x *out) {
    s32 r;
    if (func_0017C528(0xF) == 0) return 0;
    if (D_001D04D0[0] > 0) func_001AF710(D_004CC670);
    if (func_001B08B0(D_001D2040, 1, 0, 0, 0, D_001D16C0, 0x10, 0, 0) < 0) {
        SignalSema(D_001D04EC[0]);
        return 0;
    }
    *out = *(U8x *)((u32)(D_001D16C0 + 4) | 0x20000000);
    if (D_001D04D0[0] > 0) func_001AF710(D_004CC690);
    r = *(s32 *)((u32)D_001D16C0 | 0x20000000);
    SignalSema(D_001D04EC[0]);
    return r;
}
