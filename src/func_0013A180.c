typedef struct {
    u8 pad0[0xAC];
    f32 xAC;
    f32 xB0;
    u8 pad1[0x5570 - 0xB4];
    s32 x5570;
    u8 pad2[0x5DB0 - 0x5574];
} Ent408600;

extern Ent408600 D_00408600[];
s32 D_00484538;

typedef struct {
    u8 pad[0x74];
    s32 x74;
} S_0034B440;
extern S_0034B440 D_0034B440;
void *func_001441B8(s32);
void func_002C8BC0(void *, s32, s32, s32);
void func_00113948(s32, void *);

s32 func_0013A180(void) {
    s32 i;
    void *p;
    for (i = 0; i < D_00484538; i++) {
        if (D_00408600[i].xAC > 0.0f)
            D_00408600[i].xAC = D_00408600[i].xB0;
        if (D_00408600[i].x5570 != 0) {
            p = func_001441B8(0x6C);
            if (p != NULL) {
                func_002C8BC0(p, 1, D_00408600[i].x5570, D_0034B440.x74);
            }
            func_00113948(D_00408600[i].x5570, p);
        }
    }
    return 0;
}
