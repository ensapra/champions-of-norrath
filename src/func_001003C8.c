extern void func_00164F00(void *, s32, s32 *, s32);
extern void *func_00144368(s32, const char *);
extern void func_00165120(void *, void *, s32, s32);
extern char D_00454300[];
extern char D_00454310[];
typedef struct { s32 a; s32 b; s32 c; } PicEnt;
s32 *D_0048320C;
s32 D_00483210;
PicEnt *D_00486800;

void func_001003C8(void)
{
    s32 size;
    s32 i;

    func_00164F00(D_00454300, 0, &size, 0);
    size = (size + 0x7FF) & ~0x7FF;
    D_0048320C = func_00144368(size, D_00454310);
    func_00165120(D_00454300, D_0048320C, size, 0);
    D_00483210 = *D_0048320C;
    D_00486800 = (PicEnt *)(D_0048320C + 1);
    for (i = 0; i < D_00483210; i++) {
        D_00486800[i].b += (s32)D_0048320C;
        D_00486800[i].a += (s32)D_0048320C;
    }
}
