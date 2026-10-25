struct Ent { s16 id; s16 a; s16 b; s16 c; };
struct Sub { char pad[0x24]; Ent e[4]; };
struct Obj {
    char pad0[0x9C];
    s8 mode;
    char pad1[0xD0 - 0x9D];
    s32 state;
    char pad2[0x408 - 0xD4];
    Sub sub;
};
class Cls {
public:
    char pad[0x60];
    virtual s32 v1(s32, ...);
    virtual s32 v2(s32, ...);
    virtual s32 v3(s32, ...);
    virtual s32 v4(s32, ...);
    virtual s32 v5(s32, ...);
    virtual s32 v6(s32, ...);
    virtual s32 v7(s32, ...);
    virtual s32 v8(s32, ...);
    virtual s32 v9(s32, ...);
    virtual s32 v10(s32, ...);
    virtual s32 v11(s32, ...);
    virtual s32 v12(s32 a, s32 b);
};
extern "C" {
extern s32 func_00153FA8(void *);
extern Cls *D_0034B474[];
extern f32 D_00480BB8;
extern f32 D_00484CAC;
void func_001E9EA8(Obj *o);
}

void func_001E9EA8(Obj *o) {
    s32 i;
    s32 v, val;
    s16 kind, zero;
    f32 sp;
    s16 *r, *p;
    Sub *s = &o->sub;
    for (i = 3; i >= 0; i--) s->e[i].id = -1;
    o->mode = 0;
    switch (o->state) {
    case 1:
        v = D_0034B474[0]->v12(0, (s32)D_00484CAC);
        kind = 0x15;
        sp = (f32)v * D_00480BB8;
        val = v + (s32)(sp * ((f32)func_00153FA8(o) * 0.000015258789f));
        zero = 0;
        i = 0;
        p = &s->e[0].id;
        r = &s->e[0].c;
        do {
            if (*p == -1 || *p == kind) {
                *p = kind;
                *r = zero;
                r[-2] = v;
                r[-1] = val;
                break;
            }
            i++;
            p += 4;
            r += 4;
        } while (i < 4);
        o->mode = 2;
        break;
    case 2:
    case 3:
        o->mode = 8;
        break;
    case 4:
        o->mode = 6;
        break;
    }
}
