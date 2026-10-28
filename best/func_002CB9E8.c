typedef struct { u8 value; u8 enabled; } A;
typedef struct { u8 pad[0x210]; s32 mode; s32 old; } O;
typedef struct { u8 value, flag; } Rec;
extern s32 D_00442148[];
s32 D_004865E0;
u8 func_002CBBE0(O *, s32);
void func_002CC070(void *, Rec *);
void func_002CB9E8(O *o, A *a) {
    s32 *tbl = D_00442148;
    s32 n = D_004865E0;
    s32 i, m;
    s32 id, found;
    u8 r;
    Rec rec;
    if (a->enabled) {
        m = o->mode;
        if (m) {
            o->old = a->value;
            r = func_002CBBE0(o, a->value);
            if (!r) {
                rec.value = o->mode; rec.flag = 1; func_002CC070(o, &rec);
                rec.flag = 0; func_002CC070(o, &rec);
                rec.value = a->value; rec.flag = 1; func_002CC070(o, &rec);
                rec.flag = 0; func_002CC070(o, &rec);
            } else {
                rec.value = r; rec.flag = 1; func_002CC070(o, &rec);
                rec.flag = 0; func_002CC070(o, &rec);
            }
            o->mode = 0;
        } else {
            i = 0;
            found = m;
            if (n > 0) {
                id = a->value;
                if (id == tbl[0]) { o->mode = id; found = id; }
                else {
                    for (i = 1; i < n; i++) {
                        if (id == tbl[i]) { o->mode = id; found = id; break; }
                    }
                }
            }
            if (!found) func_002CC070(o, (Rec *)a);
        }
    } else {
        found = 0;
        if (n > 0) {
            id = a->value;
            if (id == tbl[0]) found = id;
            else {
                for (i = 1; i < n; i++) {
                    if (id == tbl[i]) { found = id; break; }
                }
            }
        } else id = a->value;
        if (!found) {
            if (o->old != id) {
                func_002CC070(o, (Rec *)a);
                id = a->value;
            }
        }
        if (o->old == id) o->old = 0;
    }
}
