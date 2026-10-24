extern s8 D_00483829;
extern s32 D_00483F14;
extern s32 D_00483F30;
extern u8 D_00484300;
extern s8 D_00486CC0[5];
extern s8 D_00486CC5;

void func_0025B970(void) {
    if (D_00483829 == 0) {
        D_00486CC0[D_00486CC5] = D_00483F14;
        D_00486CC5++;
        if (D_00483F30 == 0) {
            D_00484300 = 1;
            D_00483F14 = 1;
        }
    }
}

extern s32 D_00483E88;
extern s32 D_00486C7C;
void func_001D1108(char *);
s32 func_00142CE8(char *, s32);
s32 func_00191BD8(char *, s32);
void func_0015E010(char *);

void func_0025B5A8(char *p, s32 size) {
    char buf[0x100];
    s32 tmp;
    func_001D1108(buf);
    size = size - D_00483E88 - 0x18;
    D_00486C7C = func_00142CE8(p + 8, size);
    __builtin_memcpy(p, &D_00486C7C, 4);
    p += D_00486C7C;
    size -= D_00486C7C;
    tmp = func_00191BD8(p + 0x10, size + 8);
    p += 8;
    __builtin_memcpy(p, &tmp, 4);
    p += tmp;
    func_0015E010(p + 8);
}
