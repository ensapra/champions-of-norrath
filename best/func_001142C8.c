typedef struct { s32 *head; s32 pad[2]; s32 count; } L;
extern L D_010C2A70, D_010C2A88;
extern s32 D_010C2A60[], D_010C2AAC[], D_010C2AC8[], D_010C2B04[], D_010C2B08[], D_010C2B0C[], D_010C2B10[], D_010C2B14[], D_010C2B18[], D_010C2B1C[], D_010C2B20[];
extern s32 D_001BB6C4[], D_001BD8AC[], D_001BD934[], D_001BD938[], D_001BD93C[], D_001BD954[];
s32 func_001523D0(s32);
void func_00152520(s32);
void func_0014B6F4(s32);
void func_00104F30(s32);
void func_00106E30(s32, s32);
void func_001389A0(s32);
void func_001441F8(void *, s32);
void func_0014D240(s32);
void func_0010A4D0(s32, s32, s32);

static inline void Kill(s32 e) {
    if (e != 0) {
        if (func_001523D0(D_001BD8AC[0]) == e) func_00152520(e);
        func_0014B6F4(e);
        func_00104F30(e);
        func_00106E30(0, e);
        func_00106E30(1, e);
        if (D_001BB6C4[0] == e) D_001BB6C4[0] = 0;
        func_001389A0(e);
    }
}

void func_001142C8(void) {
    s32 c;
    s32 t;
    while (D_010C2A70.count != 0) {
        Kill(*D_010C2A70.head);
        func_001441F8(&D_010C2A70, 0);
        Kill(*D_010C2A88.head);
        func_001441F8(&D_010C2A88, 0);
    }
    D_010C2B0C[0] = D_001BD954[0];
    t = D_001BD93C[0];
    if (t == -1) {
        D_010C2B04[0] = 0;
    } else if (t < D_010C2AC8[0]) {
        D_010C2B04[0] = 0;
    } else {
        D_010C2B04[0] = t - D_010C2AC8[0] + 1;
    }
    c = D_010C2B0C[0] > D_010C2AC8[0];
    D_001BD938[0] = -1;
    D_010C2A60[0] = 1;
    D_010C2B08[0] = 0;
    D_010C2B10[0] = 1;
    D_001BD934[0] = -1;
    D_010C2B14[0] = 0;
    D_010C2B18[0] = 0;
    D_010C2B1C[0] = 0;
    D_010C2B20[0] = 0;
    if (c) {
        if (D_010C2AAC[0] != 0) {
            func_0014D240(D_010C2AAC[0]);
            if (D_010C2AAC[0] != 0) func_0010A4D0(D_010C2AAC[0], c, 0x40);
        }
    } else if (D_010C2AAC[0] != 0) {
        func_0010A4D0(D_010C2AAC[0], 0, 0);
    }
}
