typedef struct O { char p0[0xC]; s32 flags; f32 pos[3]; char p1[0x3C0 - 0x1C]; s32 dead; } O;
typedef struct N { char p0[0xC]; O *obj; } N;
extern f32 D_00482004;
extern N *D_0042DD90[];
void func_00249E10(void);
O *func_00249408(O *self) {
    f32 best = D_00482004;
    O *result = 0;
    N **tp;
    f32 *sp;
    s32 i;
    if (self->dead) func_00249E10();
    tp = D_0042DD90;
    sp = self->pos;
    for (i = 9; i >= 0; i--) {
        N *n = *tp++;
        if (n) {
            O *o = n->obj;
            if (!(o->flags & 8) && !o->dead) {
                f32 *q = o->pos;
                f32 dx = sp[0] - q[0];
                f32 dy = sp[1] - q[1];
                f32 dz = sp[2] - q[2];
                f32 d = dx * dx + dy * dy + dz * dz;
                if (d < best) { result = o; best = d; }
            }
        }
    }
    return result;
}
