typedef struct { s32 a, b; u8 *items; u32 count; } List;
typedef struct { u8 pad0[0x44]; s32 state; u8 pad1[0x20]; u32 n; u8 pad2[0xC]; u8 *tbl; } Ent;
extern u8 D_001D27B0[];
extern List D_001D82C0;
extern u8 D_001D82D0[];
extern List D_001DD0F0;
extern u8 D_001DD100[];
extern List D_001DD380;
extern List D_001E21B0;
extern char D_004CDA30[];
extern char D_004CDA50[];
extern char D_004CDA58[];
extern s32 D_001D2328;
s32 func_00183838(void *, void *, s32);
void func_00183888(void *, void *, s32);
void func_00184AA0(void);
void func_001A2850(void *, ...);
void ExitDeleteThread(s32);

void func_00184D00(void) {
    s32 i, j, k;
    u32 n, m;
    s32 off;
    Ent *ent;
    u8 *name;
    List *l;
    u32 cap, c, o;
    s32 t;
    D_001D82C0.items = D_001D82D0;
    D_001D82C0.b = 0;
    D_001DD0F0.items = D_001DD100;
    D_001D82C0.count = 0;
    D_001D82C0.a = 0;
    D_001DD0F0.b = 0;
    D_001DD0F0.a = 0;
    D_001DD0F0.count = 0;
    func_001A2850(D_004CDA30, D_001DD380.count, &D_001DD380, D_001D82D0, D_001DD100);
    for (i = 0; i < 6; i++) {
        ent = (Ent *)(D_001D27B0 + i * 0xE90);
        if (ent->state == 3) continue;
        off = 0;
        for (n = 0; n < ent->n; n++) {
            for (j = 7, o = 0; j >= 0; j--, o += 0x30) {
                u8 *e = ent->tbl + off + o;
                u16 ty = *(u16 *)(e + 4);
                if (ty == 0) name = e + 8;
                else if (ty == 12) name = D_004CDA50;
                else continue;
                for (c = 0, t = 0; c < D_001DD380.count; c++, t += 0x28)
                    if (!func_00183838(name, D_001DD380.items + t, 10)) break;
                if (c == D_001DD380.count) {
                    l = &D_001D82C0;
                    cap = 500;
                    if (D_001E21B0.count != 0) {
                        for (c = 0, t = 0; c < D_001E21B0.count; c++, t += 0x28)
                            if (!func_00183838(name, D_001E21B0.items + t, 10)) break;
                        if (c < D_001E21B0.count) { cap = 16; l = &D_001DD0F0; }
                    }
                    for (c = 0, t = 0; c < l->count; c++, t += 0x28)
                        if (!func_00183838(name, l->items + t, 10)) break;
                    if (l->count == 0 || c == l->count) {
                        if (l->count < cap) {
                            func_00183888(l->items + l->count * 0x28, name, 10);
                            l->count++;
                        }
                    }
                }
            }
            off += 0x198;
        }
    }
    func_00184AA0();
    func_001A2850(D_004CDA58, D_001D82C0.count);
    t = D_001D2328;
    D_001D2328 = -1;
    if (t != -1) ExitDeleteThread(t);
}
