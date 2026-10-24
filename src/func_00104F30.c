extern void func_001B6328(s32);
void func_001001C8(void) { func_001B6328(0); }

typedef struct { s32 v; u8 pad[0xB0]; } Ent104;
extern Ent104 D_010B6800[];
extern void func_00105440(s32);
void func_00104F30(s32 a) {
    s32 i;
    for (i = 0; i < 0x100; i++) {
        if (D_010B6800[i].v == a) func_00105440(i);
    }
}

void func_001050A8(s32 *p, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 s0, s32 s8) {
    s32 i;
    p[2] = a3;
    p[3] = a4;
    p[4] = a5;
    p[0xD] = a6 << 4;
    p[0xE] = a7 << 4;
    p[0xF] = s0 << 4;
    p[0x10] = s8 << 4;
    p[5] = 0;
    p[0] = a1;
    p[1] = a2;
    for (i = 4; i >= 0; i--) p[0x11 + i] = 0;
    for (i = 9; i >= 0; i--) p[0x20 + i] = 0;
    p[0x2C] = 0;
    p[0x2A] = 0;
    p[0x2B] = 0;
}

void func_00105148(s32 *p, s32 x, s32 y, s32 z) {
    s32 i;
    for (i = 0; i < 5; i++) {
        if (p[0x11 + i] == 0) {
            p[0x11 + i] = x;
            p[0x1B + i] = z;
            p[0x16 + i] = y;
            return;
        }
    }
}
