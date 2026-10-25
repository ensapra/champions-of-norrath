extern s32 D_001C4E9C[];
extern s32 D_001BB6C4[];
extern char D_001BB720[];
extern char D_004CA5B0[];
extern s32 D_010CD438[];
extern s32 D_010CD448[];
extern s32 D_010CD780[];
void func_0010B378(s32, void *);
void func_00114948(s32, s32, s32, s32, void *, s32);
s32 func_001167E0(s32);
s32 func_0011BA18(s32);
void func_00131120(void);
void func_00138990(s32);

void func_00131198(void) {
    s32 sel = -1;
    s32 *flags;

    func_0010B378(D_010CD438[D_001C4E9C[0]], D_004CA5B0);
    switch (D_001C4E9C[0]) {
    case 0:
        flags = D_010CD780;
        if (flags[0] != 0) {
            sel = 0;
        } else if (flags[1] != 0) {
            sel = 1;
        } else if (flags[2] != 0) {
            sel = 2;
        }
        break;
    case 1:
        flags = D_010CD780;
        if (flags[1] != 0) {
            sel = 1;
        } else if (flags[2] != 0) {
            sel = 2;
        } else if (flags[0] != 0) {
            sel = 0;
        }
        break;
    case 2:
        sel = 2;
        break;
    }
    if (sel == -1) {
        func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x47), func_00131120, D_001BB6C4[0]);
        return;
    }
    D_001BB6C4[0] = D_010CD448[sel];
    D_001C4E9C[0] = sel;
    if (func_001167E0(D_001BB6C4[0]) != 2) {
        return;
    }
    func_0010B378(D_010CD438[D_001C4E9C[0]], D_001BB720);
    func_00138990(D_001BB6C4[0]);
}
