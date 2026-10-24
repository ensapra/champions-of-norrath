extern s32 D_010D110C[];
extern s32 D_010D1108[];
extern s32 D_010D1110[];
extern s32 D_010D1118[];
extern s32 D_001C682C[];
extern void func_0013FFF8(void);
extern s32 func_001404D0(void);
extern s32 func_001404F0(void);
extern s32 func_00140020(void);
extern void func_001403B8(void);
extern void func_00140900(s32, s32, s32);

void func_0013ECF8(void) {
    func_0013FFF8();
    D_010D110C[0] = 3;
}

s32 func_0013EDD8(void) {
    if (func_001404D0() != 0) return 0;
    D_010D1108[0] = func_001404F0();
    return 1;
}

s32 func_0013ED20(u8 *o) {
    if (func_00140020() != 0) return 0;
    if (func_001404D0() != 0) return 0;
    if (D_010D110C[0] > 0) {
        D_010D110C[0]--;
        return 0;
    }
    func_001403B8();
    func_00140900(1, D_001C682C[0] + D_010D1118[0] * 0x20C + 0x10C, D_010D1110[0]);
    *(void **)(o + 0x18) = func_0013EDD8;
    return 0;
}

s32 func_001B5C80(void);
void func_001B5CD8(void);
typedef struct { u32 chcr; } Chan;

u32 func_0018FD18(volatile Chan *d) {
    s32 intr = func_001B5C80();
    u32 en = *(volatile u32 *)0x1000F520;
    u32 ctrl, old;
    if (!(en & 0x10000)) *(volatile u32 *)0x1000F590 = en | 0x10000;
    ctrl = *(volatile u32 *)0x1000E000;
    old = d->chcr;
    d->chcr = old & ~0x100;
    *(volatile u32 *)0x1000F590 = en;
    if (intr) func_001B5CD8();
    return old;
}
