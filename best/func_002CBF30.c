typedef struct { s32 a; s32 b; u8 *ptr; s32 c; u8 pad[0x200]; s32 d; } K;
void func_00302560(char *);
extern char D_0047A1A0[];
s32 D_004865F0;
extern u8 D_008D8D48[];
s32 func_002CBF30(K *p) {
    D_004865F0 = 0;
    func_00302560(D_0047A1A0);
    u8 *tmp = D_008D8D48;
    s32 neg = -1;
    p->b = neg;
    p->ptr = tmp;
    p->c = 0;
    p->a = 0;
    p->d = 0;
    return 0;
}
