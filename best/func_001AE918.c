typedef struct B { s32 p0; s32 p4; s32 p8; u8 *pC; } B;
typedef struct St { s32 o0; s32 o4; s32 o8; s32 oC; s32 o10; u8 *o14; B *o18; } St;
extern u8 jtbl_00503023[];
void func_001AF6D8(void *, ...);
void func_001AE898(B *);
s32 func_001B7FB8(s32, u8 *, u16);
s32 func_001B7FF0(s32, s32, u16);

void func_001AE918(s32 mode, s32 n, St *st) {
    s32 r;
    switch (mode) {
    case 1:
    case 2:
        if (n == 0) {
            u8 *p = st->o14;
            n = 12;
            while (n < *(u16 *)p) {
                *st->o18->pC = p[n];
                n++;
                func_001AE898(st->o18);
            }
            st->o8 = 0;
        } else {
            if ((u32)(st->o8 + n) > 0x140) func_001AF6D8(jtbl_00503023 + 0x43BD);
            n = func_001B7FB8(st->o0, st->o14 + st->o8, n);
            if (n < 0) func_001AF6D8(jtbl_00503023 + 0x43E5);
            st->o8 += n;
        }
        break;
    case 3:
        r = func_001B7FF0(st->o0, st->o10, st->o4);
        if (r < 0) {
            func_001AF6D8(jtbl_00503023 + 0x43FD);
        } else {
            st->o10 += r;
            st->o4 -= r;
            return;
        }
        st->oC = 0;
        break;
    case 4:
        if (st->o4) func_001AF6D8(jtbl_00503023 + 0x4415, st->o4);
        st->oC = 0;
        break;
    }
}
