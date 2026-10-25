typedef struct { char pad[0x24]; int f; } S;
typedef struct { int x; int a; int b; char pad[0x24]; } T;
extern int SignalSema_2(int);
extern int PollSema_2(int);
extern int func_002D8270(void *, int, int, void *, int, void *, int, void *, int);
extern void func_002E0DE0(void);
extern int D_00446070;
extern int D_00446074;
extern S D_008E6B40;
extern T D_008E6BC0;
extern char D_008E8100[];

int func_002E21B0(int a, int b) {
    int r;
    if (D_008E6B40.f != 0) {
        if (PollSema_2(D_00446074) < 0) return -0xC8;
        D_008E6BC0.a = a;
        D_008E6BC0.b = b;
        r = func_002D8270(&D_008E6B40, 0x11, 1, &D_008E6BC0, 0x30, D_008E8100, 4, func_002E0DE0, 0);
        if (r == 0) D_00446070 = 0x11;
        else SignalSema_2(D_00446074);
        return r;
    }
    return -0x64;
}
