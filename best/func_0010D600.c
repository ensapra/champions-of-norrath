typedef struct Win { s32 a; s32 b; char pad[0x78]; s32 f80; char pad2[0x24]; void *cb1; void *cb2; void *cb3; char pad3[0xC0 - 0xB4]; } Win;
extern s32 D_001BD8C0[], D_001BD8C4[], D_001C3990[], D_010C21F0[], D_010C2208[];
extern char func_00105078[], func_0010D238[], func_0010D478[], func_0010D588[];
void func_001050A8(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_00105190(void *);

void func_0010D600(void) {
    Win w1;
    Win w2;
    s32 i;
    s32 *p;
    i = 0;
    if (D_001BD8C0[0] + 1 > 0) {
        p = D_010C21F0;
        do {
            s32 x = 0x150;
            if ((D_001C3990[0] ^ 1) == 0) x = 0x16E;
            func_001050A8(&w1, *p++, 1, 0, 1, 5, 0x280, x, 0, 0);
            i++;
            w1.cb1 = func_00105078;
            func_00105190(&w1);
        } while (i < D_001BD8C0[0] + 1);
    }
    i = 1;
    D_001BD8C4[0] = 0x14;
    func_001050A8(&w2, D_010C21F0[0], 1, 2, 0x14, 0xA, 0x20, ((D_001C3990[0] ^ i) == 0) ? 0x16E : 0x150, 0, 0);
    w2.cb1 = func_0010D588;
    w2.cb2 = func_0010D238;
    w2.cb3 = func_0010D478;
    w2.f80 = 0;
    func_00105190(&w2);
    D_010C2208[0] = i;
}
