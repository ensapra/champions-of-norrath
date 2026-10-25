typedef struct { s32 id; s32 *mem; } Slot;
typedef struct { s32 a; s32 size; } Ent;
typedef struct { char pad[0x58]; s32 base; char pad2[0x64-0x5C]; Ent *tab; } Ctx;
extern u8 D_0034C030[];
extern s32 *D_00355C70[];
extern char D_0037F988[];
extern char D_00463620[];
extern char D_00484100[];
extern Ctx *D_004844A0;
extern s32 D_00486984;
extern Slot D_006E9390[];
s32 *func_00144368(s32, char *, s32);
void func_00165120(void *, s32 *, s32, s32);
void func_0016D278(Ctx *, void *, void *, s32 *);
void func_00303EB8(void *, char *, char *);

void func_001703A0(void) {
    char buf[0x70];
    u8 tbl[256];
    s32 i, j;
    s32 id, size, n;
    s32 *mem, *p;
    u8 *q;
    i = 0;
    if (D_00486984 > 0) do {
        id = D_006E9390[i].id;
        size = D_004844A0->tab[id - D_004844A0->base].size;
        size = (size + 0x7FF) & -0x800;
        mem = func_00144368(size, D_00463620, -0x800);
        D_006E9390[i].mem = mem;
        D_0034C030[id] = i + 9;
        (D_00355C70 + 9)[i] = mem;
        func_00303EB8(buf, D_00484100, D_0037F988);
        func_00165120(buf, mem, size, D_004844A0->tab[id - D_004844A0->base].a);
        q = tbl + 255;
        j = 255;
        do {
            *q-- = j;
            j--;
        } while (j >= 0);
        n = mem[0];
        p = mem + 16;
        while (n > 0) {
            func_0016D278(D_004844A0, p, tbl, mem);
            p += 16;
            n--;
        }
        i++;
    } while (i < D_00486984);
}
