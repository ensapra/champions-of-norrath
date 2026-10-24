extern void func_001AEDB8(s32);
void func_001AEEA8(s32 c) {
    if (c == 10) {
        func_001AEDB8(13);
        func_001AEDB8(10);
    } else {
        func_001AEDB8(c);
    }
}

extern char *D_00362DC0[];
extern u8 D_004CEC30[];
void func_001A42B8(char *, char *);
void func_00190670(u32 a, char *buf) {
    if (a < 8) {
        func_001A42B8(buf, D_00362DC0[a]);
        return;
    }
    *buf = D_004CEC30[0];
}

typedef struct { s32 a, b, c, d; s32 state; s32 f, g; } Ent;
typedef struct { Ent e[4]; } Row;
extern Row D_010F4610[];
u8 *func_001903E0(s32, s32);

u8 func_001905F8(s32 a, s32 b) {
    u8 *p;
    if (D_010F4610[a].e[b].state == 0) return 0x63;
    p = func_001903E0(a, b);
    if (p[0x70] == 6 && p[0x71] == 2) return 5;
    return p[0x70];
}

s32 func_0018E960(s64 *p, s16 v) {
    p[1] = 0x42;
    p[0] = 0x44;
    p[3] = 0x49;
    p[2] = (s64)v;
    p[5] = 0x3B;
    p[4] = (0x81LL << 32) | 0x807F;
    p[7] = 0x4A;
    p[6] = 0;
    return 4;
}
