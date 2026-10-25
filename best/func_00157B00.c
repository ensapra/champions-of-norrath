typedef struct {
    char pad0[0x89C];
    s32 unk89C;
    char pad8A0[0x8A8 - 0x8A0];
    char unk8A8[0x940 - 0x8A8];
    s32 unk940;
    s32 unk944;
} Obj157B00;

void func_0014CE60(Obj157B00 *, s32, s32);
void func_0014CF0C(Obj157B00 *, s32, s32);
void func_00157EE4(Obj157B00 *, s32, s32);
void func_00157F64(Obj157B00 *, s32, s32);
void func_00157FF4(Obj157B00 *, s32 *, s32 *, s32 *, s32 *, s32 *, s32 *, s32 *, s32 *);
s32 func_0016FB28(void *);
s32 func_0016FBAC(void *, s32, s32);
extern char func_001C8098[];

void func_00157B00(Obj157B00 *o) {
    s32 h, a, b, c, d, e, f, g;
    s32 *ph, *pa, *pb, *pc, *pd, *pe, *pf, *pg;
    s32 x0, y0, x1, y1;
    void *p = o->unk8A8;
    s32 r;

    if (o->unk89C != 0) {
        r = func_0016FB28(p);
        ph = &h; pa = &a; pb = &b; pc = &c; pd = &d; pe = &e; pf = &f; pg = &g;
        if (r != 0) {
            o->unk89C = 0;
            if (o->unk944 != o->unk940) {
                if (o->unk944 != 0) {
                    func_00157EE4(o, 0, 0);
                } else {
                    func_00157F64(o, 0, 0);
                }
            }
        } else {
            func_00157FF4(o, pa, pb, pc, pd, pe, pf, pg, ph);
            x0 = func_0016FBAC(p, a, e);
            y0 = func_0016FBAC(p, b, f);
            x1 = func_0016FBAC(p, c, g);
            y1 = func_0016FBAC(p, d, h);
            func_0014CE60(o, x0, y0);
            func_0014CF0C(o, x1 - x0, y1 - y0);
        }
    }
    (*(void (**)(Obj157B00 *))(func_001C8098 + 0x56C))(o);
}
