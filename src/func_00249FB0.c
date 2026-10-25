typedef struct { u32 type : 16; u32 id : 16; s32 val; } Cmd8;
extern s32 D_00485950;
extern s32 D_00485954;
extern s32 D_00486BC0[2];
extern s32 D_00486BC8[2];
extern Cmd8 D_007DC280[];
void FlushCache_2(s32);
void func_002E03D0(void *, s32, s32, s32);
void func_002E0478(s32, s32, s32, s32, s32);

static inline void push(s32 n, s32 id, s32 v) {
    if (n < 0x200) {
        D_007DC280[n].id = id;
        D_007DC280[n].type = 2;
        D_007DC280[n].val = v;
        (*(volatile s32 *)&D_00485954)++;
    }
}

void func_00249FB0(void) {
    s32 i;
    s32 j;
    D_00486BC0[0] &= ~D_00486BC8[0];
    D_00486BC0[1] &= ~D_00486BC8[1];
    for (i = 0; i < 2; i++) {
        s32 n = D_00485954;
        s32 v = D_00486BC0[i];
        if (v != 0) {
            push(n, i | 0x1500, v);
            D_00486BC0[i] = 0;
        }
    }
    for (j = 0; j < 2; j++) {
        s32 n = D_00485954;
        s32 v = D_00486BC8[j];
        if (v != 0) {
            push(n, j | 0x1600, v);
            D_00486BC8[j] = 0;
        }
    }
    if (D_00485954 != 0) {
        FlushCache_2(0);
        func_002E03D0(D_007DC280, D_00485950, D_00485954 * 8, 1);
        func_002E0478(1, 0x80B0, D_00485950, 0, D_00485954);
        D_00485954 = 0;
    }
}
