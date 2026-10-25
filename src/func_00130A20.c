extern s32 D_001C4EA0[];
extern s32 D_010CD474[];
extern s32 D_001C6840[];
extern s32 D_001BB6C4[];
void func_00114948(s32, s32, s32, s32, void *, s32);
void func_00118140(void *, s32, void *, void *, void *);
void func_00118278(s32, void *);
s32 func_0011BA18(s32);
void func_00130648(void);
void func_001307D8(void);
void func_0013F460(void);
void func_0013F488(void);
void func_0013FA70(void);

void func_00130A20(void) {
    s32 msg[8];
    s32 i = D_001C4EA0[0];
    if (i != 3 && D_010CD474[0] == 0 && D_001C6840[i * 3] == 2) {
        func_00114948(1, 0x1F4, 0xFA, func_0011BA18(i + 0x3D), func_001307D8, D_001BB6C4[0]);
        return;
    }
    func_00118140(msg, 1, func_0013F460, func_0013F488, func_0013FA70);
    msg[2] = (s32)func_00130648;
    func_00118278(0, msg);
}
