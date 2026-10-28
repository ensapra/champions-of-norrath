typedef struct { u64 lo : 6; u64 b6 : 1; u64 hi : 57; } Bits;
typedef struct { Bits b; u8 pad[0x318]; } Sub;
typedef struct { u8 head[0x6F0]; Sub sub[6]; u8 tail[0x10]; } Elem;
typedef struct { u8 hdr[0x10]; Elem e[2]; u8 pad3[0x33C0 - 0x3390]; s32 flag; } X;
typedef struct { u8 pad[0x4EC]; s32 idx; u8 pad2[0x910 - 0x4F0]; X x; } Obj;

void func_001606F4(Obj *o)
{
    X *x = &o->x;
    Elem *e = &x->e[o->idx];
    s32 v = x->flag;
    e->sub[0].b.b6 = e->sub[1].b.b6 = e->sub[2].b.b6 = e->sub[3].b.b6 = e->sub[4].b.b6 = e->sub[5].b.b6 = v;
}
