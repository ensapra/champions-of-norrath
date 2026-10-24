typedef struct { s32 f0, f4, f8, fC; u8 pad[0x20]; } Sub24F;
typedef struct { u8 pad0[0x14]; s32 active; u8 pad1[0x8]; s32 mask; u8 pad2[0x3C]; Sub24F sub[7]; u8 pad3[0x10]; s32 count; } Ent24F;
extern Ent24F D_007DD290[];
void func_0024F218(s32 index) {
    Ent24F *e = &D_007DD290[index];
    s32 i;
    for (i = 0; i < e->count; i++) {
        if (e->sub[i].fC & 8) {
            e->sub[i].fC &= ~8;
            return;
        }
    }
}
