typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10[4];
    s32 unk20[9];
    s32 unk44;
    s32 pad48[4];
    s32 unk58;
    s32 unk5C[15];
    s32 pad98[(0x214 - 0x98) / 4];
    s32 unk214[(0x24C - 0x214) / 4];
} Cfg11BAC8;

extern Cfg11BAC8 D_001C3990;
extern s32 D_010C4CF4[];
extern s32 D_010C4CF8[];
void func_00107DF0(void *);
void func_00108DA8(s32);
void func_0010CC58(s32);
void func_0011B8A8(s32, s32, s32, s32);
void func_0011BCA0(void);
void func_0011BEF8(void);
void func_0011BFE0(void);
void func_0013B7A8(s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_0013B9A8(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_0013DBE0(s32);
void func_00152AD0(void *);

void func_0011BAC8(Cfg11BAC8 *arg0) {
    D_001C3990 = *arg0;
    func_0011B8A8(D_001C3990.unk10[0], D_001C3990.unk10[1], D_001C3990.unk10[2], D_001C3990.unk10[3]);
    func_00107DF0(&D_001C3990);
    func_00152AD0(D_001C3990.unk214);
    func_00108DA8(D_001C3990.unk58);
    func_0013B7A8(D_001C3990.unk20[0], D_001C3990.unk20[1], D_001C3990.unk20[2], D_001C3990.unk20[3], D_001C3990.unk20[4], D_001C3990.unk20[5], D_001C3990.unk20[6], D_001C3990.unk20[7], D_001C3990.unk20[8]);
    func_0010CC58(D_001C3990.unk44);
    func_0013B9A8(D_001C3990.unk5C[0], D_001C3990.unk5C[1], D_001C3990.unk5C[2], D_001C3990.unk5C[3], D_001C3990.unk5C[4], D_001C3990.unk5C[5], D_001C3990.unk5C[6], D_001C3990.unk5C[7],
                  D_001C3990.unk5C[8], D_001C3990.unk5C[9], D_001C3990.unk5C[10], D_001C3990.unk5C[11], D_001C3990.unk5C[12], D_001C3990.unk5C[13], D_001C3990.unk5C[14]);
    func_0013DBE0(D_001C3990.unkC);
    D_010C4CF4[0] = D_001C3990.unk8;
    D_010C4CF8[0] = D_001C3990.unk4;
    func_0011BCA0();
    func_0011BFE0();
    func_0011BEF8();
}
