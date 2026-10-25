extern char D_0046A790[];
extern char D_0046A7A0[];
extern char D_0046A7C0[];
extern char D_0046A7D8[];
extern char D_00484B30[];
extern char D_007D0798[];
s8 D_00483829;
s32 D_00483834;
s8 D_00483838;
s32 D_00483F28;
s8 D_00484318;
s32 D_004844A8;
s32 D_00484538;
s16 D_00484B18;
s8 D_00484B1A;
s32 D_00486680;

typedef struct {
    u16 w;
    u16 h;
} TexSize;

s32 func_00135150(s32);
TexSize *func_00165DC0(char *, char *);
s32 func_001671F8(char *);
void func_00172708(TexSize *, s32, s32, s32, u32);
void ovl_ntgui2_func_00191830(char *, s32);
void func_001C1FB0(void);
void func_001C2480(s32);
void func_001C3838(s32);
void func_001C45D0(void);
void func_001C6A50(void);
void func_001C6DA8(void);
void func_001C7330(void);
void func_001D0900(s32);

static inline void ShowMessage(char *name)
{
    ovl_ntgui2_func_00191830(D_007D0798, func_001671F8(name));
    D_00484B18 = 300;
    D_00484B1A = 1;
}

void func_001C3EC0(void)
{
    s32 i;

    func_001C45D0();
    for (i = 0; i < D_00484538; i++) {
        func_001C2480(i);
    }
    func_001C1FB0();
    func_001C6DA8();
    func_001C6A50();
    func_001C7330();
    if (D_00486680 == 0 && D_00484318 == 0) {
        func_001C3838(D_00484538);
    }
    if (D_00483829 != 0 && D_00483834 != 0) {
        if (D_004844A8 & 0x20) {
            TexSize *t = func_00165DC0(D_00484B30, D_0046A790);
            func_00172708(t, 320 - (s16)t->w / 2, 224 - (s16)t->h / 2, 7, 0x80808080);
        }
        if (D_00483834 > 0x4B0) {
            ShowMessage(D_0046A7A0);
        }
        if (D_00483838 != 0) {
            ShowMessage(D_0046A7C0);
        }
        if (func_00135150(0) == 0) {
            ShowMessage(D_0046A7D8);
        }
        if (D_00483834 > 0x708 || (D_00483834 > 0x258 && (D_00483838 != 0 || func_00135150(0) == 0))) {
            func_001D0900(0);
            D_00483F28 = 1;
        }
    }
}
