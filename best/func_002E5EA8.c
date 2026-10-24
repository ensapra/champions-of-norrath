typedef struct { s32 f0; u8 *f4; s32 f8; s32 fC; s32 f10; s32 f14; s32 f18; } Ent1C;
extern Ent1C D_008DD8D0[][4];
u8 *func_002D39B0(s32, s32);
s32 func_002D3BC8(s32 arg0, s32 arg1) {
    u8 *p;
    if (D_008DD8D0[arg0][arg1].f10 == 0) {
        return 0x63;
    }
    p = func_002D39B0(arg0, arg1);
    if (p[0x70] == 6) {
        if (p[0x71] == 2) {
            return 5;
        }
    }
    return p[0x70];
}

s32 func_002E4AC0(s32, s32);
s32 func_002E5E28(s32 a) {
    s32 r;
    s32 i;
    while (1) {
        r = func_002E4AC0(a, 0);
        if (r < 0) return -0x21C;
        if (r == 1) break;
        for (i = 0x10000; i != -1; i--) {
        }
    }
    return 0;
}

s32 func_002E4E48(s32, s32, void *, s32, s32);
s32 func_002E5EA8(s32 a, s32 *p) {
    if (func_002E4E48(a, 0x1E, p, 0, 4) < 0) return -0x21E;
    return *p;
}

s32 func_002E5EE8(s32 a, s32 *p) {
    if (func_002E4E48(a, 0x1F, p, 0, 4) < 0) return -0x21E;
    return *p;
}
