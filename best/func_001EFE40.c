typedef struct P { char pad0[0xC]; volatile s32 c; char pad1[4]; volatile s32 d; char pad2[4]; volatile s32 e; } P;
typedef struct A { char pad[0x24]; P *p; char pad2[0x230 - 0x28]; f32 f0; f32 f1; } A;
extern s32 func_00109808(void *, s32, s32, s32);
s32 func_001EFE40(A *a) {
    P *p = a->p;
    if (a->f0 < a->f1 * 0.25f) {
        return func_00109808(a, p->c, p->e, 0);
    } else {
        func_00109808(a, p->c, p->d, 0);
    }
}
