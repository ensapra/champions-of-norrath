s32 D_001D2090;
s32 D_001D2094;
s32 D_001D2098;
s32 D_001D209C;
s32 D_001D20A0;
s32 D_001D20A4;
s32 D_001D20A8;
s32 D_001D20AC;
s32 D_001D20B0;
s32 D_001D20B4;
s32 D_010ECFC0;
u8 D_0050F9F0[16];
u8 jtbl_004C006C[65428];

typedef struct { s32 status; void (*entry)(void); s32 stack; s32 size; s32 prio; s32 gp; s32 pad[2]; s32 id; s32 pad2[3]; } TP;

s32 func_001AD520(void *);
s32 func_001AD540(s32, s32);
void func_0017D568(s32, s32, void *, void *, void *, void *, void *, void *);
void func_001AF710(void *);
void func_0017DB18(void);

s32 func_0017D8F0(s32 arg0) {
    TP tp;
    s32 id;

    if (D_001D20B4 >= 0) {
        return -1;
    }

    D_001D2090 = 0;
    D_001D2094 = 0;
    D_001D2098 = 0;
    D_001D209C = 0;
    D_001D20A0 = 0;
    D_001D20A4 = 0;
    D_001D20A8 = 0;
    D_001D20AC = 0;
    D_001D20B0 = 0;

    func_0017D568(1, 0xE620, &D_001D209C, &D_001D20A0, &D_001D20A4, &D_001D20A8, &D_001D20AC, &D_001D20B0);

    tp.entry = func_0017DB18;
    tp.stack = (s32)&D_010ECFC0;
    tp.size = 0x1000;
    tp.prio = arg0;
    tp.gp = (s32)D_0050F9F0;

    id = func_001AD520(&tp);
    D_001D20B4 = id;
    if (id >= 0) {
        tp.id = id;
        if (func_001AD540(id, 0) >= 0) {
            return tp.id;
        }
        func_001AF710(jtbl_004C006C + 0xC66C);
    }
    return -1;
}
