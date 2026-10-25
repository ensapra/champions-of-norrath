extern "C" {
void func_00177810(f32, f32, f32, f32);
void func_0017DA20(f32);
void func_00191490(void (*)(void), s32, const char *, s32);
void func_001D0900(s32);
void func_0026FA88(s32, s32);
void func_002D0D98(void);
void func_00304640(void *, s32);
void func_0018C378(void);
void func_0018E428(void);

extern char D_00463FB0[];
extern char D_00463FC0[];
extern f32 D_004801D4;
extern s32 D_00483F1C;
extern s32 D_00483F30;
extern s8 D_00484318;
extern s8 D_00484319;
extern s8 D_0048431A;
extern s32 D_00484328;
extern s32 *D_0048432C;
extern s32 D_00484330;
extern s8 D_00484334;
extern s32 D_00484344;
extern s32 D_00484348;
extern s32 D_004843A4;
extern s32 D_004843A8;
extern s8 D_00484AF8;
extern s32 D_00484F50;
extern s32 D_00486A14;
extern s32 D_00486A20;
extern char D_00790F10[];

void func_0018E1C0(s32 *arg0, s32 arg1)
{
    f32 b;
    s32 flags = *arg0;

    D_004843A8 = 0;
    D_004843A4 = 0;
    if (!(flags & 2)) {
        func_002D0D98();
    }
    func_001D0900(0);
    D_0048432C = arg0;
    D_0048431A = 0;
    D_00484344 = 0;
    D_00484348 = 0;
    D_00484328 = 1;
    D_00486A20 = 0;
    D_00484318 = 1;
    D_00484319 = 1;
    D_00484334 = 0;
    D_00486A14 = 0;
    D_00484330 = 0;
    func_0017DA20(1800.0f);
    D_00483F1C = 60;
    D_00484AF8 = 1;
    func_0026FA88(D_00484F50, 0);
    b = D_004801D4;
    if (D_00483F30 != 0) {
        func_00177810(50.0f, b, 80.0f, 1.0f);
    } else {
        func_00177810(50.0f, b, 80.0f, 0.75f);
    }
    func_00304640(D_00790F10, arg1);
    func_00191490(func_0018E428, 300, D_00463FB0, 0);
    func_00191490(func_0018C378, 300, D_00463FC0, 1);
}
}
