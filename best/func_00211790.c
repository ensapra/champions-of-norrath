typedef struct { f32 x, y, z; } V3;
typedef struct { s32 a; s32 a1; s32 b; s32 c; s32 d; } Inf;
typedef struct { char pad[0x10]; V3 pos; s32 f1c; s32 f20; Inf *inf; char pad2[0x10]; s16 ang; char pad3[0xBA]; s32 flags; char pad4[0x28]; char blk[0x108]; s64 res; } Obj;
typedef struct { char pad[0x1C4]; f32 t; } Eff;
Eff *func_001441B8(s32);
s64 func_0016C970(s32, s32);
Eff *func_001E5190(void *, V3 *, s16, s32, void *, s32, s32, s32, f32, s64, s32, s32);

void func_00211790(Obj *o, s32 k) {
    s64 v = 0;
    Eff *obj, *e;
    switch (k) {
    case 2: v = 4; o->flags |= 2; break;
    case 3: v = 6; o->flags |= 4; break;
    case 4: v = 0x40; o->flags |= 8; break;
    case 5: v = 0xC00; o->flags |= 0x10; break;
    case 6: v = 0x80; o->flags |= 0x20; break;
    case 7: v = 0x300; o->flags |= 0x40; break;
    }
    obj = func_001441B8(0x268);
    if (obj) {
        V3 pos = o->pos;
        e = func_001E5190(obj, &pos, o->ang, o->inf->c, o->blk, o->inf->a, o->inf->b, o->inf->d, 1.0f, v, 7, 2);
        if (e) e->t += 2.0f;
    }
    o->res = func_0016C970(o->inf->c, o->flags);
}
