extern s32 FlushCache_2(s32);
extern s32 SetSyscall_11(s32, s32);
extern s32 Copy_9(s32, void *, s32);
extern s32 GetEntryAddress_7(s32);
extern s32 D_00445200[];
extern s32 D_00445940[];
typedef struct { s32 n, f; } Ent;
typedef struct { Ent a, b; Ent e[6]; } Tbl;
extern Tbl D_00445968;

void func_002DDDC8(void) {
    Ent *p;
    u32 i;
    if (!(*(volatile s32 *)0x10001810 & 0x100)) {
        Tbl *t = &D_00445968;
        i = 2;
        SetSyscall_11(t->a.n, t->a.f);
        p = t->e;
        Copy_9(0x80076000, D_00445200, 0x740);
        Copy_9(0x82000, D_00445940, 0x28);
        FlushCache_2(0);
        FlushCache_2(2);
        SetSyscall_11(t->b.n, t->b.f);
        do {
            i++;
            SetSyscall_11(p->n, GetEntryAddress_7(p->n));
            p++;
        } while (i < 8);
    }
}
