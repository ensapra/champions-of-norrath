typedef struct { s32 tab[11]; s32 count; s32 cur; } Sel;
extern Sel D_010F44A8;
extern char jtbl_004C006C[];
s32 func_001A2850(char *, ...);
void func_0019BC38(s32);
void func_0019BFD8(s32);

void func_00186DF8(void) {
    Sel *s = &D_010F44A8;
    s32 n = s->count;
    u32 i = s->cur + 1;
    if (n == 1) return;
    if (i >= n) i = 0;
    func_001A2850(jtbl_004C006C + 0xDF04, n, i);
    func_0019BC38(s->tab[i]);
    func_0019BFD8(7);
}
