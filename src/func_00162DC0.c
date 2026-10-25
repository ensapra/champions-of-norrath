typedef struct { s32 d[0xF00 / 4]; } TBig_162BF0;
typedef struct Inst_162BF0 {
    s32 a, b, c;
    s32 unkC;
    s32 unk10;
    void *owner;
    s32 unk18;
    TBig_162BF0 body;
} Inst_162BF0;
typedef struct {
    s32 unk0;
    Inst_162BF0 *inst;
    s32 pad[5];
    u16 flags;
    u16 pad2;
} Elem_162BF0;
typedef struct {
    s32 unk0;
    s8 unk4;
    s8 count;
    s8 pad[2];
    Elem_162BF0 e[4];
} Obj_162DC0;

Inst_162BF0 *func_00161450(void);

void func_00162DC0(Obj_162DC0 *dst, Obj_162DC0 *src) {
    s32 i;
    Inst_162BF0 *r;
    Inst_162BF0 *s;
    s32 t0, t1;

    dst->count = 1;
    *dst = *src;
    dst->unk0 = 0;
    for (i = 0; i < dst->count; i++) {
        if (src->e[i].inst == 0) {
            dst->e[i].inst = 0;
        } else if (!(dst->e[i].flags & 0x4800)) {
            dst->e[i].inst = 0;
        } else {
            r = func_00161450();
            dst->e[i].inst = r;
            r->owner = &dst->e[i];
            s = src->e[i].inst;
            t0 = s->c;
            t1 = s->a;
            r->c = t0;
            r->a = t1;
            r->b = s->b;
            r->body = s->body;
        }
    }
}
