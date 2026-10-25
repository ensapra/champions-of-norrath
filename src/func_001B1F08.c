typedef struct { char *p[4]; } NameTbl;
extern NameTbl D_00466BE0;
extern char D_004662F0[];
extern char D_00466BF0[];
s32 func_00165DC0(char *file, char *name);
void func_00172708(s32 id, s32 x, s32 y, s32 a, u32 color);

void func_001B1F08(u32 idx, s32 pos, s32 shop) {
    NameTbl t = D_00466BE0;
    if (idx < 4) {
        if (shop) {
            func_00172708(func_00165DC0(D_00466BF0, t.p[idx]), pos * 320 + 0x83, 0x15, 1, 0x80808080);
        } else {
            func_00172708(func_00165DC0(D_004662F0, t.p[idx]), pos * 320 + 0x83, 0x15, 1, 0x80808080);
        }
    }
}
