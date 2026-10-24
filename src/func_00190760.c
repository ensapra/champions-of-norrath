typedef union { f64 d; struct { u32 lo; u32 hi; } w; } DU;
f64 func_0019F848(f64 x) {
    u32 high;
    do { DU u_; u_.d = x; high = u_.w.hi; } while (0);
    do { DU u_; u_.d = x; u_.w.hi = high & 0x7FFFFFFF; x = u_.d; } while (0);
    return x;
}

extern char *D_00362DE0[];
extern u8 D_004CEC30[];
void func_001A42B8(char *, char *);
void func_00190760(u32 a, char *buf) {
    if (a < 4) {
        func_001A42B8(buf, D_00362DE0[a]);
        return;
    }
    *buf = D_004CEC30[0];
}

typedef struct { s32 a, b, c, d; s32 state; s32 f, g; } Ent;
typedef struct { Ent e[4]; } Row;
extern Row D_010F4610[];
u8 *func_001903E0(s32, s32);

u8 func_00190710(s32 a, s32 b) {
    if (D_010F4610[a].e[b].state == 0) return 0;
    return func_001903E0(a, b)[0x71];
}

s32 func_001906A8(s32 a, s32 b, u8 v) {
    if (D_010F4610[a].e[b].state == 0) return 0;
    func_001903E0(a, b)[0x71] = v;
    return 1;
}
