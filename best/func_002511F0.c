s32 func_00250D48(s32, s32, s32);
s32 func_002D70D0(void *);
s32 func_003044FC(void *, void *);
s32 func_00305328(void *, void *);
extern u8 D_0037F988[];
extern char D_00474D00[];
extern char D_00485A78[];
extern char D_00485AD0[];
typedef struct { char pad[0x34]; s32 f34; } S2511F0;
S2511F0 *D_00484F50;
s32 D_00486694, D_00485AC8, D_00485BE4, D_00486C9C, D_00486CA4;
s32 D_00486C34, D_00486C60;
f32 D_00486CA0, D_0048204C, D_00482050;
s32 D_00483F14, D_00483F18, D_00483F2C, D_00483F30;
s8 D_00483F45;

void func_002511F0(void) {
    s32 v;
    f32 t;
    if (D_00486CA0 < 402.0f) {
        if (D_00486C34 == 3) {
            t = D_00486CA0 + D_0048204C;
        } else {
            t = D_00482050 + D_00486CA0;
        }
        D_00486CA0 = t;
    } else {
        D_00486CA0 = 402.0f;
    }
    if (D_00483F14 == 0 || D_00483F2C != 0 || D_00483F45 != 0) {
        v = D_00485AC8 + 1;
        if (v >= 0x3D) {
            D_00485AC8 = 0;
            D_00486CA4++;
        } else {
            D_00485AC8 = v;
        }
    }
    D_00485BE4++;
    if (D_00486C60 != 0 && D_00486C34 != 0 && D_00486C34 != 7) return;
    if (D_00486C34 != -1) return;
    if (D_00486C9C <= 0) return;
    if (D_00483F30 != 0) return;
    if (D_00486694 != 0 && func_003044FC(D_0037F988, D_00485A78) != 0) return;
    if (D_00483F18 != 0) return;
    if (D_00484F50->f34 ^ 1) return;
    if (func_00305328(D_0037F988, D_00485AD0) != 0) return;
    if (D_00483F14 != 0) return;
    if (D_00486C9C == 0x63) {
        D_00486C9C = 0;
    } else if (--D_00486C9C == 0) {
        func_002D70D0(D_00474D00);
        func_00250D48(0, 1, 0);
    }
}
