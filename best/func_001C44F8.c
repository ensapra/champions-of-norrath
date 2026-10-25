typedef struct { u8 pad[0x1C]; s32 pts; s8 player; u8 pad2[3]; } Rec24;
typedef struct { u8 pad[0xE0]; s32 st[4]; u8 pad2[0x5DB0 - 0xF0]; } Plyr;
extern Plyr D_00408600[4];
extern Rec24 D_007D0588[8];
extern s32 D_007D08E0[4];
extern s32 D_007D08F0[4];
extern s32 D_007D0900[4];

void func_001C44F8(void) {
    s32 i;
    s32 v;

    for (i = 0; i < 8; i++) {
        v = D_007D0588[i].pts;
        if (v != 0) {
            D_007D0588[i].pts = 0;
            D_00408600[D_007D0588[i].player].st[2] += v;
        }
    }
    for (i = 0; i < 4; i++) {
        v = D_007D0900[i];
        if (v > 0) {
            D_007D0900[i] = 0;
            D_00408600[i].st[2] += v;
        }
    }
    for (i = 0; i < 4; i++) {
        D_007D08F0[i] = 0;
        D_007D08E0[i] = 0;
    }
}
