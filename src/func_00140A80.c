void func_00140070(void);
void func_0013F930(void);
extern u8 D_00461E40[];
extern u8 D_00461E30[];
void func_00191490(void *, s32, void *, s32);
void func_00194300(s32 *);
extern s32 D_00486890;
extern s32 D_00486898;
extern u8 D_004FC0C0[];
extern u8 D_0050A1C0[];
extern s32 D_005182C0[512];
extern s32 D_00518AC0[512];

void func_00140A80(void) {
    s32 v;
    s32 i, x, j, k;
    func_00191490((void *)func_00140070, 10, D_00461E40, 0);
    func_00191490((void *)func_0013F930, 21, D_00461E30, 1);
    v = 0;
    func_00194300(&v);
    for (i = 0, x = 0; i < 120; i++, x += 15) {
        for (j = 0; j < 120; j++) {
            *(s32 *)(D_004FC0C0 + x * 32 + j * 4) = 0;
            *(s32 *)(D_0050A1C0 + x * 32 + j * 4) = 0;
        }
    }
    D_00486890 = 0;
    D_00486898 = 0;
    for (k = 0; k < 512; k++) {
        D_005182C0[k] = 0;
        D_00518AC0[k] = 0;
    }
}
