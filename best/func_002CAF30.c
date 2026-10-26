typedef unsigned char u8;
typedef signed char s8;
typedef unsigned int u32;
typedef struct { u8 t; u8 idx; s8 id; s8 txt[0x7B]; } Ent;
extern s8 D_00483829;
extern int D_00483F30, D_004844A8, D_00484CA4, D_004865DC, D_00486DAC;
extern Ent D_008D88B8[];
extern Ent D_008D8938[];
extern int D_008D8D28[];
extern char D_00408600[];
extern int func_002CA440(void);
extern int func_001D38B0(void);
extern void func_00172BC8(int, int, int, int);
extern void func_00172F88(void *);
extern u32 func_001AC1D0(int, int);
extern void *func_002CA660(int, void *, void *, void *, int, u32);

#define BLINK(e) if ((e)->idx != 0xFF) { ((s8 *)(e))[(e)->idx + 3] = (((D_004844A8 % 60) / 30 == 0) - 0x74); }

void func_002CAF30(void) {
    Ent *e;
    u32 col;
    void *r;
    int i;
    int *dp;
    if (D_00483829 == 0) {
        while (func_002CA440() != -1) {}
        return;
    }
    if (D_00483F30 == 0 && func_001D38B0() == 0 && D_004865DC != 0) {
        func_00172BC8(D_00484CA4, 6, 0x7F808080, -1);
        int half = D_00486DAC;
        e = D_008D88B8;
        col = func_001AC1D0(e->id, 0x7F);
        if (half) {
            col = (((col & 0xFF) >> 1) | ((col >> 24) << 24))
                | ((((col >> 16) & 0xFF) >> 1) << 16 | ((col >> 1) & 0x7F00));
        }
        BLINK(e)
        if (e->t == 1)
            r = func_002CA660(0x14, (void *)0x186, 0, 0, 0x258, col);
        else
            r = func_002CA660(0x14, (void *)0x186, e->txt, 0, 0x258, col);
        dp = D_008D8D28;
        e = D_008D8938;
        for (i = 7; i >= 0; i--, dp++, e = (Ent *)((char *)e + 0x7E)) {
            if (e->id != -2) {
                void *q = (void *)(e->id * 0x5DB0 + (int)D_00408600);
                if (*dp < 0x259) {
                    int v = 0x7F;
                    u32 c;
                    if (*dp >= 0x1E0) v = ((0x258 - *dp) * 0x7F) / 0x78;
                    c = func_001AC1D0(e->id, v);
                    BLINK(e)
                    if (q == 0 && e->t == 1)
                        r = func_002CA660(0x14, r, 0, 0, 0x258, c);
                    else
                        r = func_002CA660(0x14, r, e->txt, q, 0x258, c);
                }
            }
        }
        func_00172F88(r);
    }
}
