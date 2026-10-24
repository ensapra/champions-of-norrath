typedef struct {
    s32 depth;
    s32 vals[0x23];
    s32 ptrs[0x20];
} Stack174;

extern Stack174 D_010EA730;

typedef struct {
    s32 a;
    s32 pad[7];
    s16 x;
    s16 y;
    s32 pad2;
} Ent1E0;

typedef struct {
    u8 pad[0x18];
    s32 x;
    s32 y;
} Pos;

extern Ent1E0 D_010EA1E0[];
extern u8 func_001CE218[];
void func_0018E0C0(s32);
void func_00171AE0(s32);

void func_00174F54(s32 i) {
    Ent1E0 *e = &D_010EA1E0[i];
    s16 *xy = &D_010EA1E0[i].x;
    Pos *p;
    func_0018E0C0(e->a + 0x10);
    p = (Pos *)(func_001CE218 + 0x2010);
    p->x = xy[0];
    p->y = xy[1];
}

s32 func_00174EB0(void) {
    Stack174 *s = &D_010EA730;
    s32 n;
    s32 q;
    Pos *p;
    if (s->depth == 0) {
        return -1;
    }
    n = --s->depth;
    q = s->ptrs[n];
    if (q != 0) {
        func_00171AE0(q);
        p = (Pos *)(func_001CE218 + 0x2010);
        n = s->vals[s->depth];
        p->x = D_010EA1E0[n].x;
        p->y = D_010EA1E0[n].y;
        return n;
    }
    return 0xFFFF;
}
