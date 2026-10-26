typedef struct { s16 pad; s16 h; } Spr;
typedef struct { u8 pad0[0x34]; s32 idx0; u8 pad1[0x70]; s32 idx1; u8 pad2[0x14]; s32 mode; } Sel;
typedef struct { u8 pad[0x4C]; s32 st; u8 pad2[0x24]; } Slot;
extern Sel D_007D01F8;
extern char D_00466C00[];
extern char D_00466C10[];
extern char D_00466C20[];
extern u8 D_004086AC[];
s8 D_00483829;
s32 D_004844A8;
s32 D_00484538;
Spr *D_004848EC;
void *D_004848F0;
s32 D_00486A9C;
s32 D_00486AA0;
s32 func_00166E30(void *);
void *func_00165DC0(void *, void *);
void func_0016E860(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_00172708(void *, s32, s32, s32, s32);
void func_001AC510(void);
void func_001B1F08(s32, s32, s32);
void func_001B3500(s32);
void func_001B6E80(s32, s32, s32);

#define CLR(p, i) ((i) >= 0 && *(f32 *)((p) + (i) * 0x5DB0) <= 0.0f)
#define SLOT(i) (((Slot *)&D_007D01F8)[i].st)

void func_001B2248(void) {
    s32 i;
    if (func_00166E30(D_00466C00) == 0) {
        func_001AC510();
        if (func_00166E30(D_00466C00) != 0)
            func_001B6E80(0, 0, 1);
        return;
    }
    if (D_00484538 == 1 || D_00483829 != 0) {
        func_001B3500(0);
        if (func_00166E30(D_00466C00) != 0) {
            for (i = 0; i < 2; i++)
                func_00172708(D_004848EC, 0, i * D_004848EC->h + 0x6F, 0, 0x80808080);
        }
    } else if (D_00484538 >= 2) {
        if ((u8)D_00483829 == 0) {
            func_001B3500(1);
            func_001B3500(0);
            if (CLR(D_004086AC, D_007D01F8.idx0)) SLOT(D_007D01F8.idx0) = 2;
            if (CLR(D_004086AC, D_007D01F8.idx1)) SLOT(D_007D01F8.idx1) = 2;
            if (func_00166E30(D_00466C00) != 0) {
                for (i = 0; i < 2; i++)
                    func_00172708(D_004848EC, 0, i * D_004848EC->h + 0x6F, 0, 0x80808080);
                if (D_007D01F8.mode == 2) {
                    func_001B1F08(D_007D01F8.idx0, 0, 1);
                } else {
                    func_001B1F08(D_007D01F8.idx0, 0, 1);
                    func_001B1F08(D_007D01F8.idx1, 1, 1);
                    for (i = 0; i < 2; i++)
                        func_00172708(D_004848EC, 0x140, i * D_004848EC->h + 0x6F, 0, 0x80808080);
                    func_00172708(D_004848F0, 0x13A, 0, 1, 0x80808080);
                }
            }
        }
    }
    D_00486AA0 = (((D_004844A8 - D_00486A9C) ^ 0x14) == 0) ? 0 : D_00486AA0;
    if (D_00484538 == 1 || D_007D01F8.mode == 2) {
        func_00172708(func_00165DC0(D_00466C10, D_00466C20), 0x140, 0, 1, 0x80808080);
    } else if (SLOT(0) == 2) {
        func_0016E860(func_00165DC0(D_00466C10, D_00466C20), 0, 0, 1, 0x80808080, 0, 0, 0x280, 0x1C0, 1, 0);
    }
}
