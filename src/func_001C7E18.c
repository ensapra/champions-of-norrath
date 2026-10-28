typedef struct { s32 a, b, c; } T12;
extern s8 D_00484AF8;
extern s8 D_00483F45;
extern u8 *D_00484F50;
extern s8 D_004866CC;
extern s32 D_00483F18;
extern s8 D_00484B0D;
extern T12 D_007D0578;
extern u8 D_007D0758[];
void ovl_ntgui2_func_00191830(void *, s32);
void func_001C7E18(T12 *p, s32 a1) {
    T12 t = *p;
    if (D_00484AF8 == 0 && D_00483F45 == 0 && (*(s32 *)(D_00484F50 + 0x34) ^ 1) == 0 && D_004866CC == 0 && D_00483F18 == 0) {
        D_00484B0D = 5;
        ovl_ntgui2_func_00191830(D_007D0758, a1);
        D_007D0578 = t;
    }
}
