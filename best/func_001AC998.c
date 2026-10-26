typedef struct { s32 pad0[13]; s32 s34; s32 pad1[4]; s32 s48; s32 s4C; s32 pad2[2]; s32 s58; s32 pad3[0x74/4 - 0x5C/4]; } P;
typedef struct { s32 pad[3]; s32 fl; s32 pad2[18]; } Q;
typedef struct { char pad[8]; s8 a, b; char pad2[0x5DB0 - 10]; } R;
typedef struct { char pad[0x1348]; s32 st; char pad2[0x5DB0 - 0x134C]; } O;
extern P D_00427288[];
extern Q D_00332FDC[];
extern R D_00408650[];
extern O D_00408600[];
extern char D_00466330[];
s8 D_00483F54[4];
s32 D_00484048;
s32 D_0048404C;
s32 D_00484538;
s32 D_00484F48;
void func_001B1358(s32, void *, s32);
void func_001B17D0(s32, s32, s32);
s32 func_001B1E50(s32, void *, s32);
void func_001BC140(s32, s32, void *, s32);
void func_001D3E88(char *);

void func_001AC998(s32 idx)
{
    P *p = &D_00427288[idx];
    s32 v, s, i;
    if ((D_00427288[0].s4C == 2 && D_00427288[1].s4C == 2) ||
        (D_00484F48 == 1 && D_00427288[idx].s4C == 2)) {
        func_001B1358(idx, D_00427288, 2);
        return;
    }
    if (p->s4C == 2) {
        v = func_001B1E50(D_0048404C, D_00427288, 2);
        if (D_00427288[0].s34 == v) return;
        if (D_00427288[1].s34 == v) return;
        if (v < 0) return;
        if (D_00427288[idx].s34 == v) return;
        if (D_00408650[v].a < D_00408650[v].b) {
            func_001B17D0(idx, v, 1);
            return;
        }
        func_001B17D0(idx, v, 0);
        return;
    }
    if (p->s4C == 0) {
        s32 a = 3;
        if (p->s58 ^ 1) a = 2;
        func_001BC140(idx, D_00427288[idx].s34, &D_00427288[idx], a);
        s = D_00427288[idx].s34;
        if ((D_00332FDC[s].fl & D_00484048) || (D_00332FDC[s].fl & 0x100)) {
            if (D_00483F54[s] == 0) {
                if (p->s58 != 0) {
                    p->s58 = 0;
                    return;
                }
                if (*(s32 *)((char *)p + 0x30) != 0) {
                    *(s32 *)((char *)p + 0x30) = 0;
                    return;
                }
                for (i = 0; i < D_00484538; i++) {
                    if (D_00408600[i].st >= 2) func_001D3E88(D_00466330);
                }
                p->s34 = -1;
                p->s4C = 2;
            }
        }
    }
}
