extern s32 D_004C3F14;
extern char D_01107F80[], D_01108780[], D_01108F80[];
extern u32 D_01109780[];
void func_001B5C80(void);
void func_001B5CD8(void);
void func_001AF7E8(void);
void func_001AFAD0(u32, void *, void *);
void func_001AFCD0(u32, void *, s32, s32, s32, s32);
s32 func_001AF7A0(s32);
s32 sceSifGetReg(u32);
void sceSifSetReg(u32, s32);
void func_001B0358(void);
void func_001B0610(void);
void func_001B0820(void);
extern char L_001B0248[];

void func_001AFF48(void) {
    u32 *q;
    s32 *t;

    func_001B5C80();
    if (D_004C3F14 != 0) {
        func_001B5CD8();
        return;
    }
    D_004C3F14 = 1;
    func_001B5CD8();
    func_001AF7E8();
    func_001B5C80();
    q = D_01109780;
    q[8] = 0x20;
    D_01109780[0] = 1;
    q[5] = (u32)D_01108780 | 0x20000000;
    q[1] = (u32)D_01107F80 | 0x20000000;
    q[7] = (u32)D_01108F80 | 0x20000000;
    q[2] = 0x20;
    q[3] = 0;
    q[4] = 0;
    q[6] = 0x20;
    q[9] = 0;
    func_001AFAD0(0x80000008, L_001B0248, q);
    func_001AFAD0(0x80000009, func_001B0610, q);
    func_001AFAD0(0x8000000A, func_001B0820, q);
    func_001AFAD0(0x8000000C, func_001B0358, q);
    func_001B5CD8();
    if (sceSifGetReg(0x80000002) == 0) {
        t = (s32 *)(D_01107F80 + 0x40);
        t[3] = 1;
        func_001AFCD0(0x80000002, t, 0x10, 0, 0, 0);
        while (func_001AF7A0(0) == 0)
            ;
        sceSifSetReg(0x80000002, 1);
    }
}
