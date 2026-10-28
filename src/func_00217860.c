s32 func_00143D10(s32); s32 func_00165DC0(s32,s32);
typedef struct O { char p0[0xC]; s32 flags; char p1[0x0C]; f32 fx, fy; char p2[0x4C-0x24]; void *a,*b,*c,*d,*e; s32 f,g,h; } O;
#define R32(p) (*(s32*)((p += 4) - 4))
#define R16(p) (*(s16*)((p += 2) - 2))
s32 func_00217860(O *o, char *p) {
    char *start = p;
    o->a = (void*)func_00143D10(R32(p));
    o->b = (void*)func_00143D10(R32(p));
    o->c = (void*)func_00143D10(R32(p));
    o->d = (void*)func_00143D10(R32(p));
    o->e = (void*)func_00143D10(R32(p));
    o->fx = (f32)R16(p);
    o->fy = (f32)R16(p);
    o->h = R32(p);
    o->f = func_00165DC0((s32)o->a, (s32)o->b);
    o->g = func_00165DC0((s32)o->a, (s32)o->c);
    if (o->h & 4)
        o->flags |= 0x100000;
    return p - start;
}
