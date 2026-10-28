typedef struct { char name[0x40]; s16 h; u8 pad[0x3A]; s32 w; u8 data[0x40]; } Ent;
extern Ent D_004D7080[];
s32 D_004844A8;
extern char D_00454330[];
extern char D_004606E8[];
void func_00100948(void *);
void func_001075F0(void *, s32, s32);
void *func_00165DC0(char *, char *);
s32 func_003044FC(void *, char *);

void *func_00107A80(s32 a0, s32 a1) {
    char buf[0x40];
    char *bp;
    s32 i;
    void *r;
    func_001075F0(buf, a0, a1);
    bp = buf;
    i = 0;
    while (i < 0x40) {
        if (func_003044FC(bp, D_004D7080[i].name) == 0) break;
        i++;
    }
    if (i == 0x40) { func_00100948(bp); r = 0; }
    else if (D_004D7080[i].h < 0) r = 0;
    else { D_004D7080[i].w = D_004844A8; r = D_004D7080[i].data; }
    return r ? r : func_00165DC0(D_00454330, D_004606E8);
}
