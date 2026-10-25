typedef struct {
    s32 unk0; void *unk4; s32 unk8; s32 unkC; s32 unk10; void *unk14; s32 unk18; void *unk1C; s32 unk20; s32 unk24;
} RpcData;
extern s32 D_00444968;
extern u8 D_008DEC40[];
extern u8 D_008DF440[];
extern u8 D_008DFC40[];
extern RpcData D_008E0440;
s32 func_002D7160(s32);
void func_002D71A8(void);
void func_002D7490(u32, void *, void *);
void func_002D7690(u32, void *, s32, s32, s32, s32);
void func_002DD640(void);
void func_002DD698(void);
s32 sceSifGetReg_2(u32);
void sceSifSetReg_2(u32, s32);
void func_002D7C08(void);
void func_002D7FD0(void);
void func_002D81E0(void);
void func_002D7D18(void);
#define UNCACHED(p) ((void *)((u32)(p) | 0x20000000))

void func_002D7908(void) {
    u8 *p;
    func_002DD640();
    if (D_00444968 != 0) {
        func_002DD698();
        return;
    }
    D_00444968 = 1;
    func_002DD698();
    func_002D71A8();
    func_002DD640();
    D_008E0440.unk8 = 0x20;
    D_008E0440.unkC = 0;
    D_008E0440.unk10 = 0;
    D_008E0440.unk18 = 0x20;
    D_008E0440.unk24 = 0;
    D_008E0440.unk20 = 0x20;
    D_008E0440.unk4 = UNCACHED(D_008DEC40);
    D_008E0440.unk14 = UNCACHED(D_008DF440);
    D_008E0440.unk1C = UNCACHED(D_008DFC40);
    D_008E0440.unk0 = 1;
    func_002D7490(0x80000008, func_002D7C08, &D_008E0440);
    func_002D7490(0x80000009, func_002D7FD0, &D_008E0440);
    func_002D7490(0x8000000A, func_002D81E0, &D_008E0440);
    func_002D7490(0x8000000C, func_002D7D18, &D_008E0440);
    func_002DD698();
    if (sceSifGetReg_2(0x80000002) != 0) return;
    p = D_008DEC40 + 0x40;
    *(s32 *)(p + 0xC) = 1;
    func_002D7690(0x80000002, p, 0x10, 0, 0, 0);
    while (func_002D7160(0) == 0) {
    }
    sceSifSetReg_2(0x80000002, 1);
}
