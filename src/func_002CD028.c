s32 D_00483F30;
typedef struct { volatile u8 b0; u8 b1, b2; volatile u8 b3; u8 b4; u8 pad[7]; } S88B8;
extern S88B8 D_008D88B8;
extern u8 D_008D8938[1008];
void func_003021B0(void *, s32, s32);
void func_002CB388(void) {
    s8 *p;
    s32 i;
    if (D_00483F30 == 0) {
        S88B8 *q;
        func_003021B0(D_008D8938, 0, 0x3F0);
        p = (s8 *)D_008D8938 + 0x374;
        q = &D_008D88B8;
        i = 7;
        q->b4 = 0;
        q->b1 = 0;
        q->b0 = 1;
        q->b3 = 0x20;
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

void func_002CD028(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        D_00442668[i][D_00486624 % 16].f84 = 0;
    }
    D_00486624++;
    D_00486624 %= 16;
}
