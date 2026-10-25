s32 func_00165DC0(char *, char *);
void func_00191490(void (*)(void), s32, char *, s32);
extern s32 D_004286B0[];
extern char D_0046A7F0[];
extern char D_0046A800[];
extern char D_0046A810[];
extern char D_0046A820[];
extern char D_0046A838[];
extern u8 D_00484AF9;
extern u8 D_00484B00;
extern f32 D_00484B08;
extern char D_00484B30[];
extern char D_00484B80[];
void func_001C3BC0(void);
void func_001C3EC0(void);

void func_001C40C0(void) {
    func_00191490(func_001C3BC0, 0x32, D_00484B80, 0);
    func_00191490(func_001C3EC0, 0x33, D_0046A7F0, 1);
    D_004286B0[0] = func_00165DC0(D_00484B30, D_0046A800);
    D_004286B0[1] = func_00165DC0(D_00484B30, D_0046A810);
    D_004286B0[2] = func_00165DC0(D_00484B30, D_0046A820);
    D_004286B0[3] = func_00165DC0(D_00484B30, D_0046A838);
    D_00484B08 = 1.0f;
    D_00484AF9 = 0;
    D_00484B00 = 0;
}
