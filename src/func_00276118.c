typedef struct { char pad[0x16C]; f32 f; char pad2[0x14]; s32 flag; } Obj;
typedef struct {
    char pad0[0x2E8]; f32 a; f32 b; char pad1[0x390 - 0x2F0]; f32 c; char pad2[0x3E8 - 0x394]; s32 n;
    char pad3[0x41C - 0x3EC]; Obj *objs[0xFA]; f32 *p; char pad4[0x868 - 0x808]; s32 neg;
} S;
void func_002783C0(Obj *);
void func_00278458(Obj *, f32);
void func_00276118(S *s)
{
    f32 f1 = s->b;
    f32 r, v;
    s32 i;
    if (f1 < 0.0f) s->b = 0.0f;
    if (f1 != 0.0f) r = s->b / f1; else r = 1.0f;
    for (i = 0; i < s->n; i++) {
        func_002783C0(s->objs[i]);
        func_00278458(s->objs[i], s->objs[i]->f * r);
        if (s->objs[i]->flag != 0) {
            v = s->b / (*s->p / s->c);
            if (s->neg != 0) v = -v;
            else if (v < 0.0f) v = 0.0f;
            func_00278458(s->objs[i], v * (1.0f - s->a));
        }
    }
}
