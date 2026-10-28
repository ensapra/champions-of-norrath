s32 func_00165238(void);
s32 func_001663F0(s32);
void func_00167E68(void);
void func_00190A48(s32, s32, void *);
void func_001911F8(s32);
void func_00191200(s32, s32);
void func_001CB5F8(s32);
void func_0024AF80(s32);
void func_0024B7F8(void);
typedef struct { s32 pad0[2]; s32 f8; s32 pad1[21]; s32 f60; s32 pad2[8]; } T;
extern T D_0034BEB8;
s32 D_00483F1C;
s32 D_004844A4;
s8 D_004844AC;
s32 D_0048667C;
s64 func_002CFC68(s32 (*callback)(void)) {
    s32 done = 0;
    D_004844A4 = 0;
    func_001911F8(2);
    D_004844AC = 1;
    do {
        func_00191200(D_0048667C, 0);
        func_00167E68();
        if (callback) done = callback();
        func_00165238();
        if (D_00483F1C > 0 &&
            !(D_0034BEB8.f8 & 0xFF0FFFFF) &&
            !(D_0034BEB8.f60 & 0xFF0FFFFF))
            D_00483F1C = D_00483F1C - 1;
        D_004844A4++;
        func_00190A48(0, D_00483F1C, &D_0034BEB8);
        func_0024B7F8();
    } while (done == 0);
    func_001CB5F8(1);
    func_001911F8(1);
    func_0024AF80(0);
    func_0024AF80(1);
    func_0024AF80(2);
    return func_001663F0(1);
}
