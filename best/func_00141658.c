typedef struct Ob { s32 a; s32 b; s32 c; s32 pad[8]; char **list; s32 q[5]; void *vt; } Ob;
extern char D_00483AE8[];
extern u8 D_0047E1F1[];
extern u8 D_0044D498[];
s32 func_00304F60(const char *, const char *, s32);
void func_00140580(char *, Ob *);
void func_00194300(void *, void *);
void func_001447D8(Ob *);

static inline char *find_attr(Ob *o, s32 n)
{
    char *p;
    char **l;
    s32 i, prev;
    if (o->list == 0) return 0;
    for (p = D_00483AE8; *p != 0; p++) {
        s8 c = *p;
        if (D_0047E1F1[c] & 1) c += 0x20;
        *p = c;
    }
    l = o->list;
    if (l[0] == 0) return 0;
    prev = 0;
    i = 0;
    do {
        char *s = l[i++];
        l = o->list;
        if (func_00304F60(s, D_00483AE8, 4) == 0) {
            char *e = l[prev];
            if (e[4] == 0x3D && --n == -1) return e + 5;
        }
        prev = i;
    } while (l[i] != 0);
    return 0;
}

void func_00141658(Ob *o, s32 flag) {
    s32 n = 0;
    char *r;
    *(void **)((char *)o + 0x48) = D_0044D498;
    while (find_attr(o, n) != 0) {
        r = find_attr(o, n);
        n++;
        func_00140580(r, o);
    }
    func_00194300((char *)o + 8, o->list);
    func_00194300((char *)o + 4, 0);
    func_00194300(o, 0);
    if (flag & 1)
        func_001447D8(o);
}
