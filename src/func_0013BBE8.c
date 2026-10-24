typedef struct {
    u8 pad0[0xE8];
    s32 xE8;
    u8 pad1[0x5570 - 0xEC];
    s32 x5570;
    u8 pad2[0x5DB0 - 0x5574];
} Ent408600;

extern Ent408600 D_00408600[];
s32 D_00484538;

s32 func_0013BB88(void *arg0, s32 *arg1) {
    s32 i;
    for (i = 0; i < D_00484538; i++) {
        s32 v = D_00408600[i].xE8 - arg1[1] / D_00484538;
        if (v < 0) {
            v = 0;
        }
        D_00408600[i].xE8 = v;
    }
    return 0;
}

s32 func_0013BBE8(void) {
    s32 i;
    s32 sum = 0;
    for (i = 0; i < D_00484538; i++) {
        sum += D_00408600[i].xE8;
    }
    return sum;
}

typedef struct {
    u8 pad[0x74];
    s32 x74;
} S_0034B440;
extern S_0034B440 D_0034B440;
void *func_001441B8(s32);
void func_002CA2C8(void *, s32, s32, s32);
void func_00113948(s32, void *);

s32 func_0013BCF8(void) {
    s32 i;
    void *p;
    for (i = 0; i < D_00484538; i++) {
        if (D_00408600[i].x5570 != 0) {
            p = func_001441B8(0x20);
            if (p != NULL) {
                func_002CA2C8(p, 1, D_00408600[i].x5570, D_0034B440.x74);
            }
            func_00113948(D_00408600[i].x5570, p);
        }
    }
    return 0;
}

s32 D_00483F1C;
s32 D_00483F20;

s32 func_0013BE30(void *arg0, s32 *arg1) {
    D_00483F20 = 1;
    D_00483F1C = arg1[1];
    return 0;
}
