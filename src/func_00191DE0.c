typedef struct Entry Entry;
struct Entry {
    char pad0[0x2E8];
    u32 tag;
    u32 pad2EC;
    Entry *next;
    char pad2F4[0x300 - 0x2F4];
};

extern s32 func_003021B0(void *, s32, s32);
s32 D_004844D8;
s32 D_004844DC;
Entry *D_00486A68;
extern Entry D_007941F0[128];
extern u8 D_007AC1F0[];
extern u8 D_00333DF0[];
extern u8 D_00334120[];

void func_00191DE0(void)
{
    s32 i;
    s32 n;
    u32 val;

    D_004844D8 = 0;
    func_003021B0(D_007941F0, 0, sizeof(D_007941F0));
    for (i = 0; i < 127; i++) {
        D_007941F0[i].next = &D_007941F0[i + 1];
    }
    D_007941F0[127].next = NULL;
    D_00486A68 = D_007941F0;
    func_003021B0(D_007AC1F0, 0, 0xE10);
    n = (D_00334120 - D_00333DF0 + 15) >> 4;
    val = ((0x4000 - (n << 4)) >> 3) + 2;
    val |= 0x14000000;
    for (i = 0; i < 128; i++) {
        D_007941F0[i].tag = val;
    }
    D_004844DC = 0;
}
