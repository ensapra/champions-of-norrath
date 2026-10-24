s32 D_00483F30;
typedef struct { volatile u8 b0; u8 b1, b2; volatile u8 b3; u8 b4; u8 pad[7]; } S88B8;
extern S88B8 D_008D88B8;
extern u8 D_008D8938[1008];
void func_003021B0(void *, s32, s32);
void func_002CB388(void) {
    s8 *base;
    s8 *p;
    s32 i;
    if (D_00483F30 == 0) {
        S88B8 *q;
        base = (s8 *)D_008D8938;
        func_003021B0(base, 0, 0x3F0);
        p = base + 0x374;
        q = &D_008D88B8;
        q->b4 = 0;
        q->b1 = 0;
        q->b0 = 1;
        q->b3 = 0x20;
        i = 7;
        do {
            i--;
            *p = -2;
            p -= 0x7E;
        } while (i >= 0);
    }
}

typedef struct { u8 pad[0x84]; u8 f84; } S85;
extern S85 D_00442668[4][16];
s32 D_00486624;
s32 D_00486650;
s32 D_00486614;

void func_002CD028(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        D_00442668[i][D_00486624 % 16].f84 = 0;
    }
    D_00486624 = (D_00486624 + 1) % 16;
}

void func_002CD0B0(void) {
    s32 i, j;
    for (i = 0; i < 4; i++) {
        for (j = 15; j >= 0; j--) {
            D_00442668[i][j].f84 = 0;
        }
    }
    D_00486650 = 0;
}

void func_002CD130(u8 *arg0) {
    s32 mask = *arg0 & 0xF;
    if (*arg0 & 0x80) {
        D_00486614 |= mask;
    } else {
        D_00486614 &= ~mask;
    }
}
