typedef struct { char name[0x40]; s16 h; u8 pad42[0x7C - 0x42]; s32 w; u8 data[0x40]; } Ent;
extern Ent D_004D7080[];
extern s32 D_004844A8;
extern char D_00454330[];
extern char D_004606E8[];
void func_00100948(char *);
void func_001075F0(char *, s32, s32);
void *func_00165DC0(char *, char *);
s32 func_003044FC(char *, char *);

static inline void *find(char *name)
{
    s32 i;
    for (i = 0; i < 0x40; i++) {
        if (func_003044FC(name, D_004D7080[i].name) == 0) {
            break;
        }
    }
    if (i == 0x40) {
        func_00100948(name);
        return 0;
    }
    if (D_004D7080[i].h < 0) {
        return 0;
    }
    D_004D7080[i].w = D_004844A8;
    return D_004D7080[i].data;
}

void *func_00107A80(s32 a0, s32 a1)
{
    char buf[0x40];
    void *r;

    func_001075F0(buf, a0, a1);
    r = find(buf);
    if (r == 0) {
        r = func_00165DC0(D_00454330, D_004606E8);
    }
    return r;
}
