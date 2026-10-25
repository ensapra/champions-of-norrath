typedef struct S {
    char pad0[0x910];
    s32 f910;
    s32 f914;
    char pad918[8];
    s64 f920;
    s32 f928;
    s32 f92C;
    s64 f930;
    s64 f938;
    s64 f940;
    s32 f948;
    s32 f94C;
    s32 f950;
    s32 f954;
    s32 f958;
    s32 f95C;
} S;
extern s32 (*D_001C8E50[])(void);
void func_00157164(S *);
void func_001571B4(S *);

s32 func_00156EC4(S *a, S *b, S *c) {
    s32 r;
    a->f914 = 0;
    a->f910 = 0;
    r = D_001C8E50[0]();
    if (b->f930 != c->f930) {
        a->f920 = a->f930;
        a->f930 = b->f930;
        func_001571B4(a);
        if (a->f920 != a->f930) {
            func_00157164(a);
            a->f910 = 1;
            a->f92C = 2;
        }
        r = 1;
    }
    if (b->f938 != c->f938) { a->f938 = b->f938; a->f910 = 1; r = 1; }
    if (b->f940 != c->f940) { a->f940 = b->f940; a->f910 = 1; r = 1; }
    if (b->f948 != c->f948) { a->f948 = b->f948; a->f914 = 1; r = 1; }
    if (b->f94C != c->f94C) { a->f94C = b->f94C; a->f914 = 1; r = 1; }
    if (b->f950 != c->f950) { a->f950 = b->f950; a->f914 = 1; r = 1; }
    if (b->f954 != c->f954) { a->f954 = b->f954; a->f914 = 1; r = 1; }
    if (b->f958 != c->f958) { a->f958 = b->f958; a->f914 = 1; r = 1; }
    if (b->f95C != c->f95C) { a->f95C = b->f95C; a->f914 = 1; r = 1; }
    if (a->f910 != 0) {
        func_00157164(a);
    }
    return r;
}
