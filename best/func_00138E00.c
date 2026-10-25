struct __attribute__((packed,aligned(4))) V12 {u64 a;u32 b;};
struct VT { s16 off; s16 pad; s32 (*fn)(void *, void *, void *, void *); };
struct Obj { char p0[0x10]; struct V12 pos; char p1[0x1C]; u16 h38; char p2[0xE]; char *vt; };
struct Arg { s32 f0, f4, f8; s32 fC, f10, f14; u16 f18; };
void func_00138758(s32, s32, s32 *);
void func_00138900(void *, s32);
void func_00143630(void *);
struct Obj *func_00143A58(void *);

s32 func_00138E00(s32 arg0, struct Arg *arg1) {
    char sp0[0xA0];
    char spA0[0x80];
    s32 sp120[4];
    f32 sp130[4];
    struct V12 sp140;
    u16 sp150;
    struct Obj *a, *b;
    struct VT *v;
    func_00138758(arg0, arg1->f4, sp120);
    func_00138900(spA0, sp120[0]);
    func_00138758(arg0, arg1->f8, sp120);
    func_00138900(sp0, sp120[0]);
    a = func_00143A58(sp0);
    b = func_00143A58(spA0);
    sp130[0] = arg1->fC;
    sp130[1] = arg1->f10;
    sp130[2] = arg1->f14;
    v = (struct VT *)(a->vt + 0x98);
    v->fn((char *)a + v->off, sp130, &sp140, &sp150);
    b->pos = sp140;
    b->h38 = sp150 + arg1->f18;
    func_00143630(b);
    return 0;
}
