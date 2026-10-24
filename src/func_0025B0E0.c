s32 D_00486C34;
s32 D_00486C9C;
s32 func_001915C0(void *);
extern s32 func_003044FC(void *, void *);
extern char D_00474CC8[];
extern char D_00485A78[];

void func_0025B0E0(void *arg0) {
    if (D_00486C34 != 7 && D_00486C34 != 3) {
        if (func_001915C0(D_00474CC8) == 0) {
            if (func_003044FC(arg0, D_00485A78) == 0) {
                D_00486C9C = 10;
            } else {
                D_00486C9C = 1;
            }
        }
    }
}
