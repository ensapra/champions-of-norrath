typedef struct { void *fn; void *arg; s32 pad; } CmdHandler;
typedef struct { void *pktbuf; void *unused; void *iopbuf; CmdHandler *sys; s32 nsys; CmdHandler *usr; s32 nusr; s32 *sregs; } CmdData;
extern s32 D_00444964;
extern u8 D_008DE940[128];
extern u8 D_008DE9C0[64];
extern s32 D_008DEA00[5];
extern s32 D_008DEA14;
extern CmdData D_008DEA18;
extern CmdHandler D_008DEA40[32];
extern s32 D_008DEBC0[32];
void func_002DD640(void);
void func_002DD698(void);
void FlushCache_2(s32);
void sceSifSetDChain_2(void);
s32 sceSifSetReg_2(u32, s32);
s32 sceSifGetReg_2(u32);
s32 AddDmacHandler_3(s32, void *, s32);
void func_002D5CF8(s32);
void func_002D7130(void);
void func_002D7150(void);
void func_002D7710(void);
void func_002D7690(u32, void *, s32, s32, s32, s32);

void func_002D71A8(void) {
    s32 i;
    func_002DD640();
    if (D_00444964 != 0) {
        func_002DD698();
        return;
    }
    D_00444964 = 1;
    D_008DEA18.pktbuf = (void *)((u32)D_008DE940 | 0x20000000);
    D_008DEA18.unused = (void *)((u32)D_008DE9C0 | 0x20000000);
    D_008DEA18.iopbuf = 0;
    D_008DEA18.sys = D_008DEA40;
    D_008DEA18.nsys = 32;
    D_008DEA18.usr = 0;
    D_008DEA18.nusr = 0;
    D_008DEA18.sregs = D_008DEBC0;
    for (i = 0; i < 32; i++) {
        D_008DEA40[i].fn = 0;
        D_008DEA40[i].arg = 0;
    }
    for (i = 0; i < 32; i++) {
        D_008DEBC0[i] = 0;
    }
    D_008DEA40[0].fn = func_002D7150;
    D_008DEA40[0].arg = &D_008DEA18;
    D_008DEA40[1].fn = func_002D7130;
    D_008DEA40[1].arg = &D_008DEA18;
    func_002DD698();
    FlushCache_2(0);
    if (*(volatile u32 *)0x1000E010 & 0x20) {
        *(volatile u32 *)0x1000E010 = 0x20;
    }
    if (!(*(volatile u32 *)0x1000C000 & 0x100)) {
        sceSifSetDChain_2();
    }
    D_008DEA14 = AddDmacHandler_3(5, func_002D7710, 0);
    func_002D5CF8(5);
    D_008DEA18.iopbuf = (void *)sceSifGetReg_2(0x80000000);
    if (D_008DEA18.iopbuf != 0) {
        D_008DEA00[4] = (s32)D_008DE940;
        func_002D7690(0x80000000, D_008DEA00, 0x14, 0, 0, 0);
        return;
    }
    while (!(sceSifGetReg_2(4) & 0x20000)) {
    }
    D_008DEA18.iopbuf = (void *)sceSifGetReg_2(2);
    sceSifSetReg_2(0x80000000, (s32)D_008DEA18.iopbuf);
    sceSifSetReg_2(0x80000001, (s32)&D_008DEA18);
    D_008DEA00[3] = 0;
    D_008DEA00[4] = (s32)D_008DE940;
    func_002D7690(0x80000002, D_008DEA00, 0x14, 0, 0, 0);
}
