typedef struct { char pad[0xAC]; f32 a; f32 b; f32 c; char pad2[0xC]; f32 d; f32 e; f32 g; char pad3[0x5DB0 - 0xD0]; } Ent;
typedef struct { char pad[0x58]; } Rec;
extern Ent D_00408600[];
extern s32 D_0034B918[];
extern Rec D_0034BEC0[];
extern s32 D_0034B52C[];
s32 D_004844A4;
s32 func_001AC260(s32, s32);
s32 func_002BE3B0(s32, s32);

void func_0021AAF0(char *a, char *b) {
    s32 fl = *(s32 *)(b + 0xC);
    if (!(fl & 0x20000)) {
        if (fl & 0x40) {
            if (func_001AC260(*(s32 *)(b + 0x3C0), 0x3B) > 0) {
                s32 i = *(s32 *)(b + 0x3C0);
                if (*(s32 *)&D_0034BEC0[i] & D_0034B918[i]) {
                    Ent *e;
                    s32 n;
                    *(s32 *)(b + 0xFC) = D_004844A4;
                    e = &D_00408600[i];
                    n = func_002BE3B0(D_0034B52C[0], func_001AC260(i, 0x3B));
                    if (a[0x74] == 0) {
                        e->c += (f32)n;
                        if (e->b < e->a + e->c) e->c = e->b - e->a;
                        *(s32 *)(b + 0x3A0) = 0x1E;
                    } else if (a[0x74] == 1) {
                        e->g += (f32)n;
                        if (e->e < e->d + e->g) e->g = e->e - e->d;
                        *(s32 *)(b + 0x3A8) = 0x1E;
                    }
                    *(s32 *)(a + 0x54) = D_004844A4;
                }
            }
        }
    }
}
