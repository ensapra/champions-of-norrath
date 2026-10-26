typedef struct { u8 pad[0xBC]; s32 unkBC; u16 unkC0; u8 pad2[0x56]; s32 (*fn118)(s32, s32); s32 (*fn11C)(s32, s32, void *, void *, s32); s32 (*fn120)(s32, void *, s32, s32); } Disp;
typedef struct { u8 pad[0x10]; u8 *p4; u8 *p5; u8 *p6; u8 *p7; s32 n0; s32 n1; s32 pad2[2]; } Ent;
typedef struct { s32 a, b; s32 c, d; } __attribute__((aligned(8))) Buf;
extern Ent D_00364060[];
extern u8 D_00362FC0[];
Disp *D_00480488;
s32 D_00480480;
s32 D_00480900;
s32 D_00480904;
extern u8 D_010F6870[];
extern u8 D_010F6910[];
extern u8 D_010F69B0[];
extern u8 D_010F69D0[];
extern u8 D_010F69E0[];
extern Buf D_004CF2E0[];
extern char D_004CF040[];
extern char D_004CF2F0[];
extern char D_004CF300[];
void func_001A1568(const char *, s32, const char *);

void func_001988E8(s32 a0, s32 a1, s32 a2, s32 a3) {
    Buf buf = D_004CF2E0[0];
    s32 sel, flag, i, j, k;
    Ent *e;
    sel = D_00480488->unkC0;
    flag = D_00480488->unkBC;
    if (a2 == 0) func_001A1568(D_004CF040, 0x590, D_004CF2F0);
    if (a3 == 0) func_001A1568(D_004CF040, 0x591, D_004CF300);
    buf.a = D_00480900;
    buf.b = D_00480904;
    D_00480488->fn120(a0, &buf, 0x80000000, 0);
    D_00480488->fn118(a0, a3);
    if (flag == 0) {
        k = 0;
        if (sel == 1) { sel = 8; k = 1; }
        D_00480488->fn11C(a0, 0x80808080, D_010F69D0, &D_00480480, a3);
        D_00480488->fn11C(a0, 0x80808080, D_010F69D0 - 0x10, D_00362FC0 + k * 8, a3);
    } else {
        switch (sel) {
        case 0: sel = 1; break;
        case 1: sel = 2; break;
        case 2: sel = 3; break;
        case 3: sel = 4; break;
        case 4: sel = 5; break;
        case 5: sel = 6; break;
        case 6: sel = 7; break;
        case 7: sel = 1; break;
        default: sel = 1; break;
        }
    }
    e = &D_00364060[sel];
    D_00480488->fn11C(a0, 0x80808080, D_010F69B0, e->p6, a3);
    for (i = 0; i < e->n1; i++)
        D_00480488->fn11C(a0, 0x80808080, D_010F6870 + i * 16, e->p5 + i * 8, a3);
    for (i = 0; i < 9; i++)
        for (j = 0; j < 9; j++)
            D_00480488->fn11C(a0, 0x80808080, D_010F69E0 + (i * 9 + j) * 16, e->p7 + j * 8, a3);
    D_00480488->fn118(a0, a2);
    for (i = 0; i < e->n0; i++)
        D_00480488->fn11C(a0, 0x80808080, D_010F6910 + i * 16, e->p4 + i * 8, a2);
}
