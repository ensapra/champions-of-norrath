extern s32 D_00483F18, D_00483F2C;
extern s8 D_00484AF8;
extern struct { char pad[0x34]; s32 f34; } *D_00484F50;
s32 func_00135150(void);
void func_001C2480(s32 arg0) {
    if (D_00483F18 != 0) return;
    if (D_00484AF8 != 0) return;
    if (D_00483F2C != 0) return;
    if ((D_00484F50->f34 ^ 1) != 0) return;
    if (func_00135150() == 0) return;
}
