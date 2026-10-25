typedef struct { s8 c[14]; } T;
typedef struct { s64 a; s32 b; s16 c; } U;
extern s32 D_001C4D8C[];
extern s32 D_001C4D78[];
extern T D_004CA250[];
extern T D_004CA260[];
extern s32 D_010CD0F0[];
extern s32 D_010CD0F4[];
s32 func_00140020(void);
s32 func_001404D0(void);
s32 func_001404F0(void);
void func_001403B8(void);
void func_00140ED8(T *, T *);

s32 func_0012A678(void) {
    switch (D_001C4D8C[0]) {
    case 0:
        if (func_00140020() != 0) return 0;
        if (func_001404D0() != 0) return 0;
        if (D_010CD0F4[0] > 0) {
            D_010CD0F4[0]--;
        } else {
            T a = D_004CA250[0];
            T b = D_004CA260[0];
            if (D_001C4D78[0] == 2) {
                U *g1 = (U *)&D_004CA250[0];
                U *g2 = (U *)&D_004CA260[0];
                ((U *)&a)->a = g2->a;
                ((U *)&a)->b = g2->b;
                ((U *)&a)->c = g2->c;
                ((U *)&b)->a = g1->a;
                ((U *)&b)->b = g1->b;
                ((U *)&b)->c = g1->c;
            }
            func_001403B8();
            func_00140ED8(&b, &a);
            D_001C4D8C[0] = 1;
        }
        return 0;
    case 1:
        if (func_001404D0() != 0) return 0;
        D_010CD0F0[0] = func_001404F0();
        return 1;
    default:
        return 0;
    }
}
