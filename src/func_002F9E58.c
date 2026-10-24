s32 copy_words(s32 *d, s32 *s, u32 n)
{
    u32 i = 0;
    n >>= 2;
    if (n)
        do {
            s32 v = *s;
            i++;
            s++;
            *d = v;
            d++;
        } while (i < n);
    return 0;
}

typedef void (*Fn)(void);
extern u8 D_00453970[];
extern void *D_004480D0[];
extern s32 D_004480D4[];
extern void func_002FC558(void *);

void func_002F9E58(void)
{
    while (*(void **)D_004480D0[0]) {
        void **q = D_004480D0[0];
        D_004480D0[0] = q + 1;
        ((Fn)*q)();
    }
    if (D_004480D4[0] == 0) {
        D_004480D4[0] = 1;
        func_002FC558(D_00453970);
    }
}

u32 D_00483E58;
s32 D_00486C68;
extern s32 D_0042E220[];
extern void *D_0042E238[];

s32 func_0025AE40(void)
{
    u32 state;
    s32 r;

    state = D_00483E58 * 0x19660D + 0x3C6EF35F;
    D_00483E58 = state;
    r = (s32)(state >> 16) % D_0042E220[D_00486C68];
    return *(s32 *)((u8 *)D_0042E238[D_00486C68] + r * 8);
}

s32 D_00486C60;
s32 D_00486C58;
u8 D_00483F30;
u8 D_00485BEC;
u8 D_00486CBB;
u8 D_00486CBA;
u8 D_00485BDE;
u8 D_00485BDF;
s32 D_00486C78;
s32 D_00486C6C;
s32 D_00486CB4;
s32 D_00486CB0;

extern void func_0025B970(void);
extern void func_0025BBD0(s32, s32);

void func_0025AD38(s32 arg0, s32 arg1)
{
    if (D_00486C60 == 0) {
        if (D_00486C58 == 0) {
            D_00485BEC = arg0;
            func_0025B970();
            D_00486CBB = arg1;
            D_00486CBA = D_00483F30;
            D_00486C78 = 0;
            D_00486C6C = 0;
            D_00486CB4 = 0;
            D_00486CB0 = 0;
            D_00485BDE = 0;
            D_00485BDF = 0;
            func_0025BBD0(3, 0);
        }
    }
}
