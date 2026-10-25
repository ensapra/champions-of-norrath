extern s32 func_001B5C80(void);
extern void func_001B5CD8(void);
typedef struct N { u8 pad[0x14]; struct N *next; } N;
extern u8 D_01109780[];

N *func_001B0CE8(N *arg0) {
    N *p;
    u8 *b;
    func_001B5C80();
    b = D_01109780;
    p = *(N **)(b + 0x28);
    if (p == arg0) {
        *(N **)(b + 0x28) = p->next;
    } else if (p != 0) {
        while (p->next != arg0) {
            p = p->next;
            if (p == 0) goto done;
        }
        p->next = arg0->next;
    }
done:
    func_001B5CD8();
    return p;
}

typedef struct M { s32 f0, f4, f8, fC, f10; struct M *next; } M;

void func_001B0AE8(M *arg0, s32 arg1) {
    u8 *b;
    M *p;
    func_001B5C80();
    b = D_01109780;
    arg0->f0 = arg1;
    arg0->f4 = 0;
    arg0->f8 = 0;
    arg0->fC = 0;
    arg0->f10 = 0;
    arg0->next = 0;
    p = *(M **)(b + 0x28);
    if (p == 0) {
        *(M **)(b + 0x28) = arg0;
    } else {
        while (p->next != 0) {
            p = p->next;
        }
        p->next = arg0;
    }
    func_001B5CD8();
}

extern s32 jtbl_004C006C[];
extern u8 D_0110B000[];
extern s32 D_0110B040[];
extern s32 D_0110B080[];
s32 func_001B08B0(void *, s32, s32, s32 *, s32, s32 *, s32, s32, s32);

s32 func_001B4868(s32 a) {
    if (jtbl_004C006C[0x3F48 / 4] < 0)
        return 0;
    D_0110B080[0] = a;
    if (func_001B08B0(D_0110B000, 2, 0, D_0110B080, 4, D_0110B040, 4, 0, 0) < 0)
        return -1;
    return D_0110B040[0];
}

extern u8 D_0110AF80[];
extern u8 D_004C3F9C[];
void func_001B1538(s32);
void func_001B1668(void);
void func_001B1568(void);

s32 func_001B1578(s32 arg0, s32 arg1) {
    s32 *p = (s32 *)D_0110AF80;
    s32 old, r;
    func_001B1538(0x1B);
    if (*(s32 *)D_004C3F9C == 0) func_001B1668();
    r = func_001B5C80();
    old = p[0];
    p[1] = arg1;
    p[0] = arg0;
    if (r != 0) func_001B5CD8();
    func_001B1568();
    return old;
}
