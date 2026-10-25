typedef struct { s32 name; s32 id; } NameE;
typedef struct { s32 key; s16 idx; u8 pad[4]; u8 b[5]; u8 pad2[13]; } Ent;
typedef struct {
    u8 pad[0x34];
    NameE *names;
    Ent *ents;
    u8 pad2;
    u8 mode;
    u8 pad3[2];
    s32 time;
} Obj;
extern f32 func_0024C4C0(Obj *, Ent *);
extern s32 func_0024F608(s32, s32);
extern s32 func_003044FC(s32, char *);
extern char D_00463398[];
extern char D_00483F80[];

void func_0015FD98(Obj *o) {
    s32 n, i;
    if (o->names == 0) return;
    n = 0;
    if (o->names[0].name != 0) {
        i = 0;
        do {
            n++;
            o->names[i].id = func_0024F608(o->names[i].name, 0);
            i++;
        } while (o->names[i].name != 0);
    }
    i = 0;
    while (o->ents[i].key != 0x7FFFFFFF) {
        if (o->ents[i].idx >= 0) {
            if (func_003044FC(o->names[o->ents[i].idx].name, D_00463398) == 0) {
                o->ents[i].idx = -3;
            } else if (func_003044FC(o->names[o->ents[i].idx].name, D_00483F80) == 0) {
                o->ents[i].idx = -4;
            }
        }
        i++;
    }
    if (o->mode == 0) {
        i = 0;
        while (o->ents[i].key != 0x7FFFFFFF) {
            o->ents[i].b[0] = 0;
            o->ents[i].b[1] = 0;
            o->ents[i].b[2] = 0;
            o->ents[i].b[3] = 0;
            o->ents[i].b[4] = 0;
            i++;
        }
    }
    if (o->mode < 2) {
        i = 0;
        while (o->ents[i].key != 0x7FFFFFFF) {
            s16 t = o->ents[i].idx;
            s32 w;
            o->ents[i].idx = t;
            w = t;
            if (w < n && w >= -2) {
            } else if (n == 0) o->ents[i].idx = -1;
            else o->ents[i].idx = 0;
            i++;
        }
    }
    o->time = func_0024C4C0(o, o->ents) * 60.0f;
}
