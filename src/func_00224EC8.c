typedef struct { s16 delta; s16 pad; void (*fn)(void *); } VEntry;
typedef struct {
    char pad0[0x48];
    VEntry *vt;
    char name[0x11C - 0x4C];
    s32 flags;
    s32 f120;
    char pad124[0x178 - 0x124];
    s32 kind;
} Obj224EC8;
s32 func_00165DC0(char *, char *);
void func_0024D308(s32, Obj224EC8 *, f32);
s32 func_00304168(char *, char *);
extern char D_00470EC8[];
extern char D_00470ED8[];
extern char D_00470EE8[];
extern char D_00470F78[];
extern char D_00470F88[];
extern char D_00470F98[];

void func_00224EC8(Obj224EC8 *o) {
    VEntry *e;
    if (!(o->flags & 0x40))
        return;
    if (o->f120 == 0)
        return;
    e = &o->vt[17];
    e->fn((char *)o + e->delta);
    if (o->kind == 1 && func_00304168(o->name, D_00470EC8) == 0) {
        func_0024D308(func_00165DC0(D_00470ED8, D_00470EE8), o, 1.0f);
        return;
    }
    if (func_00304168(o->name, D_00470F78) == 0)
        func_0024D308(func_00165DC0(D_00470F88, D_00470F98), o, 1.0f);
}
