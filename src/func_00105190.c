typedef struct {
    s32 id; u32 flags; s32 pad0[4];
    s32 f18; s32 f1c; s32 pad1[4];
    s32 f30; s32 f34; s32 f38; s32 f3c; s32 f40;
    char pad2[0xB4 - 0x44];
} Ent;
extern Ent D_010B6800[];
s32 func_0011AD08(void);
void func_0014CECC(s32, s32 *, s32 *);
void func_0014CF78(s32, s32 *, s32 *);

s32 func_00105190(Ent e) {
    s32 i;
    s32 a, b, c, d;
    for (i = 0; i < 0x100; i++) {
        if (D_010B6800[i].id == 0) {
            if (e.flags & 4) {
                func_0014CECC(e.id, &a, &b);
                func_0014CF78(e.id, &c, &d);
                e.f34 += a;
                e.f38 += b;
                e.f3c += a + c;
                e.f40 += b + d;
            }
            e.f30 = -1;
            e.f18 = 0;
            e.f1c = 0;
            if (e.flags & 8) e.f30 = func_0011AD08();
            D_010B6800[i] = e;
            return i;
        }
    }
    return -1;
}
