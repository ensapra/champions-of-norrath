extern u8 shopItemSetAttributes__FiiPcPQ24item11description[];

s32 D_010C21D8[4];
s32 D_010C21F0[4];
s32 D_010C21F8[4];
s32 D_001BD8C0[4];

void func_00107C00(void *a, void *b);
void __8CreatureG6Point3sPQ210GameObject11resourceMapfPPc(void *a, void *b, void *c, s32 d, s32 e);
void func_0014CBF4(s32 a, void *b, s32 c);
void func_0014D270(s32 a);

typedef struct { s32 type; s32 pad; s64 p; } Msg;

void func_0010D9E0(void) {
    s32 *p = D_010C21F0;
    s32 i = 1;
    do {
        s32 v = *p;
        p++;
        if (v != 0) {
            func_0014D270(v);
        }
        i--;
    } while (i >= 0);
}

void func_0010DB88(void) {
    D_010C21D8[0] = 0;
}

void func_0010DB98(void) {
    func_0010D9E0();
    D_010C21D8[0] = 2;
}

void func_0010DA38(void *a0, void *arg1) {
    char spB0[16];
    char spA0[16];
    void *s16 = shopItemSetAttributes__FiiPcPQ24item11description + 0x1768;
    Msg msg;
    func_00107C00(spB0, s16);
    __8CreatureG6Point3sPQ210GameObject11resourceMapfPPc(spA0, spB0, s16, *(s32*)((u8*)arg1 + 0x1C), *(s32*)((u8*)arg1 + 0xC));
    msg.type = 0xC8;
    func_0014CBF4(D_010C21F8[0], (msg.p = (s64)spA0, &msg), 1);
    if (D_001BD8C0[0] != 0) {
        func_0014CBF4(D_010C21F8[1], &msg, 1);
    }
}
